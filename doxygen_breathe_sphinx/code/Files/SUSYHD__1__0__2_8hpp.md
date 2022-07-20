---
title: 'file frontends/SUSYHD_1_0_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/susyhd__1__0__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/susyhd__1__0__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/susyhd__1__0__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/susyhd__1__0__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/susyhd__1__0__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Tomas Gonzalo 

**Date**: 2016 Dec

Frontend for SUSYHD.



------------------

Authors (add name and sate if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME SUSYHD
```


### define BACKENDLANG

```
#define BACKENDLANG MATHEMATICA
```


### define VERSION

```
#define VERSION 1.0.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_0_2
```


### define REFERENCE

```
#define REFERENCE PardoVega:2015eno
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME SUSYHD
#define BACKENDLANG MATHEMATICA
#define VERSION 1.0.2
#define SAFE_VERSION 1_0_2
#define REFERENCE PardoVega:2015eno

LOAD_LIBRARY

BE_ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)

BE_FUNCTION(MHiggs, MReal, (const MList<MReal>&), "MHiggs", "SUSYHD_MHiggs")
BE_FUNCTION(DeltaMHiggs, MReal, (const MList<MReal>&), "\\[CapitalDelta]MHiggs", "SUSYHD_DeltaMHiggs")
BE_FUNCTION(SetSMparameters, MVoid, (const MReal&, const MReal&), "SetSMparameters", "SUSYHD_SetSMparameters")

/* Convenience functions (declarations) */

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(SMINPUTS, SMInputs)
BE_INI_DEPENDENCY(unimproved_MSSM_spectrum, Spectrum)

// Undefine macros toa void conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
