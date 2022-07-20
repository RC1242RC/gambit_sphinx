---
title: 'struct Gambit::capability_info'
description: 'Helper struct to carry around capability information. '

---








Helper struct to carry around capability information. 


`#include <yaml_description_database.hpp>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| str | **[name](/documentation/code/classes/structgambit_1_1capability__info/#variable-name)** <br>Capability name.  |
| std::map< str, std::set< std::pair< str, str > > > | **[modset](/documentation/code/classes/structgambit_1_1capability__info/#variable-modset)** <br>Set of modules and module functions in which capability is used, along with corresponding result types.  |
| std::map< str, std::set< std::pair< str, str > > > | **[beset](/documentation/code/classes/structgambit_1_1capability__info/#variable-beset)** <br>Set of backends and backend functions in which capability is used, along with corresponding type signatures.  |
| str | **[description](/documentation/code/classes/structgambit_1_1capability__info/#variable-description)** <br>Full description of capability.  |
| bool | **[has_description](/documentation/code/classes/structgambit_1_1capability__info/#variable-has-description)** <br>Flag to check if description is missing.  |

## Public Attributes Documentation

### variable name

```
str name;
```

Capability name. 

### variable modset

```
std::map< str, std::set< std::pair< str, str > > > modset;
```

Set of modules and module functions in which capability is used, along with corresponding result types. 

### variable beset

```
std::map< str, std::set< std::pair< str, str > > > beset;
```

Set of backends and backend functions in which capability is used, along with corresponding type signatures. 

### variable description

```
str description;
```

Full description of capability. 

### variable has_description

```
bool has_description;
```

Flag to check if description is missing. 

-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000