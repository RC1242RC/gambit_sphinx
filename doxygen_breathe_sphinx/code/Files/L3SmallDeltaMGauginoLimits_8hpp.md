---
title: 'file limits/L3SmallDeltaMGauginoLimits.hpp'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::ColliderBit::L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3chargedgauginosmalldeltamwithheavysneutrinolimitat188pt6gev/)** <br>A class to contain the limit data from L3PLB_482_2000_31, figure 5a.  |
| class | **[Gambit::ColliderBit::L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3chargedgauginosmalldeltamanysneutrinolimitat188pt6gev/)** <br>A class to contain the limit data from L3PLB_482_2000_31, figure 5b.  |
| class | **[Gambit::ColliderBit::L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3chargedhiggsinosmalldeltamlimitat188pt6gev/)** <br>A class to contain the limit data from L3PLB_482_2000_31, figure 5c.  |




## Source code

```
#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    class L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV();
    };


    class L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV();
    };


    class L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV();
    };


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
