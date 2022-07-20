---
title: 'struct Gambit::NREO_DM_nucleon_couplings'
description: 'Container for effective non-relativistic DM-nucleon Wilson coefficients. '

---








Container for effective non-relativistic DM-nucleon Wilson coefficients. 


`#include <DDCalc.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#function-nreo-dm-nucleon-couplings)**()<br>Default [NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constructor.  |
| | **[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#function-nreo-dm-nucleon-couplings)**(int CPT)<br>Default [NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constructor.  |
| | **[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#function-nreo-dm-nucleon-couplings)**(const ModelParameters & pars)<br>[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constuctor from ModelParameters object.  |
| | **[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#function-nreo-dm-nucleon-couplings)**(const [Models::safe_param_map](/documentation/code/classes/classgambit_1_1models_1_1safe__param__map/)< [safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double >> & pars)<br>[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constuctor from functor 'Params', i.e. 'safe_param_map' used to hold collected model parameters.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| int | **[CPTbasis](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#variable-cptbasis)**  |
| std::map< int, double > | **[c0](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#variable-c0)** <br>Store couplings in map for easier iteration.  |
| std::map< int, double > | **[c1](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/#variable-c1)**  |

## Public Functions Documentation

### function NREO_DM_nucleon_couplings

```
NREO_DM_nucleon_couplings()
```

Default [NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constructor. 

### function NREO_DM_nucleon_couplings

```
NREO_DM_nucleon_couplings(
    int CPT
)
```

Default [NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constructor. 

### function NREO_DM_nucleon_couplings

```
NREO_DM_nucleon_couplings(
    const ModelParameters & pars
)
```

[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constuctor from ModelParameters object. 

### function NREO_DM_nucleon_couplings

```
NREO_DM_nucleon_couplings(
    const Models::safe_param_map< safe_ptr< const double >> & pars
)
```

[NREO_DM_nucleon_couplings](/documentation/code/classes/structgambit_1_1nreo__dm__nucleon__couplings/) constuctor from functor 'Params', i.e. 'safe_param_map' used to hold collected model parameters. 

## Public Attributes Documentation

### variable CPTbasis

```
int CPTbasis;
```


### variable c0

```
std::map< int, double > c0;
```

Store couplings in map for easier iteration. 

### variable c1

```
std::map< int, double > c1;
```


-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000