---
title: 'file common_source_files/function_return_utils.cpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| template <typename U ,typename V \> <br>U * | **[pointer_returner](/documentation/code/files/function__return__utils_8cpp/#function-pointer-returner)**(V * ptr) |
| template <typename U ,typename V \> <br>U & | **[reference_returner](/documentation/code/files/function__return__utils_8cpp/#function-reference-returner)**(V * ptr) |
| template <typename U ,typename V \> <br>U & | **[reference_returner](/documentation/code/files/function__return__utils_8cpp/#function-reference-returner)**(const V * ptr) |


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
#include "gambit/Backends/function_return_utils.hpp"

// Function used to return pointer-to-wrapper
template<typename U, typename V>
U* pointer_returner(V* ptr)
{
    if (ptr->is_wrapped())
    {
        return (ptr->wrapper__BOSS());
    }

    else
    {
        U* wptr = new U(ptr);
        ptr->can_delete_wrapper(true);
        return wptr;
    }
}


// Function used to return reference-to-wrapper
template<typename U, typename V>
U& reference_returner(V* ptr)
{
    if (ptr->is_wrapped())
    {
        return *(ptr->wrapper__BOSS());
    }

    else
    {
        U* wptr = new U(ptr);
        ptr->can_delete_wrapper(true);
        return *wptr;
    }
}

// Version of the above function taking a const input
template<typename U, typename V>
U& reference_returner(const V* ptr)
{
    if (ptr->is_wrapped())
    {
        return *(ptr->wrapper__BOSS());
    }

    else
    {
        U* wptr = new U(ptr);
        ptr->can_delete_wrapper(true);
        return *wptr;
    }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
