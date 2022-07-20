---
title: 'class Gambit::DarkBit::DMEFT'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[DMEFT](/documentation/code/classes/classgambit_1_1darkbit_1_1dmeft/#function-dmeft)**()<br>Initialize [DMEFT](/documentation/code/classes/classgambit_1_1darkbit_1_1dmeft/) object (branching ratios etc)  |
| | **[~DMEFT](/documentation/code/classes/classgambit_1_1darkbit_1_1dmeft/#function-~dmeft)**() |
| double | **[sv](/documentation/code/classes/classgambit_1_1darkbit_1_1dmeft/#function-sv)**(str channel, DecayTable & tbl, double(*)(str &, std::vector< str > &, std::vector< str > &, double &, const DecayTable &) sigmav, double v_rel) |

## Public Functions Documentation

### function DMEFT

```
inline DMEFT()
```

Initialize [DMEFT](/documentation/code/classes/classgambit_1_1darkbit_1_1dmeft/) object (branching ratios etc) 

### function ~DMEFT

```
inline ~DMEFT()
```


### function sv

```
inline double sv(
    str channel,
    DecayTable & tbl,
    double(*)(str &, std::vector< str > &, std::vector< str > &, double &, const DecayTable &) sigmav,
    double v_rel
)
```


Returns sigma*v for a given channel.


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000