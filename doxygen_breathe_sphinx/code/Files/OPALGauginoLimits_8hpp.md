---
title: 'file limits/OPALGauginoLimits.hpp'

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
| class | **[Gambit::ColliderBit::OPALCharginoHadronicLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalcharginohadroniclimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 5b.  |
| class | **[Gambit::ColliderBit::OPALCharginoSemiLeptonicLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalcharginosemileptoniclimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 6b.  |
| class | **[Gambit::ColliderBit::OPALCharginoLeptonicLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalcharginoleptoniclimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 7b.  |
| class | **[Gambit::ColliderBit::OPALCharginoAllChannelsLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalcharginoallchannelslimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 8b.  |
| class | **[Gambit::ColliderBit::OPALNeutralinoHadronicLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalneutralinohadroniclimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 9b.  |
| class | **[Gambit::ColliderBit::OPALNeutralinoHadronicViaZLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opalneutralinohadronicviazlimitat208gev/)** <br>A class to contain the limit data from OPAL_EPJC35_2004_1, figure 9b.  |




## Source code

```
#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    class OPALCharginoHadronicLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALCharginoHadronicLimitAt208GeV();
    };


    class OPALCharginoSemiLeptonicLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALCharginoSemiLeptonicLimitAt208GeV();
    };


    class OPALCharginoLeptonicLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALCharginoLeptonicLimitAt208GeV();
    };


    class OPALCharginoAllChannelsLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALCharginoAllChannelsLimitAt208GeV();
    };


    class OPALNeutralinoHadronicLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALNeutralinoHadronicLimitAt208GeV();
    };


    class OPALNeutralinoHadronicViaZLimitAt208GeV : public BaseLimitContainer {

      public:
        P2 convertPt(double x, double y) const;
        bool isWithinExclusionRegion(double x, double y, double) const;


      public:
        OPALNeutralinoHadronicViaZLimitAt208GeV();
    };


  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
