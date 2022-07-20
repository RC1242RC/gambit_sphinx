---
title: 'class Gambit::Priors::MultiPriors'
description: 'A parameter that is fixed to a different parameter. '

---








A parameter that is fixed to a different parameter. 


`#include <fixed_same_as.hpp>`

Inherits from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[MultiPriors](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-multipriors)**(const std::vector< std::string > & param, const Options & options) |
| | **[MultiPriors](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-multipriors)**(std::string name_in, std::unordered_map< std::string, std::pair< double, double > > & map_in) |
| virtual std::vector< std::string > | **[getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-getshownparameters)**() const override |
| virtual void | **[transform](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-transform)**(const std::vector< double > & , std::unordered_map< std::string, double > & ) const override<br>Transform from unit hypercube to parameter.  |
| virtual std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-inverse-transform)**(const std::unordered_map< std::string, double > & ) const override<br>Transform from parameter back to unit hypercube.  |

## Additional inherited members

**Public Functions inherited from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)**

|                | Name           |
| -------------- | -------------- |
| virtual | **[~BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-~baseprior)**() =default |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**() |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const int param_size) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::vector< std::string > & param_names, const int param_size =0) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::string & param_name, const int param_size =0) |
| virtual double | **[operator()](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-operator())**(const std::vector< double > & ) const<br>Log of PDF density.  |
| unsigned int | **[size](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-size)**() const |
| void | **[setSize](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-setsize)**(const unsigned int size) |
| unsigned int & | **[sizeRef](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-sizeref)**() |
| std::vector< std::string > | **[getParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getparameters)**() const |

**Protected Attributes inherited from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)**

|                | Name           |
| -------------- | -------------- |
| std::vector< std::string > | **[param_names](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#variable-param-names)**  |


## Public Functions Documentation

### function MultiPriors

```
inline MultiPriors(
    const std::vector< std::string > & param,
    const Options & options
)
```


### function MultiPriors

```
inline MultiPriors(
    std::string name_in,
    std::unordered_map< std::string, std::pair< double, double > > & map_in
)
```


### function getShownParameters

```
inline virtual std::vector< std::string > getShownParameters() const override
```


**Reimplements**: [Gambit::Priors::BasePrior::getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getshownparameters)


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


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000