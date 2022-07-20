---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_1LEPStop_36invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[ClusteringHistory](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb_1_1clusteringhistory/)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_ATLAS_13TeV_1LEPStop_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-analysis-atlas-13tev-1lepstop-36invfb)**() |
| [ClusteringHistory](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb_1_1clusteringhistory/) & | **[GetHistory](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-gethistory)**(const FJNS::PseudoJet & jet) |
| double | **[optimalRadius](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-optimalradius)**(const double pT, const double m) |
| double | **[minRadius](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-minradius)**(const double pT, const double m) |
| double | **[maxRadius](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-maxradius)**(const double pT, const double m) |
| std::pair< bool, FJNS::PseudoJet > | **[RecursiveRecluster](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-recursiverecluster)**(const FJNS::PseudoJet & candidate, double candRadius, const double mass, size_t step) |
| HEPUtils::P4 | **[reclusteredParticle](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-reclusteredparticle)**(vector< const HEPUtils::Jet * > jets, vector< const HEPUtils::Jet * > bjets, const double mass, const bool useBJets) |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |
| std::vector< FJNS::PseudoJet > | **[SortedByNConstit](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-sortedbynconstit)**(std::vector< FJNS::PseudoJet > jets) |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__1lepstop__36invfb/#variable-detector)**  |

## Additional inherited members

**Public Functions inherited from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)**

|                | Name           |
| -------------- | -------------- |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event & e)<br>Analyze the event (accessed by reference).  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analyze)**(const HEPUtils::Event * e)<br>Analyze the event (accessed by pointer).  |
| void | **[add](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add)**([Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Add the results of another analysis to this one. Argument is not const, because the other needs to be able to gather its results if necessary.  |
| | **[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis)**()<br>Construction.  |
| virtual | **[~Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-~analysis)**()<br>Destruction.  |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-reset)**()<br>Public method to reset this instance for reuse, avoiding the need for "new" or "delete".  |
| double | **[luminosity](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-luminosity)**() const<br>Return the integrated luminosity.  |
| void | **[set_luminosity](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-luminosity)**(double lumi)<br>Set the integrated luminosity.  |
| void | **[set_analysis_name](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-analysis-name)**(str aname)<br>Set the analysis name.  |
| str | **[analysis_name](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-name)**()<br>Get the analysis name.  |
| const [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) & | **[get_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results)**()<br>Get the collection of [SignalRegionData]() for likelihood computation.  |
| const [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) & | **[get_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results)**(str & warning)<br>An overload of [get_results()](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results) with some additional consistency checks.  |
| [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) * | **[get_results_ptr](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr)**()<br>Get a (non-const!) pointer to _results.  |
| [AnalysisData](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysisdata/) * | **[get_results_ptr](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr)**(str & warning)<br>An overload of [get_results_ptr()](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-get-results-ptr) with some additional consistency checks.  |
| void | **[scale](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-scale)**(double xsec_per_event)<br>Scale by xsec per event.  |

**Protected Functions inherited from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)**

|                | Name           |
| -------------- | -------------- |
| void | **[add_result](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add-result)**(const [SignalRegionData](/documentation/code/classes/structgambit_1_1colliderbit_1_1signalregiondata/) & sr)<br>Add the given result to the internal results list.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const Eigen::MatrixXd & srcov)<br>Set the covariance matrix, expressing SR correlations.  |
| void | **[set_covariance](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-set-covariance)**(const std::vector< std::vector< double >> & srcov)<br>A convenience function for setting the SR covariance from a nested vector/initialiser list.  |


## Public Functions Documentation

### function Analysis_ATLAS_13TeV_1LEPStop_36invfb

```
inline Analysis_ATLAS_13TeV_1LEPStop_36invfb()
```


### function GetHistory

```
inline ClusteringHistory & GetHistory(
    const FJNS::PseudoJet & jet
)
```


### function optimalRadius

```
inline double optimalRadius(
    const double pT,
    const double m
)
```


### function minRadius

```
inline double minRadius(
    const double pT,
    const double m
)
```


### function maxRadius

```
inline double maxRadius(
    const double pT,
    const double m
)
```


### function RecursiveRecluster

```
inline std::pair< bool, FJNS::PseudoJet > RecursiveRecluster(
    const FJNS::PseudoJet & candidate,
    double candRadius,
    const double mass,
    size_t step
)
```


### function reclusteredParticle

```
inline HEPUtils::P4 reclusteredParticle(
    vector< const HEPUtils::Jet * > jets,
    vector< const HEPUtils::Jet * > bjets,
    const double mass,
    const bool useBJets
)
```


### function run

```
inline virtual void run(
    const HEPUtils::Event * event
)
```


**Reimplements**: [Gambit::ColliderBit::Analysis::run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-run)


We assume that b jets have previously been 100% tagged


### function combine

```
inline virtual void combine(
    const Analysis * other
)
```

Combine the variables of another copy of this analysis (typically on another thread) into this one. 

**Reimplements**: [Gambit::ColliderBit::Analysis::combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-combine)


### function collect_results

```
inline virtual void collect_results()
```

Gather together the info for likelihood calculation. 

**Reimplements**: [Gambit::ColliderBit::Analysis::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-collect-results)


Register results objects with the results for each SR; obs & bkg numbers from the paper


### function SortedByNConstit

```
static inline std::vector< FJNS::PseudoJet > SortedByNConstit(
    std::vector< FJNS::PseudoJet > jets
)
```


## Protected Functions Documentation

### function analysis_specific_reset

```
inline virtual void analysis_specific_reset()
```

Reset the analysis-specific variables. 

**Reimplements**: [Gambit::ColliderBit::Analysis::analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-analysis-specific-reset)


## Public Attributes Documentation

### variable detector

```
static constexpr const char * detector = "ATLAS";
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000