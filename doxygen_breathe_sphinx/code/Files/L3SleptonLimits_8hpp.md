---
title: 'file limits/L3SleptonLimits.hpp'

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
| class | **[Gambit::ColliderBit::L3SelectronLimitAt205GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3selectronlimitat205gev/)** <br>A class to contain the limit data from L3_PLB580_2004_37, figure 2a.  |
| class | **[Gambit::ColliderBit::L3SmuonLimitAt205GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3smuonlimitat205gev/)** <br>A class to contain the limit data from L3_PLB580_2004_37, figure 2b.  |
| class | **[Gambit::ColliderBit::L3StauLimitAt205GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1l3staulimitat205gev/)** <br>A class to contain the limit data from L3_PLB580_2004_37, figure 2c.  |




## Source code

```
#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


        static constexpr double sqrtsGeV = 205;
    class L3SelectronLimitAt205GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        L3SelectronLimitAt205GeV();
    };


    class L3SmuonLimitAt205GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        L3SmuonLimitAt205GeV();
    };


    class L3StauLimitAt205GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double mZ) const;


      public:
        L3StauLimitAt205GeV();
    };


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
