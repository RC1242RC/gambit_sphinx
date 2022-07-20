---
title: 'file Core/yaml_description_database.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::capability_info](/documentation/code/classes/structgambit_1_1capability__info/)** <br>Helper struct to carry around capability information.  |
| struct | **[Gambit::model_info](/documentation/code/classes/structgambit_1_1model__info/)** <br>Helper struct to carry around model information.  |
| class | **[Gambit::DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/)**  |

## Detailed Description


**Author**: Ben Farmer ([ben.farmer@gmail.com](mailto:ben.farmer@gmail.com)) 

**Date**: 2014 Aug,Sep

Small wrapper object for parsing and emitting capability/model etc. database information using yaml-cpp

Also in this file are the definitions of structs for carrying around capability/model information, as well as YAML emitters/decoders for these structs.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include <yaml-cpp/yaml.h>
#include <vector>
#include <sstream>
#include <utility>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/variadic_functions.hpp"
#include "gambit/Utils/yaml_variadic_functions.hpp"

#ifndef __yaml_description_database_hpp__
#define __yaml_description_database_hpp__

namespace Gambit
{
  struct capability_info
  {
     str name;
     std::map<str, std::set<std::pair<str,str> > > modset;
     std::map<str, std::set<std::pair<str,str> > > beset;
     str description;
     bool has_description;
  };

  struct model_info
  {
     str name; 
     std::vector<str> parameters; 
     int nparams;
     str parent; 
     std::vector<str> lineage;     
     std::vector<str> descendants;
     str description;
     bool has_description;
  };

  YAML::Emitter& operator << (YAML::Emitter&, const capability_info&);
  
  YAML::Emitter& operator << (YAML::Emitter&, const model_info&);
 
  class DescriptionDatabase 
  {

    public:

      DescriptionDatabase();

      DescriptionDatabase(const str& filename);

      DescriptionDatabase(const YAML::Node &descriptions);
      
      DescriptionDatabase(YAML::Node &&descriptions);

      template <typename... args>
      bool hasKey(const args&... keys) const
      {
        return getVariadicNode(descriptions, keys...);
      }

      template<typename TYPE, typename... args>
      TYPE getValue(const args&... keys) const
      {
        const YAML::Node node = getVariadicNode(descriptions, keys...);
        if (not node)
        {
          std::ostringstream os;
          os << "No entry for [" << stringifyVariadic(keys...) << "]\n Node contents:  " << descriptions;
          utils_error().raise(LOCAL_INFO,os.str());
        }
        return node.as<TYPE>();
      }
     
      
      template<typename... args>
      void loadFile(const str& filename)
      {
        try { 
          descriptions = YAML::LoadFile(filename);
        } 
        catch (YAML::Exception &e) {
          std::ostringstream msg;
          msg << "Error reading descriptions file \""<<filename<<"\"! ";
          msg << "Please check that file exists!" << endl;
          msg << "(yaml-cpp error: "<<e.what()<<" )";
          utils_error().raise(LOCAL_INFO,msg.str());
        }
      }

      std::map<str,int> check_for_duplicates();
          
      std::vector<str> get_all_values(str key);
     
    private:

      YAML::Node descriptions;

  };

} // end Gambit namespace


#endif //defined __yaml_description_database_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
