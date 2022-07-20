---
title: 'class Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_strong_139invfb'
description: '[ATLAS]() Run 2 search for same-sign leptons and jets, with 139/fb of data. '

---








[ATLAS]() Run 2 search for same-sign leptons and jets, with 139/fb of data.  [More...](#detailed-description)

Inherits from [Gambit::ColliderBit::Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Analysis_ATLAS_13TeV_MultiLEP_strong_139invfb](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#function-analysis-atlas-13tev-multilep-strong-139invfb)**() |
| void | **[run](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#function-run)**(const Event * event) |
| virtual void | **[combine](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#function-combine)**(const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * other)<br>Combine the variables of another copy of this analysis (typically on another thread) into this one.  |
| virtual void | **[collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#function-collect-results)**()<br>Register results objects with the results for each SR; obs & bkg numbers from the paper.  |

## Protected Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[analysis_specific_reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#function-analysis-specific-reset)**()<br>Reset the analysis-specific variables.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| constexpr const char * | **[detector](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#variable-detector)**  |
| std::map< string, [EventCounter](/documentation/code/classes/classgambit_1_1colliderbit_1_1eventcounter/) > | **[_counters](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis__atlas__13tev__multilep__strong__139invfb/#variable--counters)**  |

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


## Detailed Description

```
class Gambit::ColliderBit::Analysis_ATLAS_13TeV_MultiLEP_strong_139invfb;
```

[ATLAS]() Run 2 search for same-sign leptons and jets, with 139/fb of data. 

Based on:

* [https://atlas.web.cern.ch/Atlas/GROUPS/PHYSICS/PAPERS/SUSY-2018-09/](https://atlas.web.cern.ch/Atlas/GROUPS/PHYSICS/PAPERS/SUSY-2018-09/)
* [https://arxiv.org/pdf/1909.08457](https://arxiv.org/pdf/1909.08457)
* [https://www.hepdata.net/record/ins1754675](https://www.hepdata.net/record/ins1754675)
* C++ code example and SLHA benchmark files available on HEPData (link above)
Cross-sections for cutflows taken from [https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SUSYCrossSections#Cross_sections_for_various_subpr](https://twiki.cern.ch/twiki/bin/view/LHCPhysics/SUSYCrossSections#Cross_sections_for_various_subpr)

## Public Functions Documentation

### function Analysis_ATLAS_13TeV_MultiLEP_strong_139invfb

```
inline Analysis_ATLAS_13TeV_MultiLEP_strong_139invfb()
```


### function run

```
inline void run(
    const Event * event
)
```


TodoCompute from hard objects instead? 

TodoUse applyElectronIsolationEfficiency2019 or something similar? 

TodoDrop b-tag if |eta| > 2.5? 


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

Register results objects with the results for each SR; obs & bkg numbers from the paper. 

**Reimplements**: [Gambit::ColliderBit::Analysis::collect_results](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-collect-results)


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


### variable _counters

```
std::map< string, EventCounter > _counters = {
        {"Rpv2L", EventCounter("Rpv2L")},
        {"Rpc2L0b", EventCounter("Rpc2L0b")},
        {"Rpc2L1b", EventCounter("Rpc2L1b")},
        {"Rpc2L2b", EventCounter("Rpc2L2b")},
        {"Rpc3LSS1b", EventCounter("Rpc3LSS1b")},
      };
```


-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000