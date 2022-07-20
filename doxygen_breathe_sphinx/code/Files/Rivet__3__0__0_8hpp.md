---
title: 'file frontends/Rivet_3_0_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/rivet__3__0__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/rivet__3__0__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/rivet__3__0__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/rivet__3__0__0_8hpp/#define-safe-version)**  |

## Detailed Description


**Author**: Tomas Gonzalo 

**Date**: 2019 July

Frontend for Rivet backend v3.0.0



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME Rivet
```


### define BACKENDLANG

```
#define BACKENDLANG CC
```


### define VERSION

```
#define VERSION 3.0.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 3_0_0
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME Rivet
#define BACKENDLANG CC
#define VERSION 3.0.0
#define SAFE_VERSION 3_0_0

LOAD_LIBRARY

// Initialisation function (definition)
BE_INI_FUNCTION{} END_BE_INI_FUNCTION

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
