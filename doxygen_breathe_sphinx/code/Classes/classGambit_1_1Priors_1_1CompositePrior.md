---
title: 'class Gambit::Priors::CompositePrior'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <composite.hpp>`

Inherits from [Gambit::Priors::BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[CompositePrior](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-compositeprior)**(const Options & model_options, const Options & prior_options)<br>Special "build-a-prior" classi.  |
| | **[CompositePrior](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-compositeprior)**(const std::vector< std::string > & params, const Options & options) |
| virtual std::vector< std::string > | **[getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-getshownparameters)**() const override |
| virtual void | **[transform](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-transform)**(const std::vector< double > & , std::unordered_map< std::string, double > & ) const override<br>Transform from unit hypercube to parameter.  |
| virtual std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-inverse-transform)**(const std::unordered_map< std::string, double > & ) const override<br>Transform from parameter back to unit hypercube.  |
| | **[~CompositePrior](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-~compositeprior)**() |

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


## Detailed Description

```
class Gambit::Priors::CompositePrior;
```


Special "build-a-prior" class This is the class to use for setting simple 1D priors (from the library above) on individual parameters. It actually also allows for any combination of MD priors to be set on any combination of subspaces of the full prior. 

## Public Functions Documentation

### function CompositePrior

```
CompositePrior(
    const Options & model_options,
    const Options & prior_options
)
```

Special "build-a-prior" classi. 

### function CompositePrior

```
CompositePrior(
    const std::vector< std::string > & params,
    const Options & options
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


### function ~CompositePrior

```
inline ~CompositePrior()
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000