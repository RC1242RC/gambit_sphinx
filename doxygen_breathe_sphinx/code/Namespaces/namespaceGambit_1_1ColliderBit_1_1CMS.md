---
title: 'namespace Gambit::ColliderBit::CMS'
description: 'CMS-specific efficiency and smearing functions for super fast detector simulation. '

---






CMS-specific efficiency and smearing functions for super fast detector simulation. 

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[applyElectronTrackingEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applyelectrontrackingeff)**(std::vector< const HEPUtils::Particle * > & electrons)<br>Randomly filter the supplied particle list by parameterised electron tracking efficiency.  |
| void | **[applyElectronEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applyelectroneff)**(std::vector< const HEPUtils::Particle * > & electrons) |
| void | **[applyMuonTrackEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applymuontrackeff)**(std::vector< const HEPUtils::Particle * > & muons) |
| void | **[applyMuonEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applymuoneff)**(std::vector< const HEPUtils::Particle * > & muons)<br>Randomly filter the supplied particle list by parameterised muon efficiency.  |
| void | **[applyTauEfficiency](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applytauefficiency)**(std::vector< const HEPUtils::Particle * > & taus)<br>Randomly filter the supplied particle list by parameterised tau efficiency.  |
| void | **[smearElectronEnergy](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-smearelectronenergy)**(std::vector< HEPUtils::Particle * > & electrons)<br>Randomly smear the supplied electrons' momenta by parameterised resolutions.  |
| void | **[smearMuonMomentum](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-smearmuonmomentum)**(std::vector< HEPUtils::Particle * > & muons)<br>Randomly smear the supplied muons' momenta by parameterised resolutions.  |
| void | **[smearJets](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-smearjets)**(std::vector< HEPUtils::Jet * > & jets)<br>Randomly smear the supplied jets' momenta by parameterised resolutions.  |
| void | **[smearTaus](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-smeartaus)**(std::vector< HEPUtils::Particle * > & taus)<br>Randomly smear the supplied hadronic taus' momenta by parameterised resolutions.  |
| void | **[applyCSVv2MediumBtagEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtageff)**(std::vector< const HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2MediumBtagEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtageff)**(std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2LooseBtagEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtageff)**(std::vector< const HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2LooseBtagEff](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtageff)**(std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applybtagmisid)**(double mis_id_prob, std::vector< const HEPUtils::Jet * > & jets, std::vector< const HEPUtils::Jet * > & bjets)<br>Apply user-specified b-tag misidentification rate (flat)  |
| void | **[applyBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applybtagmisid)**(double mis_id_prob, std::vector< HEPUtils::Jet * > & jets, std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2LooseBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtagmisid)**(std::vector< const HEPUtils::Jet * > & jets, std::vector< const HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2LooseBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtagmisid)**(std::vector< HEPUtils::Jet * > & jets, std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2LooseBtagEffAndMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtageffandmisid)**(std::vector< const HEPUtils::Jet * > & jets, std::vector< const HEPUtils::Jet * > & bjets)<br>Apply both b-tag efficiency and misidentification rate for CSVv2 loose WP.  |
| void | **[applyCSVv2LooseBtagEffAndMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2loosebtageffandmisid)**(std::vector< HEPUtils::Jet * > & jets, std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2MediumBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtagmisid)**(std::vector< const HEPUtils::Jet * > & jets, std::vector< const HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2MediumBtagMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtagmisid)**(std::vector< HEPUtils::Jet * > & jets, std::vector< HEPUtils::Jet * > & bjets) |
| void | **[applyCSVv2MediumBtagEffAndMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtageffandmisid)**(std::vector< const HEPUtils::Jet * > & jets, std::vector< const HEPUtils::Jet * > & bjets)<br>Apply both b-tag efficiency and misidentification rate for CSVv2 medium WP.  |
| void | **[applyCSVv2MediumBtagEffAndMisId](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/#function-applycsvv2mediumbtageffandmisid)**(std::vector< HEPUtils::Jet * > & jets, std::vector< HEPUtils::Jet * > & bjets) |


## Functions Documentation

### function applyElectronTrackingEff

```
inline void applyElectronTrackingEff(
    std::vector< const HEPUtils::Particle * > & electrons
)
```

Randomly filter the supplied particle list by parameterised electron tracking efficiency. 

### function applyElectronEff

```
inline void applyElectronEff(
    std::vector< const HEPUtils::Particle * > & electrons
)
```


**Note**: 

  * Should be applied after the electron energy smearing 
  * Eff values currently identical to those in [ATLAS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/) (AB, 2016-01-24) 


Randomly filter the supplied particle list by parameterised electron efficiency 


### function applyMuonTrackEff

```
inline void applyMuonTrackEff(
    std::vector< const HEPUtils::Particle * > & muons
)
```


**Note**: Eff values currently identical to those in [ATLAS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/) (AB, 2016-01-24) 

Randomly filter the supplied particle list by parameterised muon tracking efficiency 


### function applyMuonEff

```
inline void applyMuonEff(
    std::vector< const HEPUtils::Particle * > & muons
)
```

Randomly filter the supplied particle list by parameterised muon efficiency. 

### function applyTauEfficiency

```
inline void applyTauEfficiency(
    std::vector< const HEPUtils::Particle * > & taus
)
```

Randomly filter the supplied particle list by parameterised tau efficiency. 

**Note**: No delete, because this should only ever be applied to copies of the Event Particle* vectors in [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) routines 

### function smearElectronEnergy

```
inline void smearElectronEnergy(
    std::vector< HEPUtils::Particle * > & electrons
)
```

Randomly smear the supplied electrons' momenta by parameterised resolutions. 

Function that mimics the DELPHES electron energy resolution. We need to smear E, then recalculate pT, then reset the 4-vector. 


### function smearMuonMomentum

```
inline void smearMuonMomentum(
    std::vector< HEPUtils::Particle * > & muons
)
```

Randomly smear the supplied muons' momenta by parameterised resolutions. 

Function that mimics the DELPHES muon momentum resolution. We need to smear pT, then recalculate E, then reset the 4-vector. 


### function smearJets

```
inline void smearJets(
    std::vector< HEPUtils::Jet * > & jets
)
```

Randomly smear the supplied jets' momenta by parameterised resolutions. 

**Todo**: Update cf. Matthias study for [ATLAS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/)

Function that mimics the DELPHES jet momentum resolution. We need to smear pT, then recalculate E, then reset the 4-vector


TodoThis is the [ATLAS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/) number... I can't find values for the [CMS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1cms/) parameterisation, cf. [https://cds.cern.ch/record/1339945/files/JME-10-014-pas.pdf](https://cds.cern.ch/record/1339945/files/JME-10-014-pas.pdf)[https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideJetResolution](https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideJetResolution)[https://github.com/adrager/cmssw/blob/CMSSW_7_2_X/CondFormats/JetMETObjects/test/TestCorrections.C](https://github.com/adrager/cmssw/blob/CMSSW_7_2_X/CondFormats/JetMETObjects/test/TestCorrections.C)


### function smearTaus

```
inline void smearTaus(
    std::vector< HEPUtils::Particle * > & taus
)
```

Randomly smear the supplied hadronic taus' momenta by parameterised resolutions. 

**Todo**: Update cf. Matthias study for [ATLAS](/documentation/code/namespaces/namespacegambit_1_1colliderbit_1_1atlas/)

We need to smear pT, then recalculate E, then reset the 4-vector. Same as for jets, but on a vector of particles. (?)


TodoIs this the best way to smear? Should we preserve the mean jet energy, or pT, or direction? 


### function applyCSVv2MediumBtagEff

```
inline void applyCSVv2MediumBtagEff(
    std::vector< const HEPUtils::Jet * > & bjets
)
```


**Note**: Numbers digitized from [https://twiki.cern.ch/twiki/pub/CMSPublic/SUSMoriond2017ObjectsEfficiency/btag_eff_CSVv2_DeepCSV.pdf](https://twiki.cern.ch/twiki/pub/CMSPublic/SUSMoriond2017ObjectsEfficiency/btag_eff_CSVv2_DeepCSV.pdf)

Apply efficiency function to CSVv2 medium WP b-tagged jets 


### function applyCSVv2MediumBtagEff

```
inline void applyCSVv2MediumBtagEff(
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyCSVv2LooseBtagEff

```
inline void applyCSVv2LooseBtagEff(
    std::vector< const HEPUtils::Jet * > & bjets
)
```


**Note**: Numbers digitized from [https://twiki.cern.ch/twiki/pub/CMSPublic/SUSMoriond2017ObjectsEfficiency/btag_eff_CSVv2_DeepCSV.pdf](https://twiki.cern.ch/twiki/pub/CMSPublic/SUSMoriond2017ObjectsEfficiency/btag_eff_CSVv2_DeepCSV.pdf)

Apply efficiency function to CSVv2 loose WP b-tagged jets 


### function applyCSVv2LooseBtagEff

```
inline void applyCSVv2LooseBtagEff(
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyBtagMisId

```
inline void applyBtagMisId(
    double mis_id_prob,
    std::vector< const HEPUtils::Jet * > & jets,
    std::vector< const HEPUtils::Jet * > & bjets
)
```

Apply user-specified b-tag misidentification rate (flat) 

### function applyBtagMisId

```
inline void applyBtagMisId(
    double mis_id_prob,
    std::vector< HEPUtils::Jet * > & jets,
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyCSVv2LooseBtagMisId

```
inline void applyCSVv2LooseBtagMisId(
    std::vector< const HEPUtils::Jet * > & jets,
    std::vector< const HEPUtils::Jet * > & bjets
)
```


**Note**: Numbers from Table 2 in [https://arxiv.org/pdf/1712.07158.pdf](https://arxiv.org/pdf/1712.07158.pdf)

Apply b-tag misidentification rate for CSVv2 loose WP 


### function applyCSVv2LooseBtagMisId

```
inline void applyCSVv2LooseBtagMisId(
    std::vector< HEPUtils::Jet * > & jets,
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyCSVv2LooseBtagEffAndMisId

```
inline void applyCSVv2LooseBtagEffAndMisId(
    std::vector< const HEPUtils::Jet * > & jets,
    std::vector< const HEPUtils::Jet * > & bjets
)
```

Apply both b-tag efficiency and misidentification rate for CSVv2 loose WP. 

### function applyCSVv2LooseBtagEffAndMisId

```
inline void applyCSVv2LooseBtagEffAndMisId(
    std::vector< HEPUtils::Jet * > & jets,
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyCSVv2MediumBtagMisId

```
inline void applyCSVv2MediumBtagMisId(
    std::vector< const HEPUtils::Jet * > & jets,
    std::vector< const HEPUtils::Jet * > & bjets
)
```


**Note**: Numbers from Table 2 in [https://arxiv.org/pdf/1712.07158.pdf](https://arxiv.org/pdf/1712.07158.pdf)

Apply b-tag misidentification rate for CSVv2 medium WP 


### function applyCSVv2MediumBtagMisId

```
inline void applyCSVv2MediumBtagMisId(
    std::vector< HEPUtils::Jet * > & jets,
    std::vector< HEPUtils::Jet * > & bjets
)
```


### function applyCSVv2MediumBtagEffAndMisId

```
inline void applyCSVv2MediumBtagEffAndMisId(
    std::vector< const HEPUtils::Jet * > & jets,
    std::vector< const HEPUtils::Jet * > & bjets
)
```

Apply both b-tag efficiency and misidentification rate for CSVv2 medium WP. 

### function applyCSVv2MediumBtagEffAndMisId

```
inline void applyCSVv2MediumBtagEffAndMisId(
    std::vector< HEPUtils::Jet * > & jets,
    std::vector< HEPUtils::Jet * > & bjets
)
```






-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000