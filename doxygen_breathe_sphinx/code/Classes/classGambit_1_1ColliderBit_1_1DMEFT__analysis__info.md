---
title: 'class Gambit::ColliderBit::DMEFT_analysis_info'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| void | **[add_bkgcov](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#function-add-bkgcov)**(const std::vector< std::vector< double >> & bkgcov_in) |
| void | **[add_interp1d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#function-add-interp1d)**(str name, str filename, std::vector< str > colnames) |
| void | **[add_interp2d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#function-add-interp2d)**(str name, str filename, std::vector< str > colnames) |
| const Utils::interp1d_collection & | **[get_interp1d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#function-get-interp1d)**(str name) const |
| const Utils::interp2d_collection & | **[get_interp2d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#function-get-interp2d)**(str name) const |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| str | **[name](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-name)**  |
| double | **[lumi_invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-lumi-invfb)**  |
| size_t | **[n_signal_regions](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-n-signal-regions)**  |
| std::vector< int > | **[obsnum](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-obsnum)**  |
| std::vector< double > | **[bkgnum](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-bkgnum)**  |
| std::vector< double > | **[bkgerr](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-bkgerr)**  |
| Eigen::MatrixXd | **[bkgcov](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-bkgcov)**  |
| std::map< str, std::vector< double > > | **[extra_info](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-extra-info)**  |
| std::map< str, std::unique_ptr< Utils::interp1d_collection > > | **[interp1d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-interp1d)**  |
| std::map< str, std::unique_ptr< Utils::interp2d_collection > > | **[interp2d](/documentation/code/classes/classgambit_1_1colliderbit_1_1dmeft__analysis__info/#variable-interp2d)**  |

## Detailed Description

```
class Gambit::ColliderBit::DMEFT_analysis_info;
```


A minimal class with analysis info, maps for containing collections of 1D/2D interpolators and some helper functions for adding and accessing the interpolators, and for adding a background covariance matrix. Currently this class is tailored specifically for the DMEFT model &ndash; it will be generalized in the future. 

## Public Functions Documentation

### function add_bkgcov

```
inline void add_bkgcov(
    const std::vector< std::vector< double >> & bkgcov_in
)
```


### function add_interp1d

```
inline void add_interp1d(
    str name,
    str filename,
    std::vector< str > colnames
)
```


### function add_interp2d

```
inline void add_interp2d(
    str name,
    str filename,
    std::vector< str > colnames
)
```


### function get_interp1d

```
inline const Utils::interp1d_collection & get_interp1d(
    str name
) const
```


### function get_interp2d

```
inline const Utils::interp2d_collection & get_interp2d(
    str name
) const
```


## Public Attributes Documentation

### variable name

```
str name;
```


### variable lumi_invfb

```
double lumi_invfb;
```


### variable n_signal_regions

```
size_t n_signal_regions;
```


### variable obsnum

```
std::vector< int > obsnum;
```


### variable bkgnum

```
std::vector< double > bkgnum;
```


### variable bkgerr

```
std::vector< double > bkgerr;
```


### variable bkgcov

```
Eigen::MatrixXd bkgcov;
```


### variable extra_info

```
std::map< str, std::vector< double > > extra_info;
```


### variable interp1d

```
std::map< str, std::unique_ptr< Utils::interp1d_collection > > interp1d;
```


### variable interp2d

```
std::map< str, std::unique_ptr< Utils::interp2d_collection > > interp2d;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000