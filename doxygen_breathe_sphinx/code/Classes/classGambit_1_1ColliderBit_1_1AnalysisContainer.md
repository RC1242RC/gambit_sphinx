---
title: 'class Gambit::ColliderBit::AnalysisContainer'
description: 'A class for managing collections of [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) instances. '

---








A class for managing collections of [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) instances. 


`#include <AnalysisContainer.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[AnalysisContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-analysiscontainer)**()<br>Constructor.  |
| | **[~AnalysisContainer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-~analysiscontainer)**()<br>Destructor.  |
| void | **[register_thread](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-register-thread)**(str base_key_in)<br>Add container to instances map.  |
| void | **[clear](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-clear)**()<br>Delete and clear the analyses contained within this instance.  |
| void | **[set_current_collider](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-set-current-collider)**(str collider_name)<br>Set name of current collider.  |
| str | **[get_current_collider](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-get-current-collider)**() const<br>Get name of current collider.  |
| bool | **[has_analyses](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-has-analyses)**(str collider_name) const<br>Does this instance contain analyses for the given collider.  |
| bool | **[has_analyses](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-has-analyses)**() const<br>Does this instance contain analyses for the current collider.  |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-init)**(const std::vector< str > & analysis_names, str collider_name)<br>Initialize analyses (by names) for a specified collider.  |
| void | **[init](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-init)**(const std::vector< str > & analysis_names)<br>Initialize analyses (by names) for the current collider.  |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-reset)**(str collider_name, str analysis_name)<br>Reset specific analysis.  |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-reset)**(str collider_name)<br>Reset all analyses for given collider.  |
| void | **[reset](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-reset)**()<br>Reset all analyses for the current collider.  |
| void | **[reset_all](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-reset-all)**()<br>Reset all analyses for all colliders.  |
| const [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * | **[get_analysis_pointer](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-get-analysis-pointer)**(str collider_name, str analysis_name) const<br>Get pointer to specific analysis.  |
| const std::map< str, [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * > & | **[get_collider_analyses_map](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-get-collider-analyses-map)**(str collider_name) const<br>Get analyses map for a specific collider.  |
| const std::map< str, [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * > & | **[get_current_analyses_map](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-get-current-analyses-map)**() const<br>Get analyses map for the current collider.  |
| const std::map< str, std::map< str, [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) * > > & | **[get_full_analyses_map](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-get-full-analyses-map)**() const<br>Get the full analyses map.  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-analyze)**(const HEPUtils::Event & event, str collider_name, str analysis_name) const<br>Pass event through specific analysis.  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-analyze)**(const HEPUtils::Event & event, str collider_name) const<br>Pass event through all analysis for a specific collider.  |
| void | **[analyze](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-analyze)**(const HEPUtils::Event & event) const<br>Pass event through all analysis for the current collider.  |
| void | **[collect_and_add_signal](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-collect-and-add-signal)**(str collider_name, str analysis_name) |
| void | **[collect_and_add_signal](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-collect-and-add-signal)**(str collider_name) |
| void | **[collect_and_add_signal](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-collect-and-add-signal)**() |
| void | **[scale](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-scale)**(str collider_name, str analysis_name, double xsec_per_event)<br>Scale results for specific analysis.  |
| void | **[scale](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-scale)**(str collider_name, double xsec_per_event)<br>Scale results for all analyses for given collider.  |
| void | **[scale](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-scale)**(double xsec_per_event)<br>Scale results for all analyses for the current collider.  |
| void | **[scale_all](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysiscontainer/#function-scale-all)**(double xsec_per_event)<br>Scale results for all analyses across all colliders.  |

## Public Functions Documentation

### function AnalysisContainer

```
AnalysisContainer()
```

Constructor. 

### function ~AnalysisContainer

```
~AnalysisContainer()
```

Destructor. 

### function register_thread

```
void register_thread(
    str base_key_in
)
```

Add container to instances map. 

### function clear

```
void clear()
```

Delete and clear the analyses contained within this instance. 

TodoStoring smart ptrs to [Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) would make this way easier 


### function set_current_collider

```
void set_current_collider(
    str collider_name
)
```

Set name of current collider. 

Set name of the current collider. 


### function get_current_collider

```
str get_current_collider() const
```

Get name of current collider. 

Get the name of the current collider. 


### function has_analyses

```
bool has_analyses(
    str collider_name
) const
```

Does this instance contain analyses for the given collider. 

### function has_analyses

```
bool has_analyses() const
```

Does this instance contain analyses for the current collider. 

### function init

```
void init(
    const std::vector< str > & analysis_names,
    str collider_name
)
```

Initialize analyses (by names) for a specified collider. 

### function init

```
void init(
    const std::vector< str > & analysis_names
)
```

Initialize analyses (by names) for the current collider. 

### function reset

```
void reset(
    str collider_name,
    str analysis_name
)
```

Reset specific analysis. 

### function reset

```
void reset(
    str collider_name
)
```

Reset all analyses for given collider. 

### function reset

```
void reset()
```

Reset all analyses for the current collider. 

### function reset_all

```
void reset_all()
```

Reset all analyses for all colliders. 

### function get_analysis_pointer

```
const Analysis * get_analysis_pointer(
    str collider_name,
    str analysis_name
) const
```

Get pointer to specific analysis. 

### function get_collider_analyses_map

```
const std::map< str, Analysis * > & get_collider_analyses_map(
    str collider_name
) const
```

Get analyses map for a specific collider. 

### function get_current_analyses_map

```
const std::map< str, Analysis * > & get_current_analyses_map() const
```

Get analyses map for the current collider. 

### function get_full_analyses_map

```
const std::map< str, std::map< str, Analysis * > > & get_full_analyses_map() const
```

Get the full analyses map. 

### function analyze

```
void analyze(
    const HEPUtils::Event & event,
    str collider_name,
    str analysis_name
) const
```

Pass event through specific analysis. 

### function analyze

```
void analyze(
    const HEPUtils::Event & event,
    str collider_name
) const
```

Pass event through all analysis for a specific collider. 

Pass event through all analyses for a specific collider. 


### function analyze

```
void analyze(
    const HEPUtils::Event & event
) const
```

Pass event through all analysis for the current collider. 

### function collect_and_add_signal

```
void collect_and_add_signal(
    str collider_name,
    str analysis_name
)
```


Collect signal predictions from other threads and add to this one, for specific analysis

Collect signal predictions from other threads and add to this one, for specific analysis. Note: [Analysis::add](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/#function-add) will not add analyses to themselves. 


### function collect_and_add_signal

```
void collect_and_add_signal(
    str collider_name
)
```


Collect signal predictions from other threads and add to this one, for all analyses for given collider 


### function collect_and_add_signal

```
void collect_and_add_signal()
```


Collect signal predictions from other threads and add to this one, for all analyses for the current collider 


### function scale

```
void scale(
    str collider_name,
    str analysis_name,
    double xsec_per_event
)
```

Scale results for specific analysis. 

### function scale

```
void scale(
    str collider_name,
    double xsec_per_event
)
```

Scale results for all analyses for given collider. 

### function scale

```
void scale(
    double xsec_per_event
)
```

Scale results for all analyses for the current collider. 

### function scale_all

```
void scale_all(
    double xsec_per_event
)
```

Scale results for all analyses across all colliders. 

-------------------------------

Updated on 2022-07-20 at 17:18:43 +0000