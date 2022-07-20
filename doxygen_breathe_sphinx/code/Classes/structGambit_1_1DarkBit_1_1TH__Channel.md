---
title: 'struct Gambit::DarkBit::TH_Channel'

description: "[No description available]"

---








[No description available] [More...](#detailed-description)


`#include <ProcessCatalog.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#function-th-channel)**(std::vector< str > finalStateIDs, daFunk::Funk genRate)<br>Constructor.  |
| void | **[printChannel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#function-printchannel)**() const<br>Print information about this channel.  |
| bool | **[channelContains](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#function-channelcontains)**(str p) const<br>Indicate whether or not the final states of this channel contain a specific particle.  |
| bool | **[isChannel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#function-ischannel)**(str p0, str p1, str p2 ="", str p3 ="") const<br>Indicate whether or not this channel is the one defined by some specific final states. Particle name version.  |
| bool | **[isChannel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#function-ischannel)**(std::vector< str > particles) const<br>Indicate whether or not this channel is the one defined by some specific final states. Particle vector version.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| std::vector< std::string > | **[finalStateIDs](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#variable-finalstateids)** <br>Final state identifiers.  |
| unsigned int | **[nFinalStates](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#variable-nfinalstates)** <br>Number of final state particles in this channel.  |
| daFunk::Funk | **[genRate](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/#variable-genrate)** <br>Energy dependence of final state particles. Includes v_rel ("v") as last argument in case of annihilation.  |

## Detailed Description

```
struct Gambit::DarkBit::TH_Channel;
```


All data on a single annihilation or decay channel, e.g. chi --> gamma gamma, chi chi --> mu+ mu- 

## Public Functions Documentation

### function TH_Channel

```
TH_Channel(
    std::vector< str > finalStateIDs,
    daFunk::Funk genRate
)
```

Constructor. 

### function printChannel

```
void printChannel() const
```

Print information about this channel. 

### function channelContains

```
bool channelContains(
    str p
) const
```

Indicate whether or not the final states of this channel contain a specific particle. 

### function isChannel

```
bool isChannel(
    str p0,
    str p1,
    str p2 ="",
    str p3 =""
) const
```

Indicate whether or not this channel is the one defined by some specific final states. Particle name version. 

### function isChannel

```
bool isChannel(
    std::vector< str > particles
) const
```

Indicate whether or not this channel is the one defined by some specific final states. Particle vector version. 

## Public Attributes Documentation

### variable finalStateIDs

```
std::vector< std::string > finalStateIDs;
```

Final state identifiers. 

### variable nFinalStates

```
unsigned int nFinalStates;
```

Number of final state particles in this channel. 

### variable genRate

```
daFunk::Funk genRate = daFunk::zero("dummyArgument");
```

Energy dependence of final state particles. Includes v_rel ("v") as last argument in case of annihilation. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000