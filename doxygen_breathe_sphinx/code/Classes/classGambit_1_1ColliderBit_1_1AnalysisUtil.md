---
title: 'class Gambit::ColliderBit::AnalysisUtil'

description: "[No description available]"

---








[No description available]

## Public Functions

|                | Name           |
| -------------- | -------------- |
| bool | **[sortParticlesByPt](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-sortparticlesbypt)**(const HEPUtils::Particle * particle1, const HEPUtils::Particle * particle2) |
| bool | **[sortJetsByPt](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-sortjetsbypt)**(const HEPUtils::Jet * jet1, const HEPUtils::Jet * jet2) |
| std::vector< const HEPUtils::Jet * > | **[filterPtEta](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-filterpteta)**(std::vector< const HEPUtils::Jet * > jets, double pT, double absEta) |
| std::vector< const HEPUtils::Particle * > | **[filterPtEta](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-filterpteta)**(std::vector< const HEPUtils::Particle * > particles, double pT, double absEta) |
| std::vector< const HEPUtils::Jet * > | **[jetLeptonOverlapRemoval](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-jetleptonoverlapremoval)**(std::vector< const HEPUtils::Jet * > jets, std::vector< const HEPUtils::Particle * > leptons, double dR) |
| std::vector< const HEPUtils::Particle * > | **[leptonJetOverlapRemoval](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-leptonjetoverlapremoval)**(std::vector< const HEPUtils::Particle * > leptons, std::vector< const HEPUtils::Jet * > jets, double dR) |
| bool | **[isSingleParticleTriggered](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-issingleparticletriggered)**(std::vector< const HEPUtils::Particle * > particles, double pTrequirement) |
| bool | **[isMultipleParticleTriggered](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-ismultipleparticletriggered)**(std::vector< const HEPUtils::Particle * > particles, std::vector< double > pTrequirements) |
| std::vector< const HEPUtils::Particle * > | **[getSortedLeptons](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-getsortedleptons)**(const std::vector< std::vector< const HEPUtils::Particle * >> allLeptons) |
| double | **[dot2D](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-dot2d)**(HEPUtils::P4 mom1, HEPUtils::P4 mom2) |
| std::vector< const HEPUtils::Jet * > | **[filterMaxEta](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-filtermaxeta)**(const std::vector< const HEPUtils::Jet * > & jets, double maxAbsEta) |
| bool | **[muonFilter7TeV](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-muonfilter7tev)**(const std::vector< const HEPUtils::Particle * > & muons) |
| bool | **[oppositeSign](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysisutil/#function-oppositesign)**(const HEPUtils::Particle * a, const HEPUtils::Particle * b) |

## Public Functions Documentation

### function sortParticlesByPt

```
static inline bool sortParticlesByPt(
    const HEPUtils::Particle * particle1,
    const HEPUtils::Particle * particle2
)
```


### function sortJetsByPt

```
static inline bool sortJetsByPt(
    const HEPUtils::Jet * jet1,
    const HEPUtils::Jet * jet2
)
```


### function filterPtEta

```
static inline std::vector< const HEPUtils::Jet * > filterPtEta(
    std::vector< const HEPUtils::Jet * > jets,
    double pT,
    double absEta
)
```


### function filterPtEta

```
static inline std::vector< const HEPUtils::Particle * > filterPtEta(
    std::vector< const HEPUtils::Particle * > particles,
    double pT,
    double absEta
)
```


### function jetLeptonOverlapRemoval

```
static inline std::vector< const HEPUtils::Jet * > jetLeptonOverlapRemoval(
    std::vector< const HEPUtils::Jet * > jets,
    std::vector< const HEPUtils::Particle * > leptons,
    double dR
)
```


### function leptonJetOverlapRemoval

```
static inline std::vector< const HEPUtils::Particle * > leptonJetOverlapRemoval(
    std::vector< const HEPUtils::Particle * > leptons,
    std::vector< const HEPUtils::Jet * > jets,
    double dR
)
```


### function isSingleParticleTriggered

```
static inline bool isSingleParticleTriggered(
    std::vector< const HEPUtils::Particle * > particles,
    double pTrequirement
)
```


### function isMultipleParticleTriggered

```
static inline bool isMultipleParticleTriggered(
    std::vector< const HEPUtils::Particle * > particles,
    std::vector< double > pTrequirements
)
```


### function getSortedLeptons

```
static inline std::vector< const HEPUtils::Particle * > getSortedLeptons(
    const std::vector< std::vector< const HEPUtils::Particle * >> allLeptons
)
```


### function dot2D

```
static inline double dot2D(
    HEPUtils::P4 mom1,
    HEPUtils::P4 mom2
)
```


### function filterMaxEta

```
static inline std::vector< const HEPUtils::Jet * > filterMaxEta(
    const std::vector< const HEPUtils::Jet * > & jets,
    double maxAbsEta
)
```


### function muonFilter7TeV

```
static inline bool muonFilter7TeV(
    const std::vector< const HEPUtils::Particle * > & muons
)
```


### function oppositeSign

```
static inline bool oppositeSign(
    const HEPUtils::Particle * a,
    const HEPUtils::Particle * b
)
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000