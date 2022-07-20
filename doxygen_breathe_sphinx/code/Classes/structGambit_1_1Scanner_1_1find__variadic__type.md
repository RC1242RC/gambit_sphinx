---
title: 'struct Gambit::Scanner::find_variadic_type'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [__find_variadic_type__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type____/)< [find_variadic_type_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact/)< T... >::value, [find_variadic_type_not_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__not__exact/)< T... >::value, [find_variadic_type_convert](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__convert/)< T... >::value, T... >::ret_type | **[ret_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type/#typedef-ret-type)**  |
| typedef [__find_variadic_type__](/documentation/code/classes/structgambit_1_1scanner_1_1____find__variadic__type____/)< [find_variadic_type_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact/)< T... >::value, [find_variadic_type_not_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__not__exact/)< T... >::value, [find_variadic_type_convert](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__convert/)< T... >::value, T... >::func_type | **[func_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type/#typedef-func-type)**  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type/#variable-value)**  |

## Detailed Description

```
template <typename... T>
struct Gambit::Scanner::find_variadic_type;
```

## Public Types Documentation

### typedef ret_type

```
typedef __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::ret_type Gambit::Scanner::find_variadic_type< T >::ret_type;
```


### typedef func_type

```
typedef __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::func_type Gambit::Scanner::find_variadic_type< T >::func_type;
```


## Public Attributes Documentation

### variable value

```
static const bool value = __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::value;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000