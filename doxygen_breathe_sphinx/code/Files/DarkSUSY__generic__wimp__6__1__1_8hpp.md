---
title: 'file frontends/DarkSUSY_generic_wimp_6_1_1.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/darksusy__generic__wimp__6__1__1_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/darksusy__generic__wimp__6__1__1_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/darksusy__generic__wimp__6__1__1_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/darksusy__generic__wimp__6__1__1_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/darksusy__generic__wimp__6__1__1_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Torsten Bringmann ([torsten.bringmann@fys.uio.no](mailto:torsten.bringmann@fys.uio.no)) 
  * Pat Scott ([pat.scott@uq.edu.au](mailto:pat.scott@uq.edu.au)) 


**Date**: 

  * 2020 February
  * 2020 September


Fronted header for the DarkSUSY backend

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME DarkSUSY_generic_wimp
```


### define BACKENDLANG

```
#define BACKENDLANG FORTRAN
```


### define VERSION

```
#define VERSION 6.1.1
```


### define SAFE_VERSION

```
#define SAFE_VERSION 6_1_1
```


### define REFERENCE

```
#define REFERENCE Gondolo:2004sc,Bringmann:2018lay
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME DarkSUSY_generic_wimp
#define BACKENDLANG FORTRAN
#define VERSION 6.1.1
#define SAFE_VERSION 6_1_1
#define REFERENCE Gondolo:2004sc,Bringmann:2018lay

// Load the library
LOAD_LIBRARY

// Include common DarkSUSY frontend declarations shared across all model-specific versions of the backend
#include "gambit/Backends/frontends/shared_includes/DarkSUSY_6.hpp"

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
