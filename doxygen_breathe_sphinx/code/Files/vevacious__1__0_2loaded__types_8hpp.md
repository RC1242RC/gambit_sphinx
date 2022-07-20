---
title: 'file vevacious_1_0/vevacious_1_0/loaded_types.hpp'

description: "[No description available]"

---






[No description available]

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[vevacious_1_0_all_data](/documentation/code/files/vevacious__1__0_2loaded__types_8hpp/#define-vevacious-1-0-all-data)**  |




## Macros Documentation

### define vevacious_1_0_all_data

```
#define vevacious_1_0_all_data (( /*class*/(VevaciousPlusPlus)(VevaciousPlusPlus),    /*constructors*/(("Factory_VevaciousPlusPlus_0__BOSS_1",(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&))) )) \
```


## Source code

```
#ifndef __loaded_types_vevacious_1_0_hpp__
#define __loaded_types_vevacious_1_0_hpp__ 1

#include "wrapper_VevaciousPlusPlus.hpp"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define vevacious_1_0_all_data \
  (( /*class*/(VevaciousPlusPlus)(VevaciousPlusPlus),    /*constructors*/(("Factory_VevaciousPlusPlus_0__BOSS_1",(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&))) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_vevacious_1_0_hpp__ */
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
