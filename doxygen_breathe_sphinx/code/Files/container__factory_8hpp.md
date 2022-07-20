---
title: 'file Core/container_factory.hpp'

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
| class | **[Gambit::Likelihood_Container_Factory](/documentation/code/classes/classgambit_1_1likelihood__container__factory/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[LOAD_SCANNER_FUNCTION](/documentation/code/files/container__factory_8hpp/#define-load-scanner-function)**(tag, ...)  |

## Detailed Description


**Author**: Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 

**Date**: 2013 May, June, July 

Likelihood container factory declarations.



------------------

Authors (add name and date if you modify):




## Macros Documentation

### define LOAD_SCANNER_FUNCTION

```
#define LOAD_SCANNER_FUNCTION(
    tag,
    ...
)
REGISTER(__scanner_factories__, tag, __VA_ARGS__)
```


**Author**: 

  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 


**Date**: 

  * 2013 July 2013 Feb 2014
  * 2013 Aug 
  * 2014 May




------------------


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
//

#ifndef __container_factory_hpp__
#define __container_factory_hpp__

#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <string>

#include "gambit/Core/depresolver.hpp"
#include "gambit/Elements/functors.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Printers/basebaseprinter.hpp"
#include "gambit/ScannerBit/priors_rollcall.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/scan.hpp"

#define LOAD_SCANNER_FUNCTION(tag, ...) REGISTER(__scanner_factories__, tag, __VA_ARGS__)

namespace Gambit
{

  gambit_registry
  {
    typedef void* factory_type(const std::map<str, primary_model_functor *> &,
     DRes::DependencyResolver &b, IniParser::IniFile &c, const str &purpose, Printers::BaseBasePrinter& p);
    reg_elem <factory_type> __scanner_factories__;
  }

  class Likelihood_Container_Factory : public Scanner::Factory_Base
  {
    private:
      DRes::DependencyResolver &dependencyResolver;
      IniParser::IniFile &iniFile;
      std::map<str, primary_model_functor *> functorMap;
      Printers::BaseBasePrinter &printer;

    public:
      Likelihood_Container_Factory(const gambit_core &core, DRes::DependencyResolver &dependencyResolver,
       IniParser::IniFile &iniFile, Printers::BaseBasePrinter& printer);
      ~Likelihood_Container_Factory(){}
      void * operator() (const str &purpose) const;
  };

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
