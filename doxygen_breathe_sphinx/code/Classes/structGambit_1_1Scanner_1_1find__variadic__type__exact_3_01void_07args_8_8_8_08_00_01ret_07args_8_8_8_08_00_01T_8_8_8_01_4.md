---
title: 'struct Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args...), T... >'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Types

|                | Name           |
| -------------- | -------------- |
| typedef ret | **[ret_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args_8_8_8_08_00_01t_8_8_8_01_4/#typedef-ret-type)**  |
| typedef ret(args...) | **[func_type](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args_8_8_8_08_00_01t_8_8_8_01_4/#typedef-func-type)**  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1find__variadic__type__exact_3_01void_07args_8_8_8_08_00_01ret_07args_8_8_8_08_00_01t_8_8_8_01_4/#variable-value)**  |

## Detailed Description

```
template <typename ret ,
typename... args,
typename... T>
struct Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args...), T... >;
```

## Public Types Documentation

### typedef ret_type

```
typedef ret Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args...), T... >::ret_type;
```


### typedef func_type

```
typedef ret Gambit::Scanner::find_variadic_type_exact< void(args...), ret(args...), T... >::func_type(args...);
```


## Public Attributes Documentation

### variable value

```
static const bool value = true;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000