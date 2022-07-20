---
title: 'file src/error_handlers.cpp'

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

Exception object definitions.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Core/error_handlers.hpp"
#include "gambit/Logs/log_tags.hpp"

namespace Gambit
{
  using namespace LogTags;

  error& core_error()
  { 
    static error local("The Core has encountered a problem.","core_error", core); 
    return local;
  }

  warning& core_warning()
  {
    static warning local("The Core has encountered a problem.","core_warning", core);
    return local;
  }

  namespace DRes
  {

    error& dependency_resolver_error()
    {
      static error local("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_error", dependency_resolver);
      return local;
    }

    warning& dependency_resolver_warning()
    {
      static warning local("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_warning", dependency_resolver);
      return local;
    }

  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
