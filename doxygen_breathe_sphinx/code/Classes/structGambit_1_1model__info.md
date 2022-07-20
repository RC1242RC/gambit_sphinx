---
title: 'struct Gambit::model_info'
description: 'Helper struct to carry around model information. '

---








Helper struct to carry around model information. 


`#include <yaml_description_database.hpp>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| str | **[name](/documentation/code/classes/structgambit_1_1model__info/#variable-name)** <br>Model name.  |
| std::vector< str > | **[parameters](/documentation/code/classes/structgambit_1_1model__info/#variable-parameters)** <br>Parameter names.  |
| int | **[nparams](/documentation/code/classes/structgambit_1_1model__info/#variable-nparams)** <br>Number of parameters ( parameters.size() )  |
| str | **[parent](/documentation/code/classes/structgambit_1_1model__info/#variable-parent)** <br>Parent model name.  |
| std::vector< str > | **[lineage](/documentation/code/classes/structgambit_1_1model__info/#variable-lineage)** <br>Parent and all ancestor models.  |
| std::vector< str > | **[descendants](/documentation/code/classes/structgambit_1_1model__info/#variable-descendants)** <br>All children and later descendants.  |
| str | **[description](/documentation/code/classes/structgambit_1_1model__info/#variable-description)** <br>Full description of capability.  |
| bool | **[has_description](/documentation/code/classes/structgambit_1_1model__info/#variable-has-description)** <br>Flag to check if description is missing.  |

## Public Attributes Documentation

### variable name

```
str name;
```

Model name. 

### variable parameters

```
std::vector< str > parameters;
```

Parameter names. 

### variable nparams

```
int nparams;
```

Number of parameters ( parameters.size() ) 

### variable parent

```
str parent;
```

Parent model name. 

### variable lineage

```
std::vector< str > lineage;
```

Parent and all ancestor models. 

### variable descendants

```
std::vector< str > descendants;
```

All children and later descendants. 

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