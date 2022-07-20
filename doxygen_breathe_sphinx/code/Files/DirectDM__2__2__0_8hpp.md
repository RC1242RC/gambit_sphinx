---
title: 'file frontends/DirectDM_2_2_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/directdm__2__2__0_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/directdm__2__2__0_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/directdm__2__2__0_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/directdm__2__2__0_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/directdm__2__2__0_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Sanjay Bloor ([sanjay.bloor12@imperial.ac.uk](mailto:sanjay.bloor12@imperial.ac.uk)) 
  * Markus Prim ([markus.prim@cern.ch](mailto:markus.prim@cern.ch)) 


**Date**: 

  * 2018 Sep, Oct 
  * 2020 Mar
  * 2020 Dec


Frontend header for the DirectDM backend.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME DirectDM
```


### define BACKENDLANG

```
#define BACKENDLANG Python
```


### define VERSION

```
#define VERSION 2.2.0
```


### define SAFE_VERSION

```
#define SAFE_VERSION 2_2_0
```


### define REFERENCE

```
#define REFERENCE Bishara:2017nnn,Brod:2017bsw
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME DirectDM
#define BACKENDLANG Python
#define VERSION 2.2.0
#define SAFE_VERSION 2_2_0
#define REFERENCE Bishara:2017nnn,Brod:2017bsw

LOAD_LIBRARY

#ifdef HAVE_PYBIND11

  // Forward declaration of custom return type (defined in gambit/Backends/backend_types/DDCalc.hpp)
  namespace Gambit { struct NREO_DM_nucleon_couplings; }

  BE_CONV_FUNCTION(get_NR_WCs_flav, NREO_DM_nucleon_couplings, (map_str_dbl&, double&, int&, std::string&, map_str_dbl&), "get_NR_WCs_flav")

#endif 

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
