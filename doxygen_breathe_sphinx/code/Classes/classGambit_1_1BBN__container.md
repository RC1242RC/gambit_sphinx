---
title: 'class Gambit::BBN_container'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <AlterBBN.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[BBN_container](/documentation/code/classes/classgambit_1_1bbn__container/#function-bbn-container)**()<br>Constructor.  |
| void | **[init_arr_size](/documentation/code/classes/classgambit_1_1bbn__container/#function-init-arr-size)**(size_t nnuc)<br>Initialize sizes of vectors (get NNUC, number of computed element abundances, from AlterBBN)  |
| void | **[set_abund_map](/documentation/code/classes/classgambit_1_1bbn__container/#function-set-abund-map)**(map_str_int map_in)<br>Initialise the translation map from element name to position in abundance vector.  |
| void | **[set_BBN_abund](/documentation/code/classes/classgambit_1_1bbn__container/#function-set-bbn-abund)**(int pos, double val)<br>Setter functions for abundance vector.  |
| void | **[set_BBN_abund](/documentation/code/classes/classgambit_1_1bbn__container/#function-set-bbn-abund)**(int pos, triplet< double > val) |
| void | **[set_BBN_covmat](/documentation/code/classes/classgambit_1_1bbn__container/#function-set-bbn-covmat)**(int row, int col, double val)<br>Setter function for covariance matrix.  |
| size_t | **[get_NNUC](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-nnuc)**() const<br>Global parameter in AlterBBN; holds number of computed element abundances.  |
| const std::map< std::string, int > & | **[get_abund_map](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-abund-map)**() const<br>Getter for map from isotope names to position in BBN_abundance vector.  |
| double | **[get_BBN_abund](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund)**(int pos) const<br>Getter for abundance.  |
| double | **[get_BBN_abund_upper](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund-upper)**(int pos) const |
| double | **[get_BBN_abund_lower](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund-lower)**(int pos) const |
| double | **[get_BBN_abund](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund)**(str iso) const<br>Getter for abundance.  |
| double | **[get_BBN_abund_upper](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund-upper)**(str iso) const |
| double | **[get_BBN_abund_lower](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-abund-lower)**(str iso) const |
| double | **[get_BBN_covmat](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-bbn-covmat)**(int row, int col) const<br>Getter for covariance matrix.  |
| void | **[set_active_isotopes](/documentation/code/classes/classgambit_1_1bbn__container/#function-set-active-isotopes)**(std::set< str > isos)<br>Setter for active isotopes.  |
| const std::set< str > & | **[get_active_isotopes](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-active-isotopes)**() const<br>Getter for active isotopes.  |
| const std::set< int > & | **[get_active_isotope_indices](/documentation/code/classes/classgambit_1_1bbn__container/#function-get-active-isotope-indices)**() const<br>Getter for indices of active isotopes in BBN_abundance vector.  |
| bool | **[has_BBN_abund_upper](/documentation/code/classes/classgambit_1_1bbn__container/#function-has-bbn-abund-upper)**() const<br>Check whether there is any non-zero upper or lower abundance.  |
| bool | **[has_BBN_abund_lower](/documentation/code/classes/classgambit_1_1bbn__container/#function-has-bbn-abund-lower)**() const |

## Detailed Description

```
class Gambit::BBN_container;
```


Class to store all results from an AlterBBN run. This class needs to be fully defined in the header in order to prevent linking problems when building the ScannerBit standalone. -> element abundances stored in BBN_nuc (length NNUC+1), -> covariance matrix in BBN_covmat ( dim NNUC+1 x NNUC+1) -> abund_map maps name of element to position in BBN_abundance vector see constructor of [BBN_container](/documentation/code/classes/classgambit_1_1bbn__container/)

## Public Functions Documentation

### function BBN_container

```
inline BBN_container()
```

Constructor. 

### function init_arr_size

```
inline void init_arr_size(
    size_t nnuc
)
```

Initialize sizes of vectors (get NNUC, number of computed element abundances, from AlterBBN) 

### function set_abund_map

```
inline void set_abund_map(
    map_str_int map_in
)
```

Initialise the translation map from element name to position in abundance vector. 

### function set_BBN_abund

```
inline void set_BBN_abund(
    int pos,
    double val
)
```

Setter functions for abundance vector. 

### function set_BBN_abund

```
inline void set_BBN_abund(
    int pos,
    triplet< double > val
)
```


### function set_BBN_covmat

```
inline void set_BBN_covmat(
    int row,
    int col,
    double val
)
```

Setter function for covariance matrix. 

### function get_NNUC

```
inline size_t get_NNUC() const
```

Global parameter in AlterBBN; holds number of computed element abundances. 

### function get_abund_map

```
inline const std::map< std::string, int > & get_abund_map() const
```

Getter for map from isotope names to position in BBN_abundance vector. 

### function get_BBN_abund

```
inline double get_BBN_abund(
    int pos
) const
```

Getter for abundance. 

### function get_BBN_abund_upper

```
inline double get_BBN_abund_upper(
    int pos
) const
```


### function get_BBN_abund_lower

```
inline double get_BBN_abund_lower(
    int pos
) const
```


### function get_BBN_abund

```
inline double get_BBN_abund(
    str iso
) const
```

Getter for abundance. 

### function get_BBN_abund_upper

```
inline double get_BBN_abund_upper(
    str iso
) const
```


### function get_BBN_abund_lower

```
inline double get_BBN_abund_lower(
    str iso
) const
```


### function get_BBN_covmat

```
inline double get_BBN_covmat(
    int row,
    int col
) const
```

Getter for covariance matrix. 

### function set_active_isotopes

```
inline void set_active_isotopes(
    std::set< str > isos
)
```

Setter for active isotopes. 

### function get_active_isotopes

```
inline const std::set< str > & get_active_isotopes() const
```

Getter for active isotopes. 

### function get_active_isotope_indices

```
inline const std::set< int > & get_active_isotope_indices() const
```

Getter for indices of active isotopes in BBN_abundance vector. 

### function has_BBN_abund_upper

```
inline bool has_BBN_abund_upper() const
```

Check whether there is any non-zero upper or lower abundance. 

### function has_BBN_abund_lower

```
inline bool has_BBN_abund_lower() const
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000