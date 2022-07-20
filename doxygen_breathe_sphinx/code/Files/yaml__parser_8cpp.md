---
title: 'file src/yaml_parser.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::IniParser](/documentation/code/namespaces/namespacegambit_1_1iniparser/)**  |
| **[YAML](/documentation/code/namespaces/namespaceyaml/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[READ](/documentation/code/files/yaml__parser_8cpp/#define-read)**(NAME)  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 


**Date**: 

  * 2013 May, June, July
  * 2014 Mar 
  * 2015 Mar 
  * 2020 Apr


Ini-file parser based on yaml-cpp



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define READ

```
#define READ(
    NAME
)
if (node[#NAME].IsDefined()) rhs.NAME = node[#NAME].as<std::string>();
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Core/yaml_parser.hpp"

namespace Gambit
{

  namespace IniParser
  {

    // Implementations of main inifile class

    const str IniFile::filename() const { return _filename; }

    void IniFile::readFile(std::string name)
    {

      // Store filename internally
      _filename = name;

      // Perform the basic read and parse operations defined by the parent.
      YAML::Node root = filename_to_node(_filename);
      basicParse(root,_filename);

      // Get the observables and rules sections
      YAML::Node outputNode = root["ObsLikes"];
      YAML::Node rulesNode = root["Rules"];

      // Read likelihood/observables
      for(YAML::const_iterator it=outputNode.begin(); it!=outputNode.end(); ++it)
      {
        observables.push_back((*it).as<Types::Observable>());
      }

      // Read rules
      for(YAML::const_iterator it=rulesNode.begin(); it!=rulesNode.end(); ++it)
      {
        rules.push_back((*it).as<Types::Observable>());
      }

      // Read KeyValue section, find the default path entry, and pass this on
      // to the Scanner, Logger, and Printer nodes
      YAML::Node keyvalue    = getKeyValuePairNode();
      YAML::Node scanNode    = getScannerNode();
      YAML::Node printerNode = getPrinterNode();
      YAML::Node logNode     = getLoggerNode();

    }

    const ObservablesType& IniFile::getObservables() const { return observables; }
    const ObservablesType& IniFile::getRules() const { return rules; }

  }

}

// Methods for converting from inifile to Observable format
namespace YAML
{
  using namespace Gambit::IniParser::Types;

  bool convert<Observable>::decode(const Node& node, Observable& rhs)
  {
    #define READ(NAME) if (node[#NAME].IsDefined()) rhs.NAME = node[#NAME].as<std::string>();
    READ(purpose)
    READ(capability)
    READ(type)
    READ(function)
    READ(module)
    READ(backend)
    READ(version)
    #undef READ

    if (node.Tag() == "!weak" or node.Tag() == "!weakrule")
      rhs.weakrule = true;
    else
      rhs.weakrule = false;

    // Strip leading "Gambit::" namespaces and whitespace, but preserve "const ".
    rhs.type = Gambit::Utils::fix_type(rhs.type);

    if (node["printme"].IsDefined())
        rhs.printme = node["printme"].as<bool>();

    if (node["options"].IsDefined())
        rhs.options = Gambit::Options(node["options"]);

    if (node["sub_capabilities"].IsDefined())
        rhs.subcaps = node["sub_capabilities"];

    if (node["functionChain"].IsDefined())
        rhs.functionChain = node["functionChain"].as<std::vector<std::string>>();

    for(YAML::const_iterator it=node["dependencies"].begin();
        it!=node["dependencies"].end(); ++it)
    {
      rhs.dependencies.push_back((*it).as<Observable>());
    }

    for(YAML::const_iterator it=node["backends"].begin();
        it!=node["backends"].end(); ++it)
    {
      rhs.backends.push_back((*it).as<Observable>());
    }

    return true;
  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
