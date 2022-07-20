---
title: 'class Gambit::FlavBit::Flav_reader'
description: 'Reader class for FlavBit YAML database. '

---








Reader class for FlavBit YAML database. 


`#include <Flav_reader.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Flav_reader](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-flav-reader)**(str loc)<br>Constructor that takes the location of the database as an argument.  |
| void | **[read_yaml](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-read-yaml)**(str name)<br>Read the entire database into memory.  |
| void | **[read_yaml_measurement](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-read-yaml-measurement)**(str name, str measurement_name)<br>Read a single measurement from the database into memory.  |
| void | **[initialise_matrices](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-initialise-matrices)**()<br>Compute the covariance matrix and populate the measurement and theory error vectors.  |
| void | **[print_matrix](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-print-matrix)**(boost::numeric::ublas::matrix< double > & M, str name, bool is_true_matrix =true)<br>Print a boost ublas matrix.  |
| void | **[print_matrix](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-print-matrix)**(boost::numeric::ublas::matrix< std::pair< double, bool > > & M, str name, bool is_true_matrix =true)<br>Print a boost ublas matrix with a pair type.  |
| void | **[debug_mode](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-debug-mode)**(bool k)<br>Set debug mode for reader.  |
| boost::numeric::ublas::matrix< double > | **[get_exp_cov](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-get-exp-cov)**()<br>Return the covariance matrix.  |
| boost::numeric::ublas::matrix< double > | **[get_exp_value](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-get-exp-value)**()<br>Return the experimental central values.  |
| boost::numeric::ublas::matrix< std::pair< double, bool > > | **[get_th_err](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-get-th-err)**()<br>Return the (uncorrelated) theory errors.  |
| double | **[get_error_from_confidence_levels](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#function-get-error-from-confidence-levels)**(double exp_value, double CL_90, double CL_95, bool one_sided)<br>Calculates the experimental statistical error from confidence levels.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| int | **[number_measurements](/documentation/code/classes/classgambit_1_1flavbit_1_1flav__reader/#variable-number-measurements)**  |

## Public Functions Documentation

### function Flav_reader

```
Flav_reader(
    str loc
)
```

Constructor that takes the location of the database as an argument. 

### function read_yaml

```
void read_yaml(
    str name
)
```

Read the entire database into memory. 

### function read_yaml_measurement

```
void read_yaml_measurement(
    str name,
    str measurement_name
)
```

Read a single measurement from the database into memory. 

### function initialise_matrices

```
void initialise_matrices()
```

Compute the covariance matrix and populate the measurement and theory error vectors. 

### function print_matrix

```
void print_matrix(
    boost::numeric::ublas::matrix< double > & M,
    str name,
    bool is_true_matrix =true
)
```

Print a boost ublas matrix. 

### function print_matrix

```
void print_matrix(
    boost::numeric::ublas::matrix< std::pair< double, bool > > & M,
    str name,
    bool is_true_matrix =true
)
```

Print a boost ublas matrix with a pair type. 

### function debug_mode

```
inline void debug_mode(
    bool k
)
```

Set debug mode for reader. 

### function get_exp_cov

```
inline boost::numeric::ublas::matrix< double > get_exp_cov()
```

Return the covariance matrix. 

### function get_exp_value

```
inline boost::numeric::ublas::matrix< double > get_exp_value()
```

Return the experimental central values. 

### function get_th_err

```
inline boost::numeric::ublas::matrix< std::pair< double, bool > > get_th_err()
```

Return the (uncorrelated) theory errors. 

### function get_error_from_confidence_levels

```
static double get_error_from_confidence_levels(
    double exp_value,
    double CL_90,
    double CL_95,
    bool one_sided
)
```

Calculates the experimental statistical error from confidence levels. 

## Public Attributes Documentation

### variable number_measurements

```
int number_measurements;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000