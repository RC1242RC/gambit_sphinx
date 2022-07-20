---
title: 'file detectors/BaseDetector.hpp'

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
| class | **[Gambit::ColliderBit::BaseDetector](/documentation/code/classes/classgambit_1_1colliderbit_1_1basedetector/)** <br>An abstract base class for detector simulators within ColliderBit.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Andy Buckley ([mostlikelytobefound@facebook.com](mailto:mostlikelytobefound@facebook.com))
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * often
  * 2019 Feb


ColliderBit detector base class.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include <vector>
#include <exception>
#include <memory>

#include "HEPUtils/Event.h"

#include "gambit/Elements/shared_types.hpp"

namespace Gambit
{

  namespace ColliderBit
  {

    class BaseDetector
    {

      public:

        BaseDetector() {}
        virtual ~BaseDetector() {}
        virtual void clear() {}

        virtual void processEvent(HEPUtils::Event&) const = 0;

        virtual void init(const std::vector<std::string>&) {}
        virtual void init() {};

    };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
