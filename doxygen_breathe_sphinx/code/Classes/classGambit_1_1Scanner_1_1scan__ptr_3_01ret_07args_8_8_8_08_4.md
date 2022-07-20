---
title: 'class Gambit::Scanner::scan_ptr< ret(args...)>'
description: 'Container class that hold the output of the "get_purpose" function. '

---








Container class that hold the output of the "get_purpose" function.  [More...](#detailed-description)


`#include <factory_defs.hpp>`

Inherits from boost::shared_ptr< Function_Base< ret(args...)> >

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-scan-ptr)**() |
| | **[scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-scan-ptr)**(const [scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/) & in) |
| | **[scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-scan-ptr)**([scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/) && in) |
| | **[scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-scan-ptr)**(void * in) |
| [scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/)< ret(args...)> & | **[operator=](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-operator=)**(void * in) |
| [scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/)< ret(args...)> & | **[operator=](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-operator=)**(const [scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/)< ret(args...)> & in) |
| [scan_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/)< ret(args...)> & | **[operator=](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-operator=)**(s_ptr && in) |
| ret | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr_3_01ret_07args_8_8_8_08_4/#function-operator())**(const args &... params) |

## Detailed Description

```
template <typename ret ,
typename... args>
class Gambit::Scanner::scan_ptr< ret(args...)>;
```

Container class that hold the output of the "get_purpose" function. 
## Public Functions Documentation

### function scan_ptr

```
inline scan_ptr()
```


### function scan_ptr

```
inline scan_ptr(
    const scan_ptr & in
)
```


### function scan_ptr

```
inline scan_ptr(
    scan_ptr && in
)
```


### function scan_ptr

```
inline scan_ptr(
    void * in
)
```


### function operator=

```
inline scan_ptr< ret(args...)> & operator=(
    void * in
)
```


### function operator=

```
inline scan_ptr< ret(args...)> & operator=(
    const scan_ptr< ret(args...)> & in
)
```


### function operator=

```
inline scan_ptr< ret(args...)> & operator=(
    s_ptr && in
)
```


### function operator()

```
inline ret operator()(
    const args &... params
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000