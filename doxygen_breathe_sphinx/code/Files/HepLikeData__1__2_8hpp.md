---
title: 'file frontends/HepLikeData_1_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/heplikedata__1__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/heplikedata__1__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/heplikedata__1__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/heplikedata__1__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/heplikedata__1__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2019 July

Frontend header for the HepLike data package.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME HepLikeData
```


### define BACKENDLANG

```
#define BACKENDLANG Data
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


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME HepLikeData
#define BACKENDLANG Data
#define VERSION 1.2
#define SAFE_VERSION 1_2
#define REFERENCE Bhom:2020bfe

// Load it
LOAD_LIBRARY

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
