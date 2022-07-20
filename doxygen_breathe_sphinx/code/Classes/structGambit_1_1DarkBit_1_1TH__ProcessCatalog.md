---
title: 'struct Gambit::DarkBit::TH_ProcessCatalog'
description: 'A container holding all annihilation and decay initial states relevant for DarkBit. '

---








A container holding all annihilation and decay initial states relevant for DarkBit. 


`#include <ProcessCatalog.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| [TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/) | **[getProcess](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#function-getprocess)**(str id1, str id2 ="") const<br>Retrieve a specific process from the catalog.  |
| const [TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/) * | **[find](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#function-find)**(str id1, str id2 ="") const<br>Check for a specific process in the catalog.  |
| [TH_ParticleProperty](/documentation/code/classes/structgambit_1_1darkbit_1_1th__particleproperty/) | **[getParticleProperty](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#function-getparticleproperty)**(str id) const<br>Retrieve properties of a given particle involved in one or more processes in this catalog.  |
| bool | **[hasParticleProperty](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#function-hasparticleproperty)**(str id) const<br>Check whether particle is in particle properties catalog.  |
| void | **[validate](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#function-validate)**()<br>Validate kinematics and entries.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::vector< [TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/) > | **[processList](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#variable-processlist)** <br>Vector of all processes in this catalog.  |
| std::map< std::string, [TH_ParticleProperty](/documentation/code/classes/structgambit_1_1darkbit_1_1th__particleproperty/) > | **[particleProperties](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/#variable-particleproperties)** <br>Map from particles involved in the processes of this catalog, to their properties.  |

## Public Functions Documentation

### function getProcess

```
TH_Process getProcess(
    str id1,
    str id2 =""
) const
```

Retrieve a specific process from the catalog. 

### function find

```
const TH_Process * find(
    str id1,
    str id2 =""
) const
```

Check for a specific process in the catalog. 

### function getParticleProperty

```
TH_ParticleProperty getParticleProperty(
    str id
) const
```

Retrieve properties of a given particle involved in one or more processes in this catalog. 

### function hasParticleProperty

```
bool hasParticleProperty(
    str id
) const
```

Check whether particle is in particle properties catalog. 

### function validate

```
void validate()
```

Validate kinematics and entries. 

## Public Attributes Documentation

### variable processList

```
std::vector< TH_Process > processList;
```

Vector of all processes in this catalog. 

### variable particleProperties

```
std::map< std::string, TH_ParticleProperty > particleProperties;
```

Map from particles involved in the processes of this catalog, to their properties. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000