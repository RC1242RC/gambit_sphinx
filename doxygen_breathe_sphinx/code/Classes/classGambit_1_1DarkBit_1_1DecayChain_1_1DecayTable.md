---
title: 'class Gambit::DarkBit::DecayChain::DecayTable'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[DecayTable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-decaytable)**(const [TH_ProcessCatalog](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/) & cat, const [SimYieldTable](/documentation/code/classes/classgambit_1_1darkbit_1_1simyieldtable/) & tab, set< string > disabledList) |
| | **[DecayTable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-decaytable)**() |
| bool | **[hasEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-hasentry)**(string index) const |
| void | **[addEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-addentry)**(string pID, double m, bool stable) |
| void | **[addEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-addentry)**(string pID, [DecayTableEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/) entry) |
| bool | **[randomDecay](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-randomdecay)**(string pID, const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) *& decay) const |
| const [DecayTableEntry](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytableentry/) & | **[operator[]](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-operator[])**(string i) const |
| void | **[printTable](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-printtable)**() const |
| double | **[getWidth](/documentation/code/classes/classgambit_1_1darkbit_1_1decaychain_1_1decaytable/#function-getwidth)**(const [TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/) * ch) |

## Public Functions Documentation

### function DecayTable

```
DecayTable(
    const TH_ProcessCatalog & cat,
    const SimYieldTable & tab,
    set< string > disabledList
)
```


### function DecayTable

```
inline DecayTable()
```


### function hasEntry

```
bool hasEntry(
    string index
) const
```


### function addEntry

```
void addEntry(
    string pID,
    double m,
    bool stable
)
```


### function addEntry

```
void addEntry(
    string pID,
    DecayTableEntry entry
)
```


### function randomDecay

```
bool randomDecay(
    string pID,
    const TH_Channel *& decay
) const
```


### function operator[]

```
const DecayTableEntry & operator[](
    string i
) const
```


### function printTable

```
void printTable() const
```


### function getWidth

```
static double getWidth(
    const TH_Channel * ch
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000