---
title: 'class Gambit::DarkBit::DecayChain::DecayTableEntry'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[DecayTableEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-decaytableentry)**(string pID, double m, bool stable) |
| | **[DecayTableEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-decaytableentry)**() |
| bool | **[randomDecay](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-randomdecay)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) *& decay) const |
| void | **[update](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-update)**() |
| bool | **[isEnabled](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-isenabled)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) const |
| bool | **[isDisabled](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-isdisabled)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) const |
| bool | **[isRegistered](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-isregistered)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) const |
| void | **[addChannel](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-addchannel)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) |
| void | **[addDisabled](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-adddisabled)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) |
| void | **[setInvisibleWidth](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-setinvisiblewidth)**(double width) |
| bool | **[enableDecay](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-enabledecay)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) |
| bool | **[disableDecay](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-disabledecay)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * in) |
| double | **[getEnabledBranching](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-getenabledbranching)**() const |
| void | **[forceTotalWidth](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-forcetotalwidth)**(bool enabled, double width) |
| double | **[getTotalWidth](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-gettotalwidth)**() const |
| bool | **[hasEnabledDecays](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#function-hasenableddecays)**() const |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const double | **[m](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#variable-m)**  |
| bool | **[stable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#variable-stable)**  |
| unordered_map< const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) *, bool > | **[endpointFlags](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#variable-endpointflags)**  |

## Friends

|                | Name           |
| -------------- | -------------- |
| class | **[DecayTable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/#friend-decaytable)**  |

## Public Functions Documentation

### function DecayTableEntry

```
inline DecayTableEntry(
    string pID,
    double m,
    bool stable
)
```


### function DecayTableEntry

```
inline DecayTableEntry()
```


### function randomDecay

```
bool randomDecay(
    const TH_Channel *& decay
) const
```


### function update

```
void update()
```


### function isEnabled

```
bool isEnabled(
    const TH_Channel * in
) const
```


### function isDisabled

```
bool isDisabled(
    const TH_Channel * in
) const
```


### function isRegistered

```
bool isRegistered(
    const TH_Channel * in
) const
```


### function addChannel

```
void addChannel(
    const TH_Channel * in
)
```


### function addDisabled

```
void addDisabled(
    const TH_Channel * in
)
```


### function setInvisibleWidth

```
void setInvisibleWidth(
    double width
)
```


### function enableDecay

```
bool enableDecay(
    const TH_Channel * in
)
```


### function disableDecay

```
bool disableDecay(
    const TH_Channel * in
)
```


### function getEnabledBranching

```
double getEnabledBranching() const
```


### function forceTotalWidth

```
void forceTotalWidth(
    bool enabled,
    double width
)
```


### function getTotalWidth

```
double getTotalWidth() const
```


### function hasEnabledDecays

```
bool hasEnabledDecays() const
```


## Public Attributes Documentation

### variable m

```
const double m;
```


### variable stable

```
bool stable;
```


### variable endpointFlags

```
unordered_map< const TH_Channel *, bool > endpointFlags;
```


## Friends

### friend DecayTable

```
friend class DecayTable;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000