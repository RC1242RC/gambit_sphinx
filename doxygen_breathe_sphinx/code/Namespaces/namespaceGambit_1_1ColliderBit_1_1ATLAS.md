---
title: 'namespace Gambit::ColliderBit::ATLAS'
description: 'ATLAS-specific efficiency and smearing functions for super fast detector simulation. '

---






ATLAS-specific efficiency and smearing functions for super fast detector simulation. 

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[applyElectronEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applyelectroneff)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyMuonEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymuoneff)**(std::vector< const HEPUtils::Particle * > & muons)<br>Randomly filter the supplied particle list by parameterised muon efficiency.  |
| void | **[applyMuonEffR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymuoneffr2)**(std::vector< const HEPUtils::Particle * > & muons)<br>Randomly filter the supplied particle list by parameterised muon efficiency.  |
| void | **[applyTauEfficiencyR1](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applytauefficiencyr1)**(std::vector< const HEPUtils::Particle * > & taus) |
| void | **[applyTauEfficiencyR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applytauefficiencyr2)**(std::vector< const HEPUtils::Particle * > & taus) |
| void | **[applyPhotonEfficiencyR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applyphotonefficiencyr2)**(std::vector< const HEPUtils::Particle * > & photons) |
| void | **[smearElectronEnergy](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-smearelectronenergy)**(std::vector< HEPUtils::Particle * > & electrons)<br>Randomly smear the supplied electrons' momenta by parameterised resolutions.  |
| void | **[smearMuonMomentum](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-smearmuonmomentum)**(std::vector< HEPUtils::Particle * > & muons)<br>Randomly smear the supplied muons' momenta by parameterised resolutions.  |
| void | **[smearJets](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-smearjets)**(std::vector< HEPUtils::Jet * > & jets)<br>Randomly smear the supplied jets' momenta by parameterised resolutions.  |
| void | **[smearMET](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-smearmet)**(HEPUtils::P4 & pmiss, double set)<br>Randomly smear the MET vector by parameterised resolutions.  |
| void | **[smearTaus](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-smeartaus)**(std::vector< HEPUtils::Particle * > & taus)<br>Randomly smear the supplied taus' momenta by parameterised resolutions.  |
| void | **[applyLooseIDElectronSelectionR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applylooseidelectronselectionr2)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyLooseIDElectronSelectionR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applylooseidelectronselectionr2)**(std::vector< HEPUtils::Particle * > & electrons)<br>Alias to allow non-const particle vectors.  |
| void | **[applyMediumIDElectronSelectionR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymediumidelectronselectionr2)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyMediumIDElectronSelectionR2](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymediumidelectronselectionr2)**(std::vector< HEPUtils::Particle * > & electrons)<br>Alias to allow non-const particle vectors.  |
| void | **[applyMediumIDElectronSelection](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymediumidelectronselection)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyMediumIDElectronSelection](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applymediumidelectronselection)**(std::vector< HEPUtils::Particle * > & electrons)<br>Alias to allow non-const particle vectors.  |
| void | **[applyTightIDElectronSelection](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applytightidelectronselection)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyTightIDElectronSelection](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applytightidelectronselection)**(std::vector< HEPUtils::Particle * > & electrons)<br>Alias to allow non-const particle vectors.  |
| void | **[applyElectronIDEfficiency2019](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applyelectronidefficiency2019)**(std::vector< const HEPUtils::Particle * > & electrons, str operating_point) |
| void | **[applyElectronIsolationEfficiency2019](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/#function-applyelectronisolationefficiency2019)**(std::vector< const HEPUtils::Particle * > & electrons, str operating_point) |


## Functions Documentation

### function applyElectronEff

```
inline void applyElectronEff(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: Should be applied after the electron energy smearing 

Randomly filter the supplied particle list by parameterised electron efficiency 


### function applyMuonEff

```
inline void applyMuonEff(
    std::vector< const HEPUtils::Particle * > & muons
)
```

Randomly filter the supplied particle list by parameterised muon efficiency. 

### function applyMuonEffR2

```
inline void applyMuonEffR2(
    std::vector< const HEPUtils::Particle * > & muons
)
```

Randomly filter the supplied particle list by parameterised muon efficiency. 

### function applyTauEfficiencyR1

```
inline void applyTauEfficiencyR1(
    std::vector< const HEPUtils::Particle * > & taus
)
```


**Note**: From Delphes 3.1.2 

**Todo**: Use [https://cds.cern.ch/record/1233743/files/ATL-PHYS-PUB-2010-001.pdf](https://cds.cern.ch/record/1233743/files/ATL-PHYS-PUB-2010-001.pdf)&ndash; it is more accurate and has pT-dependence 

Randomly filter the supplied particle list by parameterised Run 1 tau efficiency 


### function applyTauEfficiencyR2

```
inline void applyTauEfficiencyR2(
    std::vector< const HEPUtils::Particle * > & taus
)
```


**Note**: 

  * From Delphes 3.3.2 & ATL-PHYS-PUB-2015-045, 60% for 1-prong, 70% for multi-prong: this is _wrong_!! 
  * No delete, because this should only ever be applied to copies of the Event Particle* vectors in [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) routines 


Randomly filter the supplied particle list by parameterised Run 2 tau efficiency 


### function applyPhotonEfficiencyR2

```
inline void applyPhotonEfficiencyR2(
    std::vector< const HEPUtils::Particle * > & photons
)
```


### function smearElectronEnergy

```
inline void smearElectronEnergy(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Randomly smear the supplied electrons' momenta by parameterised resolutions. 

### function smearMuonMomentum

```
inline void smearMuonMomentum(
    std::vector< HEPUtils::Particle * > & muons
)
```

Randomly smear the supplied muons' momenta by parameterised resolutions. 

### function smearJets

```
inline void smearJets(
    std::vector< HEPUtils::Jet * > & jets
)
```

Randomly smear the supplied jets' momenta by parameterised resolutions. 

TodoIs this the best way to smear? Should we preserve the mean jet energy, or pT, or direction? 


### function smearMET

```
inline void smearMET(
    HEPUtils::P4 & pmiss,
    double set
)
```

Randomly smear the MET vector by parameterised resolutions. 

### function smearTaus

```
inline void smearTaus(
    std::vector< HEPUtils::Particle * > & taus
)
```

Randomly smear the supplied taus' momenta by parameterised resolutions. 

TodoIs this the best way to smear? Should we preserve the mean jet energy, or pT, or direction? 


### function applyLooseIDElectronSelectionR2

```
inline void applyLooseIDElectronSelectionR2(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: Numbers digitised from Fig 3 of 13 TeV note (ATL-PHYS-PUB-2015-041) 

**Todo**: What about faking by jets or non-electrons? 

Efficiency function for Loose ID electrons 


### function applyLooseIDElectronSelectionR2

```
inline void applyLooseIDElectronSelectionR2(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Alias to allow non-const particle vectors. 

### function applyMediumIDElectronSelectionR2

```
inline void applyMediumIDElectronSelectionR2(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: Numbers digitised from Fig 3 of 13 TeV note (ATL-PHYS-PUB-2015-041) 

Efficiency function for Loose ID electrons 


### function applyMediumIDElectronSelectionR2

```
inline void applyMediumIDElectronSelectionR2(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Alias to allow non-const particle vectors. 

### function applyMediumIDElectronSelection

```
inline void applyMediumIDElectronSelection(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: Numbers digitised from 8 TeV note (ATLAS-CONF-2014-032) 

Efficiency function for Medium ID electrons 


No delete is necessary, because this should only ever be applied to a copy of the Event Particle* vectors 

TodoThis is an exact duplication of the below filtering code &ndash; split into a single util fn (in unnamed namespace?) when binned fns are static 


### function applyMediumIDElectronSelection

```
inline void applyMediumIDElectronSelection(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Alias to allow non-const particle vectors. 

### function applyTightIDElectronSelection

```
inline void applyTightIDElectronSelection(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: Numbers digitised from 8 TeV note (ATLAS-CONF-2014-032) 

Efficiency function for Tight ID electrons 


No delete is necessary, because this should only ever be applied to a copy of the Event Particle* vectors 

TodoThis is an exact duplication of the above filtering code &ndash; split into a single util fn (in unnamed namespace?) when binned fns are static 


### function applyTightIDElectronSelection

```
inline void applyTightIDElectronSelection(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Alias to allow non-const particle vectors. 

### function applyElectronIDEfficiency2019

```
inline void applyElectronIDEfficiency2019(
    std::vector< const HEPUtils::Particle * > & electrons,
    str operating_point
)
```


**Note**: These efficiencies are 1D efficiencies so only pT is used 

Electron 2019 ID efficiency functions from [https://arxiv.org/pdf/1902.04655.pdf](https://arxiv.org/pdf/1902.04655.pdf)


### function applyElectronIsolationEfficiency2019

```
inline void applyElectronIsolationEfficiency2019(
    std::vector< const HEPUtils::Particle * > & electrons,
    str operating_point
)
```


**Note**: These efficiencies are 1D efficiencies so only pT is used 

Electron 2019 Isolation efficiency functions from [https://arxiv.org/pdf/1902.04655.pdf](https://arxiv.org/pdf/1902.04655.pdf)






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000