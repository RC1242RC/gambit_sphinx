---
title: 'class Gambit::Backends::python_function'
description: 'Holds the info about a python backend function, and defines conversion functions. '

---








Holds the info about a python backend function, and defines conversion functions.  [More...](#detailed-description)


`#include <python_function.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[python_function](/documentation/code/classes/classgambit_1_1backends_1_1python__function/#function-python-function)**(const str & , const str & , const str & )<br>Constructor.  |
| TYPE | **[operator()](/documentation/code/classes/classgambit_1_1backends_1_1python__function/#function-operator())**(ARGS && ...)<br>Operation (execute function and return value)  |

## Detailed Description

```
template <typename TYPE ,
typename... ARGS>
class Gambit::Backends::python_function;
```

Holds the info about a python backend function, and defines conversion functions. 
## Public Functions Documentation

### function python_function

```
inline python_function(
    const str & ,
    const str & ,
    const str & 
)
```

Constructor. 

### function operator()

```
inline TYPE operator()(
    ARGS && ...
)
```

Operation (execute function and return value) 

-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000