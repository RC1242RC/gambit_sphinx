---
title: 'file Core/yaml_parser.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::IniParser](/documentation/code/namespaces/namespacegambit_1_1iniparser/)**  |
| **[Gambit::IniParser::Types](/documentation/code/namespaces/namespacegambit_1_1iniparser_1_1types/)**  |
| **[YAML](/documentation/code/namespaces/namespaceyaml/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::IniParser::Types::Observable](/documentation/code/classes/structgambit_1_1iniparser_1_1types_1_1observable/)**  |
| class | **[Gambit::IniParser::IniFile](/documentation/code/classes/classgambit_1_1iniparser_1_1inifile/)** <br>Main inifile class.  |
| struct | **[YAML::convert< Gambit::IniParser::Types::Observable >](/documentation/code/classes/structyaml_1_1convert_3_01gambit_1_1iniparser_1_1types_1_1observable_01_4/)**  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 


**Date**: 

  * 2013 June
  * 2014 Feb
  * 2014 Mar 
  * 2015 Mar 
  * 2020 Apr


Ini-file parser based on yaml-cpp



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __yaml_parser_hpp__
#define __yaml_parser_hpp__

#include "gambit/Utils/yaml_parser_base.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Elements/type_equivalency.hpp"

#include "yaml-cpp/yaml.h"


namespace Gambit
{

  namespace IniParser
  {

    namespace Types
    {

      // Dependency and Observable have the same type (and purpose entry is
      // irrelevant for dependencies)
      struct Observable
      {
        std::string purpose;
        std::string capability;
        std::string type;
        std::string function;
        std::string module;
        std::string backend;
        std::string version;
        bool printme; // Instruction to printer as to whether to write result to disk
        bool weakrule;  // Indicates that rule can be broken
        Options options;
        YAML::Node subcaps;
        std::vector<Observable> dependencies;
        std::vector<Observable> backends;
        std::vector<std::string> functionChain;

        Observable():
          purpose(),
          capability(),
          type(),
          function(),
          module(),
          backend(),
          version(),
          printme(true),
          options(),
          subcaps(),
          dependencies(),
          backends(),
          functionChain()
        {}
      };

    }

    typedef Types::Observable ObservableType;
    typedef std::vector<ObservableType> ObservablesType;

    class IniFile : public Parser
    {

      public:

        // Return the filename
        const str filename() const;

        virtual void readFile(str);

        const ObservablesType & getObservables() const;
        const ObservablesType & getRules() const;

      private:

        str _filename;

        ObservablesType observables;
        ObservablesType rules;

    };


  }

}


// Rules for inifile --> Observable mapping
namespace YAML
{
  template<>
  struct convert<Gambit::IniParser::Types::Observable>
  {
    static bool decode(const Node&, Gambit::IniParser::Types::Observable&);
  };
}


#endif /* defined(__yaml_parser_hpp__) */
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
