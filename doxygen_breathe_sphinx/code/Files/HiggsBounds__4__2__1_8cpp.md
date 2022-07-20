---
title: 'file frontends/HiggsBounds_4_2_1.cpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| | **[if](/documentation/code/files/higgsbounds__4__2__1_8cpp/#function-if)**(scan_level ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[BE_INI_FUNCTION](/documentation/code/files/higgsbounds__4__2__1_8cpp/#variable-be-ini-function)**  |


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
#include "gambit/Backends/frontends/HiggsBounds_4_2_1.hpp"
#include "gambit/Utils/file_lock.hpp"

BE_INI_FUNCTION
{

  // Scan-level initialisation
  static bool scan_level = true;
  if(scan_level)
  {
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int ANA = 1;    // indicates LEP-only analysis
    // Initialize HiggsBounds. Do this one-by-one for each MPI process with
    // locks, as HB writes files here then reads them back in later (crazy).
    Utils::ProcessLock mylock("HiggsBounds_" STRINGIFY(SAFE_VERSION) "_init");
    mylock.get_lock();
    // --braces just for dramatic effect--
    {
      // initialize LEP chisq tables
      initialize_HiggsBounds_chisqtables();
      // initialize HiggsBounds to LEP only
      initialize_HiggsBounds_int(nHneut,nHplus,ANA);
    }
    mylock.release_lock();
    scan_level = false;
  }

}
END_BE_INI_FUNCTION
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
