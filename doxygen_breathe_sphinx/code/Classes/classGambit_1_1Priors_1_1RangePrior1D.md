---
title: 'class Gambit::Priors::RangePrior1D'
description: 'Template class for 1d priors which need only a "range" option in their constructor. '

---








Template class for 1d priors which need only a "range" option in their constructor.  [More...](#detailed-description)


`#include <flat_log.hpp>`

Inherits from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[RangePrior1D](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-rangeprior1d)**(const std::vector< std::string > & param, const Options & options) |
| virtual void | **[transform](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-transform)**(const std::vector< double > & , std::unordered_map< std::string, double > & ) const override<br>Transform from unit hypercube to parameter.  |
| virtual std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-inverse-transform)**(const std::unordered_map< std::string, double > & ) const override<br>Transform from parameter back to unit hypercube.  |
| virtual double | **[operator()](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-operator())**(const std::vector< double > & ) const override<br>Log of PDF density.  |

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
template <class T >
class Gambit::Priors::RangePrior1D;
```

Template class for 1d priors which need only a "range" option in their constructor. 
## Public Functions Documentation

### function RangePrior1D

```
inline RangePrior1D(
    const std::vector< std::string > & param,
    const Options & options
)
```


### function transform

```
inline virtual void transform(
    const std::vector< double > & ,
    std::unordered_map< std::string, double > & 
) const override
```

Transform from unit hypercube to parameter. 

**Reimplements**: [Gambit::Priors::BasePrior::transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-transform)


### function inverse_transform

```
inline virtual std::vector< double > inverse_transform(
    const std::unordered_map< std::string, double > & 
) const override
```

Transform from parameter back to unit hypercube. 

**Reimplements**: [Gambit::Priors::BasePrior::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-inverse-transform)


### function operator()

```
inline virtual double operator()(
    const std::vector< double > & 
) const override
```

Log of PDF density. 

**Reimplements**: [Gambit::Priors::BasePrior::operator()](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-operator())


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000