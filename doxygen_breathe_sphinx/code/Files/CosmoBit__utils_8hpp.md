---
title: 'file CosmoBit/CosmoBit_utils.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::CosmoBit](/documentation/code/namespaces/namespacegambit_1_1cosmobit/)**  |
| **[Gambit::CosmoBit::CosmoBit_utils](/documentation/code/namespaces/namespacegambit_1_1cosmobit_1_1cosmobit__utils/)**  |

## Detailed Description


**Author**: Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 

**Date**: 

  * 2019 Mar 
  * 2019 June


Type definition header for utilities for module CosmoBit.

Compile-time registration of type definitions required for the rest of the code to communicate with CosmoBit.

Add to this if you want to define a new type for the functions in CosmoBit to return, but you don't expect that type to be needed by any other modules.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __CosmoBit_utils_hpp__
#define __CosmoBit_utils_hpp__

namespace Gambit
{

  namespace CosmoBit
  {

    namespace CosmoBit_utils
    {

      double entropy_density_SM(double T, bool T_in_eV=false);

    }
  }
}

#endif // defined __CosmoBit_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
