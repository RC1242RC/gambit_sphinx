---
title: 'file ColliderBit/lhef2heputils.hpp'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[LHEF](/documentation/code/namespaces/namespacelhef/)** <br>Forward declaration to cut down on includes.  |

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[get_HEPUtils_event](/documentation/code/files/lhef2heputils_8hpp/#function-get-heputils-event)**(const LHEF::Reader & , HEPUtils::Event & , double )<br>Extract an LHE event as a HEPUtils::Event.  |


## Functions Documentation

### function get_HEPUtils_event

```
void get_HEPUtils_event(
    const LHEF::Reader & ,
    HEPUtils::Event & ,
    double 
)
```

Extract an LHE event as a HEPUtils::Event. 



## Source code

```
// -*- C++ -*-
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/cmake/cmake_variables.hpp"

#ifndef EXCLUDE_HEPMC

#include "HEPUtils/Event.h"

namespace LHEF { class Reader; }

void get_HEPUtils_event(const LHEF::Reader&, HEPUtils::Event&, double);

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
