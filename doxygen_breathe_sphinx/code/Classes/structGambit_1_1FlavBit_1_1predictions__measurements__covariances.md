---
title: 'struct Gambit::FlavBit::predictions_measurements_covariances'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <FlavBit_types.hpp>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::string | **[LL_name](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-ll-name)**  |
| boost::numeric::ublas::matrix< double > | **[value_exp](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-value-exp)**  |
| boost::numeric::ublas::matrix< double > | **[cov_exp](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-cov-exp)**  |
| boost::numeric::ublas::matrix< double > | **[value_th](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-value-th)**  |
| boost::numeric::ublas::matrix< double > | **[cov_th](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-cov-th)**  |
| std::vector< double > | **[diff](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-diff)**  |
| int | **[dim](/documentation/code/classes/structgambit_1_1flavbit_1_1predictions__measurements__covariances/#variable-dim)**  |

## Detailed Description

```
struct Gambit::FlavBit::predictions_measurements_covariances;
```


Structure for holding predicted and observed values of multiple observables, and experimental and theoretical covariance matrices for their uncertainties. 

## Public Attributes Documentation

### variable LL_name

```
std::string LL_name;
```


### variable value_exp

```
boost::numeric::ublas::matrix< double > value_exp;
```


### variable cov_exp

```
boost::numeric::ublas::matrix< double > cov_exp;
```


### variable value_th

```
boost::numeric::ublas::matrix< double > value_th;
```


### variable cov_th

```
boost::numeric::ublas::matrix< double > cov_th;
```


### variable diff

```
std::vector< double > diff;
```


### variable dim

```
int dim;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000