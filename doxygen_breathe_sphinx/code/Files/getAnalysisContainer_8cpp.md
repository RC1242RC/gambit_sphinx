---
title: 'file src/getAnalysisContainer.cpp'

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
|  | **[DEBUG_PREFIX](/documentation/code/files/getanalysiscontainer_8cpp/#define-debug-prefix)**  |
|  | **[GET_ANALYSIS_CONTAINER](/documentation/code/files/getanalysiscontainer_8cpp/#define-get-analysis-container)**(NAME, EXPERIMENT) <br>Retrieve a container for analyses with EXPERIMENT.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Aldo Saavedra
  * Andy Buckley
  * Chris Rogan ([crogan@cern.ch](mailto:crogan@cern.ch)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 


**Date**: 

  * 2014 Aug 
  * 2015 May
  * 2015 Jul 
  * 2018 Jan 
  * 2019 Jan, Feb
  * 2017 March 
  * 2018 Jan 
  * 2018 May


Initialisation functions for ColliderBit analyses.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define DEBUG_PREFIX

```
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  " << __FILE__ << ":" << __LINE__ << ":  "
```


### define GET_ANALYSIS_CONTAINER

```
#define GET_ANALYSIS_CONTAINER(
    NAME,
    EXPERIMENT
)
    void NAME(AnalysisContainer& result)                           \
    {                                                              \
      using namespace Pipes::NAME;                                 \
      getAnalysisContainer(result, #EXPERIMENT, *Dep::RunMC,       \
       *Dep::TotalCrossSection, *Loop::iteration);                 \
    }
```

Retrieve a container for analyses with EXPERIMENT. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/ColliderBit/ColliderBit_eventloop.hpp"

// #define COLLIDERBIT_DEBUG
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  " << __FILE__ << ":" << __LINE__ << ":  "

namespace Gambit
{

  namespace ColliderBit
  {

    void getAnalysisContainer(AnalysisContainer& result,
                              const str& detname,
                              const MCLoopInfo& RunMC,
                              const xsec_container& TotalCrossSection,
                              int iteration)
    {
      if (RunMC.analyses.empty() or iteration == BASE_INIT) return;
      if (not RunMC.current_analyses_exist_for(detname)) return;

      if (iteration == START_SUBPROCESS)
      {
        // Register analysis container
        result.register_thread(detname+"AnalysisContainer");

        // Set current collider
        result.set_current_collider(RunMC.current_collider());

        // Initialize analysis container or reset all the contained analyses
        if (!result.has_analyses())
        {
          try
          {
            result.init(RunMC.current_analyses_for(detname));
          }
          catch (std::runtime_error& e)
          {
            piped_errors.request(LOCAL_INFO, e.what());
          }
        }
        else result.reset();
      }

      if (iteration == COLLIDER_FINALIZE)
      {
        result.collect_and_add_signal();
        int ntot = RunMC.current_event_count();
        double xs = TotalCrossSection.xsec();
        double xs_per_event = 0;
        if (xs >= 0 && ntot > 0)
        {
          xs_per_event = xs / ntot;
        }
        #ifdef COLLIDERBIT_DEBUG
          cout << DEBUG_PREFIX << "getAnalysisContainer: "
               << "ntot = " << ntot << ",  "
               << "xs = " << xs << ",  "
               << "xs_per_event = " << xs_per_event << endl;
        #endif
        // Scale all analysis results with the total cross-section per event
        result.scale(xs_per_event);
      }

    }

    #define GET_ANALYSIS_CONTAINER(NAME, EXPERIMENT)               \
    void NAME(AnalysisContainer& result)                           \
    {                                                              \
      using namespace Pipes::NAME;                                 \
      getAnalysisContainer(result, #EXPERIMENT, *Dep::RunMC,       \
       *Dep::TotalCrossSection, *Loop::iteration);                 \
    }

    GET_ANALYSIS_CONTAINER(getATLASAnalysisContainer, ATLAS)
    GET_ANALYSIS_CONTAINER(getCMSAnalysisContainer, CMS)
    GET_ANALYSIS_CONTAINER(getIdentityAnalysisContainer, Identity)


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
