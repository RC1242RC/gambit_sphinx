---
title: 'struct Gambit::Scanner::_find_variadic_type_convert_< Tc, T1, T... >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [__find_variadic_type_convert__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type__convert____/)< [is_args_convertible](/documentation/code/classes/structgambit_1_1scanner_1_1is__args__convertible/)< Tc, T1 >::value, T1, T... >::ret_type | **[ret_type](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__convert___3_01tc_00_01t1_00_01t_8_8_8_01_4/#typedef-ret-type)**  |
| typedef [__find_variadic_type_convert__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type__convert____/)< [is_args_convertible](/documentation/code/classes/structgambit_1_1scanner_1_1is__args__convertible/)< Tc, T1 >::value, T1, T... >::func_type | **[func_type](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__convert___3_01tc_00_01t1_00_01t_8_8_8_01_4/#typedef-func-type)**  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1__find__variadic__type__convert___3_01tc_00_01t1_00_01t_8_8_8_01_4/#variable-value)**  |

## Detailed Description

```
template <typename Tc ,
typename T1 ,
typename... T>
struct Gambit::Scanner::_find_variadic_type_convert_< Tc, T1, T... >;
```

## Public Types Documentation

### typedef ret_type

```
typedef __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::ret_type Gambit::Scanner::_find_variadic_type_convert_< Tc, T1, T... >::ret_type;
```


### typedef func_type

```
typedef __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::func_type Gambit::Scanner::_find_variadic_type_convert_< Tc, T1, T... >::func_type;
```


## Public Attributes Documentation

### variable value

```
static const bool value = __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::value;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000