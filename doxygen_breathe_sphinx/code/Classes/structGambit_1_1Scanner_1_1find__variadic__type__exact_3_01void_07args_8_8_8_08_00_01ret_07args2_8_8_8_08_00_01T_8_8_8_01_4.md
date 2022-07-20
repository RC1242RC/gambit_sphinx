---
title: 'struct Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args2...), T... >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef [find_variadic_type_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact/)< void(args...), T... >::ret_type | **[ret_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args2_8_8_8_08_00_01t_8_8_8_01_4/#typedef-ret-type)**  |
| typedef [find_variadic_type_exact](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact/)< void(args...), T... >::func_type | **[func_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args2_8_8_8_08_00_01t_8_8_8_01_4/#typedef-func-type)**  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args2_8_8_8_08_00_01t_8_8_8_01_4/#variable-value)**  |

## Detailed Description

```
template <typename ret ,
typename... args,
typename... args2,
typename... T>
struct Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args2...), T... >;
```

## Public Types Documentation

### typedef ret_type

```
typedef find_variadic_type_exact<void (args...), T...>::ret_type Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args2...), T... >::ret_type;
```


### typedef func_type

```
typedef find_variadic_type_exact<void (args...), T...>::func_type Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args2...), T... >::func_type;
```


## Public Attributes Documentation

### variable value

```
static const bool value = find_variadic_type_exact<void (args...), T...>::value;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000