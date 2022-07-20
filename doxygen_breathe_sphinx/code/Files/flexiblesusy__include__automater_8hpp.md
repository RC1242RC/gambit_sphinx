---
title: 'file SpecBit/flexiblesusy_include_automater.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[BUILD_THIS](/documentation/code/files/flexiblesusy__include__automater_8hpp/#define-build-this)**  |

## Detailed Description


**Author**: Ben Farmer ([ben.farmer@gmail.com](mailto:ben.farmer@gmail.com)) 

**Date**: 2015 Jan

This file is part of a trick to perform tedious includes of FlexibleSUSY headers required to use particular models.

It doesn't have include guards on purpose, because in order to use it one has to include it several times, with model name macros defined differently.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define BUILD_THIS

```
#define BUILD_THIS CAT_3(FS_MODEL_,MODELNAME,_IS_BUILT)
```


We need to decide if we are going to do anything by checking whether GAMBIT was in fact configured to build FlexibleSUSY with whatever model is defined in MODELNAME. Fortunately there is a preprocessor variable defined by CMake which lists these for us. 


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#define BUILD_THIS CAT_3(FS_MODEL_,MODELNAME,_IS_BUILT) 
#if(BUILD_THIS) // If the model wasn't built then don't try to include any of these files!

#define INCLUDE_FILE(TAIL) STRINGIFY( CAT_3(MODELNAME,_,TAIL) )

#include INCLUDE_FILE(input_parameters.hpp)
#include INCLUDE_FILE(slha_io.hpp)
#include INCLUDE_FILE(CAT(ALGORITHM1l,_spectrum_generator.hpp))
#include INCLUDE_FILE(CAT(ALGORITHM1l,_model.hpp))
#include INCLUDE_FILE(model_slha.hpp)
#include INCLUDE_FILE(physical.hpp)
#include INCLUDE_FILE(info.hpp)
MAKE_INTERFACE

#undef INCLUDE_FILE

#endif
#undef BUILD_THIS
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
