---
title: 'class Gambit::SpecBit::VevaciousResultContainer'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[VevaciousResultContainer](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-vevaciousresultcontainer)**() |
| void | **[clear_results](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-clear-results)**(const str panic_vaccum, int pathFinder_number) |
| void | **[set_results](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-set-results)**(str panic_vaccum, str name, double val)<br>add entries to vevacious result map  |
| void | **[add_straightPathGoodEnough](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-add-straightpathgoodenough)**(str panic_vacuum) |
| map_str_dbl | **[get_nearest_results](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-nearest-results)**() |
| map_str_dbl | **[get_global_results](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-global-results)**() |
| double | **[get_width](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-width)**(str panic_vacuum) |
| double | **[get_lifetime](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-lifetime)**(str panic_vaccum) |
| double | **[get_thermalProbability](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-thermalprobability)**(str panic_vaccum) |
| double | **[get_thermalWidth](/documentation/code/classes/classgambit_1_1specbit_1_1vevaciousresultcontainer/#function-get-thermalwidth)**(str panic_vacuum) |

## Public Functions Documentation

### function VevaciousResultContainer

```
inline VevaciousResultContainer()
```


### function clear_results

```
void clear_results(
    const str panic_vaccum,
    int pathFinder_number
)
```


delete all entries of the vevacious results map and set lifetime, probability and all entries of bounceActionThreshould vectors to -1 to be able to easily filter out points for which vevacious did not run successfully 


### function set_results

```
void set_results(
    str panic_vaccum,
    str name,
    double val
)
```

add entries to vevacious result map 

### function add_straightPathGoodEnough

```
void add_straightPathGoodEnough(
    str panic_vacuum
)
```


add information to vevacious result map whether the action of drawing a straight path between the physical & panic vacuum is already below the action threshold. 


### function get_nearest_results

```
inline map_str_dbl get_nearest_results()
```


### function get_global_results

```
inline map_str_dbl get_global_results()
```


### function get_width

```
inline double get_width(
    str panic_vacuum
)
```


### function get_lifetime

```
inline double get_lifetime(
    str panic_vaccum
)
```


### function get_thermalProbability

```
inline double get_thermalProbability(
    str panic_vaccum
)
```


### function get_thermalWidth

```
inline double get_thermalWidth(
    str panic_vacuum
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000