---
title: 'struct Gambit::Scanner::_find_variadic_type_not_exact_< T1, T2, T... >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [__find_variadic_type_not_exact__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type__not__exact____/)< typename [remove_all_func](/documentation/code/classes/structgambit_1_1scanner_1_1remove__all__func/)< T1 >::type, typename [remove_all_func](/documentation/code/classes/structgambit_1_1scanner_1_1remove__all__func/)< T2 >::type, T2, T... >::ret_type | **[ret_type](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__not__exact___3_01t1_00_01t2_00_01t_8_8_8_01_4/#typedef-ret-type)**  |
| typedef [__find_variadic_type_not_exact__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type__not__exact____/)< typename [remove_all_func](/documentation/code/classes/structgambit_1_1scanner_1_1remove__all__func/)< T1 >::type, typename [remove_all_func](/documentation/code/classes/structgambit_1_1scanner_1_1remove__all__func/)< T2 >::type, T2, T... >::func_type | **[func_type](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__not__exact___3_01t1_00_01t2_00_01t_8_8_8_01_4/#typedef-func-type)**  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__not__exact___3_01t1_00_01t2_00_01t_8_8_8_01_4/#variable-value)**  |

## Detailed Description

```
template <typename T1 ,
typename T2 ,
typename... T>
struct Gambit::Scanner::_find_variadic_type_not_exact_< T1, T2, T... >;
```

## Public Types Documentation

### typedef ret_type

```
typedef __find_variadic_type_not_exact__<typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::ret_type Gambit::Scanner::_find_variadic_type_not_exact_< T1, T2, T... >::ret_type;
```


### typedef func_type

```
typedef __find_variadic_type_not_exact__<typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::func_type Gambit::Scanner::_find_variadic_type_not_exact_< T1, T2, T... >::func_type;
```


## Public Attributes Documentation

### variable value

```
static const bool value = __find_variadic_type_not_exact__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::value;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000