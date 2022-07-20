---
title: 'file Backends/backend_singleton.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::Backends](/documentation/code/namespaces/namespacegambit_1_1backends/)**  |

## Detailed Description


**Author**: Pat Scott 

**Date**: 2014 Aug

GAMBIT backend info object accessor function.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __backend_singleton_hpp__
#define __backend_singleton_hpp__

#include "gambit/Backends/backend_info.hpp"


namespace Gambit
{

  namespace Backends
  {

    backend_info& backendInfo();

  }

}


#endif // defined __backend_singleton_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
