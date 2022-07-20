---
title: 'class Gambit::DescriptionDatabase'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <yaml_description_database.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| template <typename... args\> <br>bool | **[hasKey](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-haskey)**(const args &... keys) const |
| template <typename TYPE ,typename... args\> <br>TYPE | **[getValue](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-getvalue)**(const args &... keys) const |
| | **[DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-descriptiondatabase)**()<br>Default constructor.  |
| | **[DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-descriptiondatabase)**(const str & filename)<br>Construct from file.  |
| | **[DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-descriptiondatabase)**(const YAML::Node & descriptions)<br>Copy constructor.  |
| | **[DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-descriptiondatabase)**(YAML::Node && descriptions)<br>Move constructor.  |
| template <typename... args\> <br>void | **[loadFile](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-loadfile)**(const str & filename)<br>Load descriptions from file.  |
| std::map< str, int > | **[check_for_duplicates](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-check-for-duplicates)**()<br>Check 'descriptions' for duplicate keys.  |
| std::vector< str > | **[get_all_values](/documentation/code/classes/classgambit_1_1descriptiondatabase/#function-get-all-values)**(str key)<br>Return vector of descriptions matching key (for retrieving values with non-unique keys)  |

## Detailed Description

```
class Gambit::DescriptionDatabase;
```


A small wrapper object for 'description database' nodes. The descriptions are extracted from, e.g., capabilities.dat 

## Public Functions Documentation

### function hasKey

```
template <typename... args>
inline bool hasKey(
    const args &... keys
) const
```


Getters for key/value pairs (which is all the options node should contain) 


### function getValue

```
template <typename TYPE ,
typename... args>
inline TYPE getValue(
    const args &... keys
) const
```


### function DescriptionDatabase

```
DescriptionDatabase()
```

Default constructor. 

Member functions for [DescriptionDatabase](/documentation/code/classes/classgambit_1_1descriptiondatabase/) class.

Default constructor 


### function DescriptionDatabase

```
DescriptionDatabase(
    const str & filename
)
```

Construct from file. 

### function DescriptionDatabase

```
DescriptionDatabase(
    const YAML::Node & descriptions
)
```

Copy constructor. 

### function DescriptionDatabase

```
DescriptionDatabase(
    YAML::Node && descriptions
)
```

Move constructor. 

### function loadFile

```
template <typename... args>
inline void loadFile(
    const str & filename
)
```

Load descriptions from file. 

### function check_for_duplicates

```
std::map< str, int > check_for_duplicates()
```

Check 'descriptions' for duplicate keys. 

### function get_all_values

```
std::vector< str > get_all_values(
    str key
)
```

Return vector of descriptions matching key (for retrieving values with non-unique keys) 

-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000