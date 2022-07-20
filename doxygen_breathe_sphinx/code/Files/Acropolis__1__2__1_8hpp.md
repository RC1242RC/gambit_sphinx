---
title: 'file frontends/Acropolis_1_2_1.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/acropolis__1__2__1_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/acropolis__1__2__1_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/acropolis__1__2__1_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/acropolis__1__2__1_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/acropolis__1__2__1_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Patrick Stoecker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 
  * Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 


**Date**: 

  * 2021 Oct
  * 2021 Oct


Frontend header for the Acropolis backend

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME Acropolis
```


### define BACKENDLANG

```
#define BACKENDLANG Python3
```


### define VERSION

```
#define VERSION 1.2.1
```


### define SAFE_VERSION

```
#define SAFE_VERSION 1_2_1
```


### define REFERENCE

```
#define REFERENCE Depta:2020mhj,Depta:2020zbh,Hufnagel:2018bjp
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#define BACKENDNAME Acropolis
#define BACKENDLANG Python3
#define VERSION 1.2.1
#define SAFE_VERSION 1_2_1
#define REFERENCE Depta:2020mhj,Depta:2020zbh,Hufnagel:2018bjp

LOAD_LIBRARY

#ifdef HAVE_PYBIND11

  BE_CONV_FUNCTION(set_input_params, void, (bool,int,int,double), "set_input_params")
  BE_CONV_FUNCTION(abundance_photodisintegration_decay, void,(double*,double*,double*,double*,double,double,double,double,double,int), "abundance_photodisintegration_decay")

#endif

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
