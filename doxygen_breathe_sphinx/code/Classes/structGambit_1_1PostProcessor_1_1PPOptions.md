---
title: 'struct Gambit::PostProcessor::PPOptions'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <postprocessor.hpp>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::set< std::string > | **[all_params](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-all-params)**  |
| std::set< std::string > | **[data_labels](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-data-labels)**  |
| std::set< std::string > | **[data_labels_copy](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-data-labels-copy)**  |
| std::vector< std::string > | **[add_to_logl](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-add-to-logl)**  |
| std::vector< std::string > | **[subtract_from_logl](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-subtract-from-logl)**  |
| std::map< std::string, std::string > | **[renaming_scheme](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-renaming-scheme)**  |
| std::map< std::string, double > | **[cut_less_than](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-cut-less-than)**  |
| std::map< std::string, double > | **[cut_greater_than](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-cut-greater-than)**  |
| bool | **[discard_points_outside_cuts](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-discard-points-outside-cuts)**  |
| std::size_t | **[update_interval](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-update-interval)**  |
| bool | **[discard_old_logl](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-discard-old-logl)**  |
| std::string | **[logl_purpose_name](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-logl-purpose-name)**  |
| std::string | **[reweighted_loglike_name](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-reweighted-loglike-name)**  |
| std::string | **[root](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-root)**  |
| unsigned int | **[numtasks](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-numtasks)**  |
| unsigned int | **[rank](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-rank)**  |
| std::size_t | **[chunksize](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-chunksize)**  |
| bool | **[verbose](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/#variable-verbose)**  |

## Detailed Description

```
struct Gambit::PostProcessor::PPOptions;
```


Options object for [PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/) See matching options in [PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/) class for description 

## Public Attributes Documentation

### variable all_params

```
std::set< std::string > all_params;
```


### variable data_labels

```
std::set< std::string > data_labels;
```


### variable data_labels_copy

```
std::set< std::string > data_labels_copy;
```


### variable add_to_logl

```
std::vector< std::string > add_to_logl;
```


### variable subtract_from_logl

```
std::vector< std::string > subtract_from_logl;
```


### variable renaming_scheme

```
std::map< std::string, std::string > renaming_scheme;
```


### variable cut_less_than

```
std::map< std::string, double > cut_less_than;
```


### variable cut_greater_than

```
std::map< std::string, double > cut_greater_than;
```


### variable discard_points_outside_cuts

```
bool discard_points_outside_cuts;
```


### variable update_interval

```
std::size_t update_interval;
```


### variable discard_old_logl

```
bool discard_old_logl;
```


### variable logl_purpose_name

```
std::string logl_purpose_name;
```


### variable reweighted_loglike_name

```
std::string reweighted_loglike_name;
```


### variable root

```
std::string root;
```


### variable numtasks

```
unsigned int numtasks;
```


### variable rank

```
unsigned int rank;
```


### variable chunksize

```
std::size_t chunksize;
```


### variable verbose

```
bool verbose;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000