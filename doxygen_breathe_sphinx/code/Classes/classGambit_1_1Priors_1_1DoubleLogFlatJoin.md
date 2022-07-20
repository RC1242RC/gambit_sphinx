---
title: 'class Gambit::Priors::DoubleLogFlatJoin'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <doublelogflatjoin.hpp>`

Inherits from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[DoubleLogFlatJoin](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-doublelogflatjoin)**(const std::vector< std::string > & param, const Options & options)<br>Constructor defined in [doublelogflatjoin.cpp]().  |
| virtual void | **[transform](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-transform)**(const std::vector< double > & unitpars, std::unordered_map< std::string, double > & output) const override<br>Transformation from unit interval to the double log + flat join (inverse prior transform)  |
| virtual std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-inverse-transform)**(const std::unordered_map< std::string, double > & ) const override<br>Transform from parameter back to unit hypercube.  |
| virtual double | **[operator()](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-operator())**(const std::vector< double > & vec) const override<br>Probability density function.  |

## Additional inherited members

**Public Functions inherited from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)**

|                | Name           |
| -------------- | -------------- |
| virtual | **[~BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-~baseprior)**() =default |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**() |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const int param_size) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::vector< std::string > & param_names, const int param_size =0) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::string & param_name, const int param_size =0) |
| virtual std::vector< std::string > | **[getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getshownparameters)**() const |
| unsigned int | **[size](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-size)**() const |
| void | **[setSize](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-setsize)**(const unsigned int size) |
| unsigned int & | **[sizeRef](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-sizeref)**() |
| std::vector< std::string > | **[getParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getparameters)**() const |

**Protected Attributes inherited from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)**

|                | Name           |
| -------------- | -------------- |
| std::vector< std::string > | **[param_names](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#variable-param-names)**  |


## Detailed Description

```
class Gambit::Priors::DoubleLogFlatJoin;
```


1D double log prior with flat bridge over zero. (for creating a prior similar to log that works across positive and negative values continuously). Takes the arguments: [minval : flat_start : flat_end : maxval] 

## Public Functions Documentation

### function DoubleLogFlatJoin

```
DoubleLogFlatJoin(
    const std::vector< std::string > & param,
    const Options & options
)
```

Constructor defined in [doublelogflatjoin.cpp](). 

Constructor. 


### function transform

```
virtual void transform(
    const std::vector< double > & unitpars,
    std::unordered_map< std::string, double > & output
) const override
```

Transformation from unit interval to the double log + flat join (inverse prior transform) 

**Reimplements**: [Gambit::Priors::BasePrior::transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-transform)


Transformation from unit interval to the double log + flat join. 


### function inverse_transform

```
virtual std::vector< double > inverse_transform(
    const std::unordered_map< std::string, double > & 
) const override
```

Transform from parameter back to unit hypercube. 

**Reimplements**: [Gambit::Priors::BasePrior::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-inverse-transform)


### function operator()

```
virtual double operator()(
    const std::vector< double > & vec
) const override
```

Probability density function. 

**Reimplements**: [Gambit::Priors::BasePrior::operator()](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-operator())


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000