---
title: 'struct Gambit::Scanner::is_args_convertible< ret1(arg1, args1...), ret2(arg2, args2...)>'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const bool | **[value](/documentation/code/classes/structgambit_1_1scanner_1_1is__args__convertible_3_01ret1_07arg1_00_01args1_8_8_8_08_00_01ret2_07arg2_00_01args2_8_8_8_08_4/#variable-value)**  |

## Detailed Description

```
template <typename ret1 ,
typename ret2 ,
typename arg1 ,
typename arg2 ,
typename... args1,
typename... args2>
struct Gambit::Scanner::is_args_convertible< ret1(arg1, args1...), ret2(arg2, args2...)>;
```

## Public Attributes Documentation

### variable value

```
static const bool value = __is_args_convertible__<std::is_convertible<arg1, arg2>::value, ret1 (args1...), ret2 (args2...)>::value;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000