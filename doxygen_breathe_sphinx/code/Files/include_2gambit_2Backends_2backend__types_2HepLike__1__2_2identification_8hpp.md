---
title: 'file HepLike_1_2/include/gambit/Backends/backend_types/HepLike_1_2/identification.hpp'

description: "[No description available]"

---






[No description available]

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-reference)**  |
|  | **[DO_CLASSLOADING](/documentation/code/files/include_2gambit_2backends_2backend__types_2heplike__1__2_2identification_8hpp/#define-do-classloading)**  |




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME HepLike
```


### define BACKENDLANG

```
#define BACKENDLANG CXX
```


### define VERSION

```
#define VERSION 1.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_2
```


### define REFERENCE

```
#define REFERENCE Bhom:2020bfe
```


### define DO_CLASSLOADING

```
#define DO_CLASSLOADING 1
```


## Source code

```
// Identify backend and set macro flags

#include "gambit/Utils/cats.hpp"

#define BACKENDNAME HepLike
#define BACKENDLANG CXX
#define VERSION 1.2
#define SAFE_VERSION 1_2
#define REFERENCE Bhom:2020bfe

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
