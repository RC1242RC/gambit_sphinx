---
title: 'file src/process_code_PID_pair_mapping.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[DEBUG_PREFIX](/documentation/code/files/process__code__pid__pair__mapping_8cpp/#define-debug-prefix)**  |

## Detailed Description


**Author**: Anders Kvellestad ([a.kvellestad@imperial.ac.uk](mailto:a.kvellestad@imperial.ac.uk)) 

**Date**: 2019 Sep

ColliderBit module functions dealing with the mapping between Pythia process codes and PID codes for the final state particles



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define DEBUG_PREFIX

```
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  "
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
#include "gambit/ColliderBit/complete_process_PID_pair_multimaps.hpp"

// #define COLLIDERBIT_DEBUG
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  "

namespace Gambit
{

  namespace ColliderBit
  {

    void getActiveProcessCodeToPIDPairsMap(multimap_int_PID_pair& result)
    {
      using namespace Pipes::getActiveProcessCodeToPIDPairsMap;


      // Clear the result multimap in the COLLIDER_INIT iteration (thread 0)
      if (*Loop::iteration == COLLIDER_INIT)
      {
        result.clear();
      }

      // In the XSEC_CALCULATION iteration (thread 0) we know the active process codes
      // and can return the relevant subset of the huge multimap above
      if(*Loop::iteration == XSEC_CALCULATION)
      {

        for(int pcode : *Dep::ActiveProcessCodes)
        {
          // Get iterator bounds (as a pair) over the multimap entries that match the key pcode.
          auto mm_range = all_process_codes_to_PID_pairs.equal_range(pcode);

          // Loop over these elements and construct the smaller result multimap
          for (auto mm_it = mm_range.first; mm_it != mm_range.second; ++mm_it)
          {
            const PID_pair& pids = mm_it->second;
            result.insert( std::pair<int,PID_pair>(pcode, pids) );
          }
        }
      }

    }


    void getActivePIDPairs(vec_PID_pair& result)
    {
      using namespace Pipes::getActivePIDPairs;

      if (*Loop::iteration == COLLIDER_INIT)
      {
        result.clear();
      }

      if (*Loop::iteration == XSEC_CALCULATION)
      {
        for (const std::pair<const int,PID_pair>& entry : *Dep::ActiveProcessCodeToPIDPairsMap)
        {

          PID_pair pid_pair = entry.second;

          // if (std::find(result.begin(), result.end(), entry.second) == result.end())
          if (std::find(result.begin(), result.end(), pid_pair) == result.end())
          {
            result.push_back( PID_pair(pid_pair) );
          }
        }

        #ifdef COLLIDERBIT_DEBUG
          for (const PID_pair& pid_pair : result)
          {
            cout << DEBUG_PREFIX << "getActivePIDPairs: - active PID pair: [" << pid_pair.pid1() << "," << pid_pair.pid2() << "]" << endl;
          }
        #endif
      }
    }

  } 
} 
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
