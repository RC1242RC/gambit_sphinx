---
title: 'file src/complete_process_PID_pair_multimaps.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Detailed Description


**Author**: Anders Kvellestad ([a.kvellestad@imperial.ac.uk](mailto:a.kvellestad@imperial.ac.uk)) 

**Date**: 2019 Sep

Source file for the function all_PID_pairs_to_process_codes(), which returns a "reversed" version of the all_process_codes_to_PID_pairs multimap



------------------

Authors (add name if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/ColliderBit/complete_process_PID_pair_multimaps.hpp"

namespace Gambit
{
  namespace ColliderBit
  {

    // A function stat returns the "reversed" multimap, from PID_pair to process codes
    const multimap_PID_pair_int& all_PID_pairs_to_process_codes()
    {
      static bool first = true;
      static multimap_PID_pair_int result;

      // Construct the map the first time this function is called
      if (first)
      {

        // Loop through all elements in all_process_codes_to_PID_pairs
        for (const std::pair<int,PID_pair> elem : all_process_codes_to_PID_pairs)
        {
          // Insert the reversed pair into the result map
          result.insert( std::make_pair(elem.second, elem.first) );
        }

        first = false;
      }

      return result;
    }

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
