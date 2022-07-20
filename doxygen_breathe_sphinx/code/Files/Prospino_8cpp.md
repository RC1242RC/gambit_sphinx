---
title: 'file backend_types/Prospino.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Detailed Description


**Author**: Anders Kvellestad 

**Date**: 2020 Nov

Definitions for the prospino_settings class used by the Prospino backend



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/backend_types/Prospino.hpp"

namespace Gambit
{

  // Copy-constructor
  prospino_settings::prospino_settings(const prospino_settings& ps_in)
  {
    inlo = ps_in.inlo;
    isq_ng_in = ps_in.isq_ng_in;
    icoll_in = ps_in.icoll_in;
    energy_in = ps_in.energy_in;
    i_error_in = ps_in.i_error_in;
    final_state_in = ps_in.final_state_in;
    ipart1_in = ps_in.ipart1_in;
    ipart2_in = ps_in.ipart2_in;
    isquark1_in = ps_in.isquark1_in;
    isquark2_in = ps_in.isquark2_in;
  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
