---
title: 'file Backends/include/gambit/Backends/backend_undefs.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[DO_CLASSLOADING](/documentation/code/files/include_2gambit_2backends_2backend__undefs_8hpp/#define-do-classloading)**  |

## Detailed Description


**Author**: 

  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2014 Sep
  * 2016 Sep


Undef backend identification things to prevent clashes with other backends.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define DO_CLASSLOADING

```
#define DO_CLASSLOADING 0
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef BACKEND_SPECIFIC_COMPILE_UNIT
  #undef BACKENDNAME
  #undef BACKENDLANG
  #undef VERSION
  #undef SAFE_VERSION
  #undef REFERENCE
  #undef DO_CLASSLOADING
  #define DO_CLASSLOADING 0
#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
