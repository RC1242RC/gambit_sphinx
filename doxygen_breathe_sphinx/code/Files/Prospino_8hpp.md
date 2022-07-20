---
title: 'file backend_types/Prospino.hpp'

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
| class | **[Gambit::prospino_settings](/documentation/code/classes/classgambit_1_1prospino__settings/)**  |

## Detailed Description


**Author**: Anders Kvellestad 

**Date**: 2019 Jun, Nov

Options struct for the Prospino backend



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include <map>
#include "gambit/Utils/PID_pair.hpp"
#include "gambit/Utils/util_types.hpp"

#ifndef __PROSPINO_types_hpp__
#define __PROSPINO_types_hpp__

namespace Gambit
{

  class prospino_settings
  {
    public:
      Finteger inlo;
      Finteger isq_ng_in;
      Finteger icoll_in;
      Fdouble energy_in;
      Finteger i_error_in;

      Fstring<2> final_state_in;
      Finteger ipart1_in;
      Finteger ipart2_in;
      Finteger isquark1_in;
      Finteger isquark2_in;

      // Constructor
      prospino_settings(Finteger inlo_input, Finteger isq_ng_in_input,
                        Finteger icoll_in_input, Fdouble energy_in_input,
                        Finteger i_error_in_input, Fstring<2> final_state_in_input,
                        Finteger ipart1_in_input, Finteger ipart2_in_input,
                        Finteger isquark1_in_input, Finteger isquark2_in_input) :
          inlo(inlo_input),
          isq_ng_in(isq_ng_in_input),
          icoll_in(icoll_in_input),
          energy_in(energy_in_input),
          i_error_in(i_error_in_input),
          final_state_in(final_state_in_input),
          ipart1_in(ipart1_in_input),
          ipart2_in(ipart2_in_input),
          isquark1_in(isquark1_in_input),
          isquark2_in(isquark2_in_input)
      { }

      // Copy-constructor
      prospino_settings(const prospino_settings&);
  };

}

#endif // defined __PROSPINO_types_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
