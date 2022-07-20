---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_3b_36invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

Inherited by [Gambit::ColliderBit::Analysis_ATLAS_13TeV_3b_discoverySR_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__discoverysr__36invfb/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| bool | **[sortByPT](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-sortbypt)**(const HEPUtils::Jet * jet1, const HEPUtils::Jet * jet2) |
| | **[Analysis_ATLAS_13TeV_3b_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-analysis-atlas-13tev-3b-36invfb)**() |
| void | **[JetLeptonOverlapRemoval](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-jetleptonoverlapremoval)**(vector< const HEPUtils::Jet * > & jetvec, vector< const HEPUtils::Particle * > & lepvec, double DeltaRMax) |
| void | **[LeptonJetOverlapRemoval](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-leptonjetoverlapremoval)**(vector< const HEPUtils::Particle * > & lepvec, vector< const HEPUtils::Jet * > & jetvec) |
| double | **[mTrans](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-mtrans)**(HEPUtils::P4 pmiss, HEPUtils::P4 jet) |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#variable-detector)**  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__36invfb/#variable--counters)**  |

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

### function sortByPT

```
static inline bool sortByPT(
    const HEPUtils::Jet * jet1,
    const HEPUtils::Jet * jet2
)
```


### function Analysis_ATLAS_13TeV_3b_36invfb

```
inline Analysis_ATLAS_13TeV_3b_36invfb()
```


### function JetLeptonOverlapRemoval

```
inline void JetLeptonOverlapRemoval(
    vector< const HEPUtils::Jet * > & jetvec,
    vector< const HEPUtils::Particle * > & lepvec,
    double DeltaRMax
)
```


### function LeptonJetOverlapRemoval

```
inline void LeptonJetOverlapRemoval(
    vector< const HEPUtils::Particle * > & lepvec,
    vector< const HEPUtils::Jet * > & jetvec
)
```


### function mTrans

```
inline double mTrans(
    HEPUtils::P4 pmiss,
    HEPUtils::P4 jet
)
```


### function run

```
inline virtual void run(
    const HEPUtils::Event * event
)
```


**Reimplements**: [Gambit::ColliderBit::Analysis::run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-run)


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


**Reimplemented by**: [Gambit::ColliderBit::Analysis_ATLAS_13TeV_3b_discoverySR_36invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__3b__discoverysr__36invfb/#function-collect-results)


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


## Protected Attributes Documentation

### variable _counters

```
std::map< string, EventCounter > _counters = {
        
        {"SR-3b-meff1-A", EventCounter("SR-3b-meff1-A")},
        {"SR-3b-meff2-A", EventCounter("SR-3b-meff2-A")},
        {"SR-3b-meff3-A", EventCounter("SR-3b-meff3-A")},
        {"SR-4b-meff1-A", EventCounter("SR-4b-meff1-A")},
        {"SR-4b-meff1-B", EventCounter("SR-4b-meff1-B")},
        {"SR-4b-meff2-A", EventCounter("SR-4b-meff2-A")},
        {"SR-4b-meff2-B", EventCounter("SR-4b-meff2-B")},
        
        {"SR-4b-meff1-A-disc", EventCounter("SR-4b-meff1-A-disc")},
      };
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000