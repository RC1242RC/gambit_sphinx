---
title: 'class Gambit::ColliderBit::MC_convergence_checker'
description: 'Helper class for testing for convergence of analyses. '

---








Helper class for testing for convergence of analyses. 


`#include <MC_convergence.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[MC_convergence_checker](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-mc-convergence-checker)**()<br>Constructor.  |
| | **[~MC_convergence_checker](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-~mc-convergence-checker)**()<br>Destructor.  |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-init)**(const [convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/) & settings)<br>Initialise (or re-initialise) the object.  |
| void | **[set_settings](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-set-settings)**(const [convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/) & settings)<br>Provide a pointer to the convergence settings.  |
| void | **[clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-clear)**()<br>Clear all convergence data (for all threads)  |
| void | **[update](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-update)**(const [AnalysisContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/) & ac)<br>Update the convergence data. This is the only routine meant to be called in parallel.  |
| bool | **[achieved](/documentation/code/classes/classgambit_1_1colliderbit_1_1mc__convergence__checker/#function-achieved)**(const [AnalysisContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/) & ac)<br>Check if convergence has been achieved across threads, and across all instances of this class.  |

## Public Functions Documentation

### function MC_convergence_checker

```
MC_convergence_checker()
```

Constructor. 

### function ~MC_convergence_checker

```
~MC_convergence_checker()
```

Destructor. 

Deconstructor. 


### function init

```
void init(
    const convergence_settings & settings
)
```

Initialise (or re-initialise) the object. 

### function set_settings

```
void set_settings(
    const convergence_settings & settings
)
```

Provide a pointer to the convergence settings. 

### function clear

```
void clear()
```

Clear all convergence data (for all threads) 

### function update

```
void update(
    const AnalysisContainer & ac
)
```

Update the convergence data. This is the only routine meant to be called in parallel. 

### function achieved

```
bool achieved(
    const AnalysisContainer & ac
)
```

Check if convergence has been achieved across threads, and across all instances of this class. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000