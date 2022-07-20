---
title: 'class Gambit::Priors::BasePrior'
description: 'Abstract base class for priors. '

---








Abstract base class for priors. 


`#include <base_prior.hpp>`

Inherited by [Gambit::Priors::Cauchy](/documentation/code/classes/classgambit_1_1priors_1_1cauchy/), [Gambit::Priors::CompositePrior](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/), [Gambit::Priors::DoubleLogFlatJoin](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/), [Gambit::Priors::Dummy](/documentation/code/classes/classgambit_1_1priors_1_1dummy/), [Gambit::Priors::FixedPrior](/documentation/code/classes/classgambit_1_1priors_1_1fixedprior/), [Gambit::Priors::Gaussian](/documentation/code/classes/classgambit_1_1priors_1_1gaussian/), [Gambit::Priors::LogNormal](/documentation/code/classes/classgambit_1_1priors_1_1lognormal/), [Gambit::Priors::MultiPriors](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/), [Gambit::Priors::None](/documentation/code/classes/classgambit_1_1priors_1_1none/), [Gambit::Priors::Plugin](/documentation/code/classes/classgambit_1_1priors_1_1plugin/), [Gambit::Priors::RangePrior1D< T >](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual | **[~BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-~baseprior)**() =default |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**() |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const int param_size) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::vector< std::string > & param_names, const int param_size =0) |
| | **[BasePrior](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-baseprior)**(const std::string & param_name, const int param_size =0) |
| virtual void | **[transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-transform)**(const std::vector< double > & , std::unordered_map< std::string, double > & ) const =0<br>Transform from unit hypercube to parameter.  |
| virtual std::vector< double > | **[inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-inverse-transform)**(const std::unordered_map< std::string, double > & ) const =0<br>Transform from parameter back to unit hypercube.  |
| virtual double | **[operator()](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-operator())**(const std::vector< double > & ) const<br>Log of PDF density.  |
| virtual std::vector< std::string > | **[getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getshownparameters)**() const |
| unsigned int | **[size](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-size)**() const |
| void | **[setSize](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-setsize)**(const unsigned int size) |
| unsigned int & | **[sizeRef](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-sizeref)**() |
| std::vector< std::string > | **[getParameters](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#function-getparameters)**() const |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| std::vector< std::string > | **[param_names](/documentation/code/classes/classgambit_1_1priors_1_1baseprior/#variable-param-names)**  |

## Public Functions Documentation

### function ~BasePrior

```
virtual ~BasePrior() =default
```


### function BasePrior

```
inline BasePrior()
```


### function BasePrior

```
inline explicit BasePrior(
    const int param_size
)
```


### function BasePrior

```
inline explicit BasePrior(
    const std::vector< std::string > & param_names,
    const int param_size =0
)
```


### function BasePrior

```
inline explicit BasePrior(
    const std::string & param_name,
    const int param_size =0
)
```


### function transform

```
virtual void transform(
    const std::vector< double > & ,
    std::unordered_map< std::string, double > & 
) const =0
```

Transform from unit hypercube to parameter. 

**Reimplemented by**: [Gambit::Priors::None::transform](/documentation/code/classes/classgambit_1_1priors_1_1none/#function-transform), [Gambit::Priors::FixedPrior::transform](/documentation/code/classes/classgambit_1_1priors_1_1fixedprior/#function-transform), [Gambit::Priors::MultiPriors::transform](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-transform), [Gambit::Priors::DoubleLogFlatJoin::transform](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-transform), [Gambit::Priors::RangePrior1D::transform](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-transform), [Gambit::Priors::Dummy::transform](/documentation/code/classes/classgambit_1_1priors_1_1dummy/#function-transform), [Gambit::Priors::Plugin::transform](/documentation/code/classes/classgambit_1_1priors_1_1plugin/#function-transform), [Gambit::Priors::Cauchy::transform](/documentation/code/classes/classgambit_1_1priors_1_1cauchy/#function-transform), [Gambit::Priors::Gaussian::transform](/documentation/code/classes/classgambit_1_1priors_1_1gaussian/#function-transform), [Gambit::Priors::CompositePrior::transform](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-transform), [Gambit::Priors::LogNormal::transform](/documentation/code/classes/classgambit_1_1priors_1_1lognormal/#function-transform)


### function inverse_transform

```
virtual std::vector< double > inverse_transform(
    const std::unordered_map< std::string, double > & 
) const =0
```

Transform from parameter back to unit hypercube. 

**Reimplemented by**: [Gambit::Priors::Plugin::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1plugin/#function-inverse-transform), [Gambit::Priors::DoubleLogFlatJoin::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-inverse-transform), [Gambit::Priors::None::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1none/#function-inverse-transform), [Gambit::Priors::Dummy::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1dummy/#function-inverse-transform), [Gambit::Priors::CompositePrior::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-inverse-transform), [Gambit::Priors::Cauchy::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1cauchy/#function-inverse-transform), [Gambit::Priors::Gaussian::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1gaussian/#function-inverse-transform), [Gambit::Priors::LogNormal::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1lognormal/#function-inverse-transform), [Gambit::Priors::FixedPrior::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1fixedprior/#function-inverse-transform), [Gambit::Priors::MultiPriors::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-inverse-transform), [Gambit::Priors::RangePrior1D::inverse_transform](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-inverse-transform)


### function operator()

```
inline virtual double operator()(
    const std::vector< double > & 
) const
```

Log of PDF density. 

**Reimplemented by**: [Gambit::Priors::Plugin::operator()](/documentation/code/classes/classgambit_1_1priors_1_1plugin/#function-operator()), [Gambit::Priors::DoubleLogFlatJoin::operator()](/documentation/code/classes/classgambit_1_1priors_1_1doublelogflatjoin/#function-operator()), [Gambit::Priors::Cauchy::operator()](/documentation/code/classes/classgambit_1_1priors_1_1cauchy/#function-operator()), [Gambit::Priors::Gaussian::operator()](/documentation/code/classes/classgambit_1_1priors_1_1gaussian/#function-operator()), [Gambit::Priors::LogNormal::operator()](/documentation/code/classes/classgambit_1_1priors_1_1lognormal/#function-operator()), [Gambit::Priors::RangePrior1D::operator()](/documentation/code/classes/classgambit_1_1priors_1_1rangeprior1d/#function-operator())


### function getShownParameters

```
inline virtual std::vector< std::string > getShownParameters() const
```


**Reimplemented by**: [Gambit::Priors::CompositePrior::getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1compositeprior/#function-getshownparameters), [Gambit::Priors::FixedPrior::getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1fixedprior/#function-getshownparameters), [Gambit::Priors::MultiPriors::getShownParameters](/documentation/code/classes/classgambit_1_1priors_1_1multipriors/#function-getshownparameters)


### function size

```
inline unsigned int size() const
```


### function setSize

```
inline void setSize(
    const unsigned int size
)
```


### function sizeRef

```
inline unsigned int & sizeRef()
```


### function getParameters

```
inline std::vector< std::string > getParameters() const
```


## Protected Attributes Documentation

### variable param_names

```
std::vector< std::string > param_names;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000