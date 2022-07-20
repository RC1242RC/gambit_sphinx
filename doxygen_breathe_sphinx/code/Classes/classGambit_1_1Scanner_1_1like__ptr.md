---
title: 'class Gambit::Scanner::like_ptr'
description: 'likelihood container for scanner plugins. '

---








likelihood container for scanner plugins. 


`#include <factory_defs.hpp>`

Inherits from [Gambit::Scanner::scan_ptr< double(std::unordered_map< std::string, double > &)>](/documentation/code/classes/classgambit_1_1scanner_1_1scan__ptr/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-like-ptr)**() |
| | **[like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-like-ptr)**(const [like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) & in) |
| [like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) & | **[operator=](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-operator=)**(const [like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) & ) =default |
| | **[like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-like-ptr)**(void * in) |
| std::unordered_map< std::string, double > | **[transform](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-transform)**(const std::vector< double > & vec) |
| std::vector< std::string > | **[get_names](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-get-names)**() const |
| std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-inverse-transform)**(const std::unordered_map< std::string, double > & physical) |
| double | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-operator())**(const std::vector< double > & vec) |
| double | **[operator()](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/#function-operator())**(std::unordered_map< std::string, double > & map, const std::vector< double > & vec =std::vector< double >()) |

## Public Functions Documentation

### function like_ptr

```
inline like_ptr()
```


### function like_ptr

```
inline like_ptr(
    const like_ptr & in
)
```


### function operator=

```
like_ptr & operator=(
    const like_ptr & 
) =default
```


### function like_ptr

```
inline like_ptr(
    void * in
)
```


### function transform

```
inline std::unordered_map< std::string, double > transform(
    const std::vector< double > & vec
)
```


### function get_names

```
inline std::vector< std::string > get_names() const
```


### function inverse_transform

```
inline std::vector< double > inverse_transform(
    const std::unordered_map< std::string, double > & physical
)
```


### function operator()

```
inline double operator()(
    const std::vector< double > & vec
)
```


### function operator()

```
inline double operator()(
    std::unordered_map< std::string, double > & map,
    const std::vector< double > & vec =std::vector< double >()
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000