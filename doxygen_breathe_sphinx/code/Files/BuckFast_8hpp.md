---
title: 'file detectors/BuckFast.hpp'

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
| class | **[Gambit::ColliderBit::BuckFast](/documentation/code/classes/classgambit_1_1colliderbit_1_1buckfast/)** <br>A base class for [BuckFast]() simple smearing simulations within ColliderBit.  |

## Detailed Description


**Author**: 

  * Andy Buckley 
  * Anders Kvellestad 
  * Pat Scott 
  * Martin White


BuckFast simple smearing detector sim.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************

#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

#include "HEPUtils/Event.h"
#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"

namespace Gambit
{

  namespace ColliderBit
  {

    class BuckFast : public BaseDetector
    {

      public:

        void(*smearElectronEnergy)(std::vector<HEPUtils::Particle*>&);
        void(*smearMuonMomentum)(std::vector<HEPUtils::Particle*>&);
        void(*smearTaus)(std::vector<HEPUtils::Particle*>&);
        void(*smearJets)(std::vector<HEPUtils::Jet*>&);

        void processEvent(HEPUtils::Event&) const;


        BuckFast() : smearElectronEnergy(NULL)
                   , smearMuonMomentum(NULL)
                   , smearTaus(NULL)
                   , smearJets(NULL)
        {}

        virtual ~BuckFast() {}


        virtual void init(const std::vector<std::string>&) {};

        virtual void init() {};


    };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
