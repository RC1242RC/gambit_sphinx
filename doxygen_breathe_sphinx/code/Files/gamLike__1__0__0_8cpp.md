---
title: 'file frontends/gamLike_1_0_0.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| | **[if](/documentation/code/files/gamlike__1__0__0_8cpp/#function-if)**(scan_level ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[BE_INI_FUNCTION](/documentation/code/files/gamlike__1__0__0_8cpp/#variable-be-ini-function)**  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Sebastian Wild ([sebastian.wild@ph.tum.de](mailto:sebastian.wild@ph.tum.de)) 


**Date**: 

  * 2016 Feb
  * 2016 Aug


Frontend header for the gamLike backend.

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function if

```
if(
    scan_level 
)
```



## Attributes Documentation

### variable BE_INI_FUNCTION

```
BE_INI_FUNCTION {
  
  static bool scan_level = true;
```



## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/gamLike_1_0_0.hpp"

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    scan_level = false;
    std::string path = runOptions->getValueOrDef<std::string>(backendDir+"/../data/", "datapath");
    set_data_path(path);  // Note that passing per reference is default per backend system
  }

}
END_BE_INI_FUNCTION
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
