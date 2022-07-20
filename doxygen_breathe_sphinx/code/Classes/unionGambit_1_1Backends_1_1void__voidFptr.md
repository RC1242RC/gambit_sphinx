---
title: 'union Gambit::Backends::void_voidFptr'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <ini_functions.hpp>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| void * | **[ptr](/documentation/code/classes/uniongambit_1_1backends_1_1void__voidfptr/#variable-ptr)**  |
| voidFptr | **[fptr](/documentation/code/classes/uniongambit_1_1backends_1_1void__voidfptr/#variable-fptr)**  |

## Detailed Description

```
union Gambit::Backends::void_voidFptr;
```


Hack to suppress warnings about casting between void pointers and function pointers. "Necessary" as long as dlsym has no separate functionality for retrieving function pointers. 

## Public Attributes Documentation

### variable ptr

```
void * ptr;
```


### variable fptr

```
voidFptr fptr;
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000