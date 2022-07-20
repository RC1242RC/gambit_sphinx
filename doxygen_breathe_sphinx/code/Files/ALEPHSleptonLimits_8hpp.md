---
title: 'file limits/ALEPHSleptonLimits.hpp'

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
| class | **[Gambit::ColliderBit::ALEPHSelectronLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1alephselectronlimitat208gev/)** <br>A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3a.  |
| class | **[Gambit::ColliderBit::ALEPHSmuonLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1alephsmuonlimitat208gev/)** <br>A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3b.  |
| class | **[Gambit::ColliderBit::ALEPHStauLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1alephstaulimitat208gev/)** <br>A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3c.  |




## Source code

```
#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    class ALEPHSelectronLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        ALEPHSelectronLimitAt208GeV();
    };


    class ALEPHSmuonLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        ALEPHSmuonLimitAt208GeV();
    };


    class ALEPHStauLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        ALEPHStauLimitAt208GeV();
    };


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
