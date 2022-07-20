---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_36invfb'

description: "[No description available]"

---








[No description available]

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

Inherited by [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_2Lep0Jets_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__2lep0jets__36invfb/), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_2LepPlusJets_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__2lepplusjets__36invfb/), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_3Lep_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__3lep__36invfb/)

## Public Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[ptComparison](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb_1_1ptcomparison/)**  |
| struct | **[ptJetComparison](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb_1_1ptjetcomparison/)**  |

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_ATLAS_13TeV_MultiLEP_36invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-analysis-atlas-13tev-multilep-36invfb)**() |
| virtual void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-run)**(const HEPUtils::Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-collect-results)**()<br>Gather together the info for likelihood calculation.  |
| vector< HEPUtils::P4 > | **[get_W_ISR](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-get-w-isr)**(vector< const HEPUtils::Jet * > jets, HEPUtils::P4 Z, HEPUtils::P4 met) |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#variable-detector)**  |
| struct [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_36invfb::ptComparison](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb_1_1ptcomparison/) | **[comparePt](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#variable-comparept)**  |
| struct [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_36invfb::ptJetComparison](/documentation/code/classes/structgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb_1_1ptjetcomparison/) | **[compareJetPt](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#variable-comparejetpt)**  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__36invfb/#variable--counters)**  |

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

### function Analysis_ATLAS_13TeV_MultiLEP_36invfb

```
inline Analysis_ATLAS_13TeV_MultiLEP_36invfb()
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


**Reimplemented by**: [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_2Lep0Jets_36invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__2lep0jets__36invfb/#function-collect-results), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_2LepPlusJets_36invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__2lepplusjets__36invfb/#function-collect-results), [Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_3Lep_36invfb::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__3lep__36invfb/#function-collect-results)


### function get_W_ISR

```
inline vector< HEPUtils::P4 > get_W_ISR(
    vector< const HEPUtils::Jet * > jets,
    HEPUtils::P4 Z,
    HEPUtils::P4 met
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


### variable comparePt

```
struct Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_36invfb::ptComparison comparePt;
```


### variable compareJetPt

```
struct Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_36invfb::ptJetComparison compareJetPt;
```


## Protected Attributes Documentation

### variable _counters

```
std::map< string, EventCounter > _counters = {
        {"SR2_SF_loose", EventCounter("SR2_SF_loose")},
        {"SR2_SF_tight", EventCounter("SR2_SF_tight")},
        {"SR2_DF_100", EventCounter("SR2_DF_100")},
        {"SR2_DF_150", EventCounter("SR2_DF_150")},
        {"SR2_DF_200", EventCounter("SR2_DF_200")},
        {"SR2_DF_300", EventCounter("SR2_DF_300")},
        {"SR2_int", EventCounter("SR2_int")},
        {"SR2_high", EventCounter("SR2_high")},
        {"SR2_low", EventCounter("SR2_low")},
        {"SR3_slep_a", EventCounter("SR3_slep_a")},
        {"SR3_slep_b", EventCounter("SR3_slep_b")},
        {"SR3_slep_c", EventCounter("SR3_slep_c")},
        {"SR3_slep_d", EventCounter("SR3_slep_d")},
        {"SR3_slep_e", EventCounter("SR3_slep_e")},
        {"SR3_WZ_0Ja", EventCounter("SR3_WZ_0Ja")},
        {"SR3_WZ_0Jb", EventCounter("SR3_WZ_0Jb")},
        {"SR3_WZ_0Jc", EventCounter("SR3_WZ_0Jc")},
        {"SR3_WZ_1Ja", EventCounter("SR3_WZ_1Ja")},
        {"SR3_WZ_1Jb", EventCounter("SR3_WZ_1Jb")},
        {"SR3_WZ_1Jc", EventCounter("SR3_WZ_1Jc")},
      };
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000