---
title: 'file common_headers/function_return_utils.hpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| template <typename U ,typename V \> <br>U * | **[pointer_returner](/documentation/code/files/function__return__utils_8hpp/#function-pointer-returner)**(V * ptr) |
| template <typename U ,typename V \> <br>U & | **[reference_returner](/documentation/code/files/function__return__utils_8hpp/#function-reference-returner)**(V * ptr) |
| template <typename U ,typename V \> <br>U & | **[reference_returner](/documentation/code/files/function__return__utils_8hpp/#function-reference-returner)**(const V * ptr) |


## Functions Documentation

### function pointer_returner

```
template <typename U ,
typename V >
U * pointer_returner(
    V * ptr
)
```


### function reference_returner

```
template <typename U ,
typename V >
U & reference_returner(
    V * ptr
)
```


### function reference_returner

```
template <typename U ,
typename V >
U & reference_returner(
    const V * ptr
)
```




## Source code

```
#ifndef __FUNCTION_RETURN_UTILS_HPP__
#define __FUNCTION_RETURN_UTILS_HPP__

// Function used to return pointer-to-wrapper
template<typename U, typename V>
U* pointer_returner(V* ptr);

// Function used to return reference-to-wrapper
template<typename U, typename V>
U& reference_returner(V* ptr);

// Version of the above function taking a const input
template<typename U, typename V>
U& reference_returner(const V* ptr);

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
