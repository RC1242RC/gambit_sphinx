---
title: 'file ColliderBit/MC_convergence.hpp'

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
| struct | **[Gambit::ColliderBit::convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/)** <br>Type for holding Monte Carlo convergence settings.  |
| class | **[Gambit::ColliderBit::MC_convergence_checker](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/)** <br>Helper class for testing for convergence of analyses.  |

## Detailed Description


**Author**: 

  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 


**Date**: 

  * 2018 Jan 
  * 2019 Jan
  * 2018 May


ColliderBit Monte Carlo convergence routines.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __MC_convergence_hpp__
#define __MC_convergence_hpp__

#include "gambit/Utils/util_types.hpp"

namespace Gambit
{
  namespace ColliderBit
  {

    class AnalysisContainer;

    struct convergence_settings
    {
      double target_stat;
      bool stop_at_sys;
      bool all_analyses_must_converge;
      bool all_SR_must_converge;
    };

    class MC_convergence_checker
    {
      private:

        const convergence_settings* _settings;

        std::vector<int>* n_signals;

        int n_threads;

        bool converged;

        static std::map<const MC_convergence_checker* const, bool> convergence_map;

      public:

        MC_convergence_checker();

        ~MC_convergence_checker();

        void init(const convergence_settings&);

        void set_settings(const convergence_settings&);

        void clear();

        void update(const AnalysisContainer&);

        bool achieved(const AnalysisContainer& ac);
    };


  }
}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
