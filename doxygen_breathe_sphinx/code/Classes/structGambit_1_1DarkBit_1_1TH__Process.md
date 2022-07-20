---
title: 'struct Gambit::DarkBit::TH_Process'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <ProcessCatalog.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#function-th-process)**(const str & particle1ID)<br>Constructor for decay process.  |
| | **[TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#function-th-process)**(const str & particle1ID, const str & particle2ID)<br>Constructor for annihilation process.  |
| bool | **[isProcess](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#function-isprocess)**(const str & p1, const str & p2 =std::string()) const<br>Compare initial states.  |
| const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * | **[find](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#function-find)**(std::vector< str > final_states) const<br>Check for given channel. Return a pointer to it if found, NULL if not.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| str | **[particle1ID](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-particle1id)**  |
| str | **[particle2ID](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-particle2id)**  |
| bool | **[isAnnihilation](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-isannihilation)** <br>Annihilation or decay?  |
| bool | **[isSelfConj](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-isselfconj)** <br>Does the process contain self-conjugate DM? (accounting for correct factors of 1/2 in annihilation spectra)  |
| std::vector< [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) > | **[channelList](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-channellist)** <br>List of channels.  |
| [TH_resonances_thresholds](/documentation/code/classes/structgambit_1_1darkbit_1_1th__resonances__thresholds/) | **[resonances_thresholds](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-resonances-thresholds)** <br>List of resonances and thresholds.  |
| daFunk::Funk | **[genRateMisc](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/#variable-genratemisc)** <br>Additional decay rate or sigmav (in addition to above channels)  |

## Detailed Description

```
struct Gambit::DarkBit::TH_Process;
```


A container for a single process. Contains all channels for decay of a single particle, or for annihilation of a specific pair of particles. That is, [TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/) groups channels together according to initial states, e.g. chi --> everything, chi chi --> everything. 

## Public Functions Documentation

### function TH_Process

```
TH_Process(
    const str & particle1ID
)
```

Constructor for decay process. 

### function TH_Process

```
TH_Process(
    const str & particle1ID,
    const str & particle2ID
)
```

Constructor for annihilation process. 

### function isProcess

```
bool isProcess(
    const str & p1,
    const str & p2 =std::string()
) const
```

Compare initial states. 

### function find

```
const TH_Channel * find(
    std::vector< str > final_states
) const
```

Check for given channel. Return a pointer to it if found, NULL if not. 

## Public Attributes Documentation

### variable particle1ID

```
str particle1ID;
```


Decaying particle or particle pair 


### variable particle2ID

```
str particle2ID;
```


### variable isAnnihilation

```
bool isAnnihilation;
```

Annihilation or decay? 

### variable isSelfConj

```
bool isSelfConj;
```

Does the process contain self-conjugate DM? (accounting for correct factors of 1/2 in annihilation spectra) 

### variable channelList

```
std::vector< TH_Channel > channelList;
```

List of channels. 

### variable resonances_thresholds

```
TH_resonances_thresholds resonances_thresholds;
```

List of resonances and thresholds. 

### variable genRateMisc

```
daFunk::Funk genRateMisc;
```

Additional decay rate or sigmav (in addition to above channels) 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000