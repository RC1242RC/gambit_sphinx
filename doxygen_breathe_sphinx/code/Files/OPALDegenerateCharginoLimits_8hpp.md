---
title: 'file limits/OPALDegenerateCharginoLimits.hpp'

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
| class | **[Gambit::ColliderBit::OPALDegenerateCharginoLimitAt208GeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1opaldegeneratecharginolimitat208gev/)** <br>A class to contain the limit data from OPAL, hep-ex/0210043, figure 5a (in colour)  |




## Source code

```
#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit
{
  namespace ColliderBit 
  {
    class OPALDegenerateCharginoLimitAt208GeV : public BaseLimitContainer {

      public:

        P2 convertPt(double, double) const;

        std::vector<P2> dataFromLimit(double);

        bool isWithinExclusionRegion(double x, double y, double) const;

      public:
        OPALDegenerateCharginoLimitAt208GeV();
    };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
