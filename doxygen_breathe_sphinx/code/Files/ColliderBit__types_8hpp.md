---
title: 'file ColliderBit/ColliderBit_types.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::ColliderBit::AnalysisLogLikes](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisloglikes/)** <br>Container for loglike information for an analysis.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2018 Jan 
  * 2019 Jan, May
  * 2018 Feb


Type definition header for module ColliderBit.

Compile-time registration of type definitions required for the rest of the code to communicate with ColliderBit.

Add to this if you want to define a new type for the functions in ColliderBit to return, but you don't expect that type to be needed by any other modules.



------------------

Authors (add name if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __ColliderBit_types_hpp__
#define __ColliderBit_types_hpp__

#include <vector>
#include <chrono>

#include "gambit/Utils/PID_pair.hpp"
#include "gambit/ColliderBit/MCLoopInfo.hpp"
#include "gambit/ColliderBit/MC_convergence.hpp"
#include "gambit/ColliderBit/xsec.hpp"
#include "gambit/ColliderBit/colliders/Pythia8/Py8Collider.hpp"
#include "gambit/ColliderBit/colliders/Pythia8/Py8Collider_typedefs.hpp"
#include "gambit/ColliderBit/detectors/BuckFast.hpp"
#include "gambit/ColliderBit/analyses/AnalysisContainer.hpp"
#include "gambit/ColliderBit/analyses/AnalysisData.hpp"

#include "gambit/ColliderBit/limits/ALEPHSleptonLimits.hpp"
#include "gambit/ColliderBit/limits/L3GauginoLimits.hpp"
#include "gambit/ColliderBit/limits/L3SleptonLimits.hpp"
#include "gambit/ColliderBit/limits/OPALGauginoLimits.hpp"
#include "gambit/ColliderBit/limits/OPALDegenerateCharginoLimits.hpp"
//#include "gambit/ColliderBit/limits/L3SmallDeltaMGauginoLimits.hpp"

#include "HEPUtils/Event.h"

namespace Gambit
{

  namespace ColliderBit
  {

    typedef std::vector<AnalysisData> AnalysisNumbers;
    typedef std::vector<AnalysisData*> AnalysisDataPointers;

    struct AnalysisLogLikes
    {
      std::map<std::string,int> sr_indices;  // Signed indices so that we can use negative values for special cases
      std::map<std::string,double> sr_loglikes;

      std::string combination_sr_label;
      int combination_sr_index;
      double combination_loglike;

      AnalysisLogLikes() :
        combination_sr_label("undefined"),
        combination_sr_index(-2),
        combination_loglike(0.0)
        { }
    };

    typedef std::map<std::string,AnalysisLogLikes> map_str_AnalysisLogLikes;

    typedef std::vector<AnalysisContainer> AnalysisContainers;

    typedef std::chrono::milliseconds ms;
    typedef std::chrono::steady_clock steady_clock;
    typedef std::chrono::steady_clock::time_point tp;
    typedef std::map<std::string,double> timer_map_type;

    typedef std::pair<std::string,SLHAstruct> pair_str_SLHAstruct;

    // Note: 
    // The 'iipair' name below refers to the typedef std::pair<int,int> iipair 
    // declared in Utils/include/gambit/Utils/util_types.hpp

    typedef std::vector<std::pair<int,int>> vec_iipair;
    typedef std::vector<PID_pair> vec_PID_pair;

    typedef std::multimap<int,std::pair<int,int>> multimap_int_iipair;
    typedef std::multimap<int,PID_pair> multimap_int_PID_pair;

    typedef std::multimap<PID_pair,int> multimap_PID_pair_int;

    typedef std::map<int,xsec_container> map_int_xsec;
    typedef std::map<int,process_xsec_container> map_int_process_xsec;

    typedef std::map<std::pair<int,int>,PID_pair_xsec_container> map_iipair_PID_pair_xsec;
    typedef std::map<PID_pair,PID_pair_xsec_container> map_PID_pair_PID_pair_xsec;

    typedef HEPUtils::Event HEPUtils_Event;  // Extra typedef to avoid macro problem with namespaces
    typedef std::function<void(HEPUtils_Event&, const BaseCollider*)> EventWeighterFunctionType;
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
