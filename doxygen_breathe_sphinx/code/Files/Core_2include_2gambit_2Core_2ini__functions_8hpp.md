---
title: 'file Core/Core/include/gambit/Core/ini_functions.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Detailed Description


Core-only functions for triggering initialisation code.



------------------


# Authors

(add name and date if you modify)

Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

2015 Feb

Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 

2021 Sep



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __ini_functions_core_hpp__
#define __ini_functions_core_hpp__

#include "gambit/Utils/util_types.hpp"

namespace Gambit
{
  class functor;
  class module_functor_common;
  class primary_model_functor;

  int register_module(str, str);

  int register_module_functor_core(module_functor_common&);

  int register_model_functor_core(primary_model_functor&);

  int register_backend(str, str, str);

  int register_backend_functor(functor&);

  int register_management_req(module_functor_common&);

}

#endif // #defined __ini_functions_core_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
