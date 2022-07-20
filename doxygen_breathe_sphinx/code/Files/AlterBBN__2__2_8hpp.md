---
title: 'file frontends/AlterBBN_2_2.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BACKENDNAME](/documentation/code/files/alterbbn__2__2_8hpp/#define-backendname)**  |
|  | **[BACKENDLANG](/documentation/code/files/alterbbn__2__2_8hpp/#define-backendlang)**  |
|  | **[VERSION](/documentation/code/files/alterbbn__2__2_8hpp/#define-version)**  |
|  | **[SAFE_VERSION](/documentation/code/files/alterbbn__2__2_8hpp/#define-safe-version)**  |
|  | **[REFERENCE](/documentation/code/files/alterbbn__2__2_8hpp/#define-reference)**  |

## Detailed Description


**Author**: 

  * Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 
  * Patrick Stöcker ([stoecker@physik.rwth-aachen.de](mailto:stoecker@physik.rwth-aachen.de)) 
  * Pat Scott ([pat.scott@uq.edu.au](mailto:pat.scott@uq.edu.au)) 
  * Tomas Gonzalo ([gonzalo@physik.rwth-aachen.de](mailto:gonzalo@physik.rwth-aachen.de)) 


**Date**: 

  * 2018 Jun
  * 2019 Sep
  * 2020 Apr
  * 2022 Jan


Frontend for AlterBBN v 2.2



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BACKENDNAME

```
#define BACKENDNAME AlterBBN
```


### define BACKENDLANG

```
#define BACKENDLANG CC
```


### define VERSION

```
#define VERSION 2.2
```


### define SAFE_VERSION

```
#define SAFE_VERSION 2_2
```


### define REFERENCE

```
#define REFERENCE Arbey:2011nf,Arbey:2018zfh
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BACKENDNAME AlterBBN
#define BACKENDLANG CC
#define VERSION 2.2
#define SAFE_VERSION 2_2
#define REFERENCE Arbey:2011nf,Arbey:2018zfh

LOAD_LIBRARY

BE_FUNCTION(Init_cosmomodel, void, (AlterBBN_2_2::relicparam*), "Init_cosmomodel", "Init_cosmomodel")
BE_FUNCTION(nucl_err, int, (AlterBBN_2_2::relicparam*,double*,double*), "nucl_err", "nucl_err")
BE_FUNCTION(nucl, int, (AlterBBN_2_2::relicparam*,double*), "nucl", "nucl")

BE_CONV_FUNCTION(get_NNUC, size_t, (), "get_NNUC")
BE_CONV_FUNCTION(get_abund_map_AlterBBN, map_str_int, (), "get_abund_map_AlterBBN")
BE_CONV_FUNCTION(fill_cosmomodel, void, (AlterBBN_2_2::relicparam*, map_str_dbl &), "Init_AlterBBN")
BE_CONV_FUNCTION(call_nucl_err, int, (map_str_dbl&,double*,double*), "call_nucl_err")
BE_CONV_FUNCTION(call_nucl, int, (map_str_dbl&,double*), "call_nucl")

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
