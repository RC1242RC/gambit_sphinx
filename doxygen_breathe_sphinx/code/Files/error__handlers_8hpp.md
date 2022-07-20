---
title: 'file Core/error_handlers.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DRes](/documentation/code/namespaces/namespacegambit_1_1dres/)**  |

## Detailed Description


**Author**: Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 

**Date**: 2014 Mar

Exception object declarations.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __error_handlers_hpp__
#define __error_handlers_hpp__

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/local_info.hpp"

namespace Gambit
{

  error& core_error();
  warning& core_warning();

  namespace DRes
  {
    error& dependency_resolver_error();
    warning& dependency_resolver_warning();
  }
    
}

#endif //#ifndef error_handlers_hpp
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
