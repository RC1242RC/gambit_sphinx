---
title: 'namespace Gambit::ColliderBit::EventConversion'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| template <typename ParticleP \> <br>int | **[get_unified_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-pid)**(ParticleP p) |
| template <typename ParticleP \> <br>bool | **[get_unified_isFinal](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-isfinal)**(ParticleP p) |
| template <typename ParticleP \> <br>double | **[get_unified_eta](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-eta)**(ParticleP p) |
| template <typename ParticleP \> <br>HEPUtils::P4 | **[get_unified_momentum](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-momentum)**(ParticleP p) |
| template <typename ParticleP \> <br>FJNS::PseudoJet | **[get_unified_pseudojet](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-pseudojet)**(ParticleP p) |
| template <typename ParticleP ,typename EventT \> <br>bool | **[get_unified_fromHadron](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-fromhadron)**(ParticleP & , const EventT & pevt, int i) |
| template <typename ParticleP \> <br>int | **[get_unified_mother1](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother1)**(ParticleP & p) |
| template <typename ParticleP \> <br>int | **[get_unified_mother2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother2)**(ParticleP & p) |
| template <typename ParticleP ,typename EventT \> <br>int | **[get_unified_mother1_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother1-pid)**(ParticleP & p, EventT & pevt) |
| template <typename ParticleP ,typename EventT \> <br>int | **[get_unified_mother2_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother2-pid)**(ParticleP & p, EventT & pevt) |
| template <typename ParticleP ,typename EventT \> <br>void | **[get_unified_child_ids](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-child-ids)**(ParticleP & p, EventT & pevt, std::vector< int > & unified_child_id_results) |
| bool | **[HEPMC3_isParton](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-hepmc3-isparton)**(int pid) |
| int | **[get_unified_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-pid)**(const HepMC3::GenParticlePtr & gp) |
| bool | **[get_unified_isFinal](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-isfinal)**(const HepMC3::GenParticlePtr & gp) |
| HEPUtils::P4 | **[get_unified_momentum](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-momentum)**(const HepMC3::GenParticlePtr & gp) |
| FJNS::PseudoJet | **[get_unified_pseudojet](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-pseudojet)**(const HepMC3::GenParticlePtr & gp) |
| double | **[get_unified_eta](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-eta)**(const HepMC3::GenParticlePtr & gp) |
| bool | **[get_unified_fromHadron](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-fromhadron)**(const HepMC3::GenParticlePtr & gp, const std::vector< HepMC3::GenParticlePtr > & pevt, int i) |
| int | **[get_unified_mother1](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother1)**(const HepMC3::GenParticlePtr & ) |
| int | **[get_unified_mother2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother2)**(const HepMC3::GenParticlePtr & ) |
| int | **[get_unified_mother1_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother1-pid)**(const HepMC3::GenParticlePtr & , const std::vector< HepMC3::GenParticlePtr > & )<br>Shouldn't ever need to call a HepMC3 version of this, but for safety here's one that just returns 0.  |
| int | **[get_unified_mother2_pid](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-mother2-pid)**(const HepMC3::GenParticlePtr & , const std::vector< HepMC3::GenParticlePtr > & )<br>Shouldn't ever need to call a HepMC3 version of this, but for safety here's one that just returns 0.  |
| void | **[get_unified_child_ids](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1eventconversion/#function-get-unified-child-ids)**(const HepMC3::GenParticlePtr & gp, const std::vector< HepMC3::GenParticlePtr > & , std::vector< int > & unified_child_id_results) |


## Functions Documentation

### function get_unified_pid

```
template <typename ParticleP >
int get_unified_pid(
    ParticleP p
)
```


### function get_unified_isFinal

```
template <typename ParticleP >
bool get_unified_isFinal(
    ParticleP p
)
```


### function get_unified_eta

```
template <typename ParticleP >
inline double get_unified_eta(
    ParticleP p
)
```


### function get_unified_momentum

```
template <typename ParticleP >
inline HEPUtils::P4 get_unified_momentum(
    ParticleP p
)
```


### function get_unified_pseudojet

```
template <typename ParticleP >
inline FJNS::PseudoJet get_unified_pseudojet(
    ParticleP p
)
```


### function get_unified_fromHadron

```
template <typename ParticleP ,
typename EventT >
inline bool get_unified_fromHadron(
    ParticleP & ,
    const EventT & pevt,
    int i
)
```


### function get_unified_mother1

```
template <typename ParticleP >
inline int get_unified_mother1(
    ParticleP & p
)
```


### function get_unified_mother2

```
template <typename ParticleP >
inline int get_unified_mother2(
    ParticleP & p
)
```


### function get_unified_mother1_pid

```
template <typename ParticleP ,
typename EventT >
inline int get_unified_mother1_pid(
    ParticleP & p,
    EventT & pevt
)
```


### function get_unified_mother2_pid

```
template <typename ParticleP ,
typename EventT >
inline int get_unified_mother2_pid(
    ParticleP & p,
    EventT & pevt
)
```


### function get_unified_child_ids

```
template <typename ParticleP ,
typename EventT >
void get_unified_child_ids(
    ParticleP & p,
    EventT & pevt,
    std::vector< int > & unified_child_id_results
)
```


### function HEPMC3_isParton

```
inline bool HEPMC3_isParton(
    int pid
)
```


The MCUtils isParton function only checks for quarks/gluons, whereas the Pythia function used in [Gambit](/documentation/code/namespaces/namespacegambit/) includes diquarks too, so we manually define this function using the isParton and isDiquark options in MCUtils. 


### function get_unified_pid

```
inline int get_unified_pid(
    const HepMC3::GenParticlePtr & gp
)
```


### function get_unified_isFinal

```
inline bool get_unified_isFinal(
    const HepMC3::GenParticlePtr & gp
)
```


### function get_unified_momentum

```
inline HEPUtils::P4 get_unified_momentum(
    const HepMC3::GenParticlePtr & gp
)
```


### function get_unified_pseudojet

```
inline FJNS::PseudoJet get_unified_pseudojet(
    const HepMC3::GenParticlePtr & gp
)
```


### function get_unified_eta

```
inline double get_unified_eta(
    const HepMC3::GenParticlePtr & gp
)
```


### function get_unified_fromHadron

```
inline bool get_unified_fromHadron(
    const HepMC3::GenParticlePtr & gp,
    const std::vector< HepMC3::GenParticlePtr > & pevt,
    int i
)
```


### function get_unified_mother1

```
inline int get_unified_mother1(
    const HepMC3::GenParticlePtr & 
)
```


### function get_unified_mother2

```
inline int get_unified_mother2(
    const HepMC3::GenParticlePtr & 
)
```


### function get_unified_mother1_pid

```
inline int get_unified_mother1_pid(
    const HepMC3::GenParticlePtr & ,
    const std::vector< HepMC3::GenParticlePtr > & 
)
```

Shouldn't ever need to call a HepMC3 version of this, but for safety here's one that just returns 0. 

### function get_unified_mother2_pid

```
inline int get_unified_mother2_pid(
    const HepMC3::GenParticlePtr & ,
    const std::vector< HepMC3::GenParticlePtr > & 
)
```

Shouldn't ever need to call a HepMC3 version of this, but for safety here's one that just returns 0. 

### function get_unified_child_ids

```
inline void get_unified_child_ids(
    const HepMC3::GenParticlePtr & gp,
    const std::vector< HepMC3::GenParticlePtr > & ,
    std::vector< int > & unified_child_id_results
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000