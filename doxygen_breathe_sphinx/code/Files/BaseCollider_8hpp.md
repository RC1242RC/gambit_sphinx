---
title: 'file colliders/BaseCollider.hpp'

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
| class | **[Gambit::ColliderBit::BaseCollider](/documentation/code/classes/classgambit_1_1colliderbit_1_1basecollider/)** <br>An abstract base class for collider simulators within ColliderBit.  |

## Detailed Description


**Author**: 

  * Abram Krislock 
  * Pat Scott 


**Date**: 

  * July 2016
  * Jan 2019


The BaseCollider class.



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

namespace Gambit
{
  namespace ColliderBit
  {

    class BaseCollider
    {

      public:

        BaseCollider() : partonOnly(false), antiktR(0.4) {}
        virtual ~BaseCollider() {}
        virtual void clear() {}

        virtual double xsec_fb() const = 0;
        virtual double xsec_fb(int) const = 0;
        virtual double xsec_pb() const = 0;
        virtual double xsec_pb(int) const = 0;
        virtual double xsecErr_fb() const = 0;
        virtual double xsecErr_fb(int) const = 0;
        virtual double xsecErr_pb() const = 0;
        virtual double xsecErr_pb(int) const = 0;
        virtual int process_code() const = 0;
        virtual std::vector<int> all_active_process_codes() const = 0;

        virtual void init(const std::vector<std::string>&) {}
        virtual void init() {}

        bool partonOnly;
        double antiktR;

    };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
