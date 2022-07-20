---
title: 'file ColliderBit/ColliderBit_eventloop_utils.hpp'

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


Helpers for ColliderBit event loop functions.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <string>
#include <iostream>


namespace Gambit
{

  namespace ColliderBit
  {

    enum specialIterations { BASE_INIT = -1,
                             COLLIDER_INIT = -2,
                             COLLIDER_INIT_OMP = -3,
                             XSEC_CALCULATION = -4,
                             START_SUBPROCESS = -5,
                             COLLECT_CONVERGENCE_DATA = -6,
                             CHECK_CONVERGENCE = -7,
                             END_SUBPROCESS = -8,
                             COLLIDER_FINALIZE = -9,
                             BASE_FINALIZE = -10};
  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
