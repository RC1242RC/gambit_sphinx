---
title: 'file src/getBuckFast.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

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
  * 2019 Jan
  * 2017 March 
  * 2018 Jan 
  * 2018 May


ColliderBit event loop functions returning detector simulations.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include <memory>

#include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
#include "gambit/ColliderBit/ATLASEfficiencies.hpp"
#include "gambit/ColliderBit/CMSEfficiencies.hpp"
#include "gambit/ColliderBit/detectors/BuckFast.hpp"

#include "HEPUtils/FastJet.h"


namespace Gambit
{

  namespace ColliderBit
  {

    void getBuckFastATLAS(BaseDetector* &result)
    {
      using namespace Pipes::getBuckFastATLAS;
      thread_local BuckFast bucky;
      if (*Loop::iteration == START_SUBPROCESS)
      {
        bucky.smearElectronEnergy = &ATLAS::smearElectronEnergy;
        bucky.smearMuonMomentum   = &ATLAS::smearMuonMomentum;
        bucky.smearTaus           = &ATLAS::smearTaus;
        bucky.smearJets           = &ATLAS::smearJets;
        result = &bucky;
      }
    }

    void getBuckFastCMS(BaseDetector* &result)
    {
      using namespace Pipes::getBuckFastCMS;
      thread_local BuckFast bucky;
      if (*Loop::iteration == START_SUBPROCESS)
      {
        bucky.smearElectronEnergy = &CMS::smearElectronEnergy;
        bucky.smearMuonMomentum   = &CMS::smearMuonMomentum;
        bucky.smearTaus           = &CMS::smearTaus;
        bucky.smearJets           = &CMS::smearJets;
        result = &bucky;
      }
    }

    void getBuckFastIdentity(BaseDetector* &result)
    {
      using namespace Pipes::getBuckFastIdentity;
      thread_local BuckFast bucky;
      result = &bucky;
    }

  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
