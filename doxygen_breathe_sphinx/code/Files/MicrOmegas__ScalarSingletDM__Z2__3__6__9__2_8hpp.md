---
title: 'file frontends/MicrOmegas_ScalarSingletDM_Z2_3_6_9_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/micromegas__scalarsingletdm__z2__3__6__9__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/micromegas__scalarsingletdm__z2__3__6__9__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/micromegas__scalarsingletdm__z2__3__6__9__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/micromegas__scalarsingletdm__z2__3__6__9__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/micromegas__scalarsingletdm__z2__3__6__9__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: Jonathan Cornell 

**Date**: May 2015, April 2017

Frontend for MicrOmegas ScalarSingletDM_Z2 backend



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME MicrOmegas_ScalarSingletDM_Z2
```


### define BACKENDLANG

```
#define BACKENDLANG CC
```


### define VERSION

```
#define VERSION 3.6.9.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 3_6_9_2
```


### define REFERENCE

```
#define REFERENCE Belanger:2001fz,Belanger:2004yn,Belanger:2006is,Belanger:2008sj,Belanger:2010gh,Belanger:2013oya,Belanger:2014vza
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME MicrOmegas_ScalarSingletDM_Z2
#define BACKENDLANG CC
#define VERSION 3.6.9.2
#define SAFE_VERSION 3_6_9_2
#define REFERENCE Belanger:2001fz,Belanger:2004yn,Belanger:2006is,Belanger:2008sj,Belanger:2010gh,Belanger:2013oya,Belanger:2014vza

LOAD_LIBRARY

BE_ALLOW_MODELS(ScalarSingletDM_Z2,ScalarSingletDM_Z2_running)

//Take function declarations from the common SingletDM header
#include "gambit/Backends/frontends/shared_includes/MicrOmegas_SingletDM_3_6_9_2.hpp"

BE_INI_DEPENDENCY(ScalarSingletDM_Z2_spectrum, Spectrum)

#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
