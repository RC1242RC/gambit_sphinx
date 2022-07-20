---
title: 'struct Gambit::ColliderBit::MCLoopInfo'
description: 'Container for event loop status data and settings. '

---








Container for event loop status data and settings. 


`#include <MCLoopInfo.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| void | **[set_current_collider](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-set-current-collider)**(str & col)<br>Set the current collider.  |
| const str & | **[current_collider](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-collider)**() const<br>Get the current collider.  |
| const int & | **[current_maxFailedEvents](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-maxfailedevents)**() const<br>Get maximum allowable number of failed events before MC loop is terminated for the current collider.  |
| int & | **[current_maxFailedEvents](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-maxfailedevents)**()<br>Get/set maximum allowable number of failed events before MC loop is terminated for the current collider.  |
| const bool & | **[current_invalidate_failed_points](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-invalidate-failed-points)**() const<br>Get invalidate_failed_points bool for the current collider.  |
| bool & | **[current_invalidate_failed_points](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-invalidate-failed-points)**()<br>Get/set invalidate_failed_points for the current collider.  |
| const int & | **[current_event_count](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-event-count)**() const<br>Get the number of events generated for the current collider.  |
| int & | **[current_event_count](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-event-count)**()<br>Get/set the number of events generated for the current collider.  |
| const [convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/) & | **[current_convergence_options](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-convergence-options)**() const<br>Get the set of convergence options for the current collider.  |
| [convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/) & | **[current_convergence_options](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-convergence-options)**()<br>Get/set the set of convergence options for the current collider.  |
| const std::vector< str > & | **[current_analyses](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-analyses)**() const<br>Get the set of analyses for the current collider.  |
| std::vector< str > & | **[current_analyses](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-analyses)**()<br>Get/set the set of analyses for the current collider.  |
| const std::vector< str > & | **[current_analyses_for](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-analyses-for)**(const str & detname) const<br>Get the set of analyses for the current collider and a given detector.  |
| std::vector< str > & | **[current_analyses_for](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-analyses-for)**(const str & detname)<br>Get/set the set of analyses for the current collider and a given detector.  |
| bool | **[current_analyses_exist_for](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-current-analyses-exist-for)**(const str & detname) const<br>Query whether any analyses exist for a given detector for the current collider.  |
| void | **[report_exceeded_maxFailedEvents](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-report-exceeded-maxfailedevents)**() const<br>Set exceeded_maxFailedEvents = true and decrement event counter by 1.  |
| void | **[report_end_of_event_file](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-report-end-of-event-file)**() const<br>Set end_of_event_file = true and decrement event counter by 1.  |
| void | **[reset_flags](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#function-reset-flags)**()<br>Reset flags.  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| bool | **[event_gen_BYPASS](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-event-gen-bypass)**  |
| bool | **[event_generation_began](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-event-generation-began)** <br>Event generation has started.  |
| bool | **[exceeded_maxFailedEvents](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-exceeded-maxfailedevents)** <br>Maximum allowed number of failed events has been reached.  |
| bool | **[end_of_event_file](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-end-of-event-file)** <br>Maximum allowed number of failed events has been reached and MC loop terminated.  |
| std::vector< str > | **[collider_names](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-collider-names)** <br>The names of all colliders.  |
| std::map< str, int > | **[maxFailedEvents](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-maxfailedevents)** <br>Maximum allowable number of failed events before MC loop is terminated for each collider.  |
| std::map< str, bool > | **[invalidate_failed_points](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-invalidate-failed-points)** <br>Invalidate points where number of failed events > maxFailedEvents? One bool for each collider.  |
| std::map< str, int > | **[event_count](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-event-count)** <br>Number of events generated for each collider.  |
| std::map< str, [convergence_settings](/documentation/code/classes/structgambit_1_1colliderbit_1_1convergence__settings/) > | **[convergence_options](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-convergence-options)** <br>Convergence options for each collider.  |
| std::map< str, std::vector< str > > | **[analyses](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-analyses)** <br>[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) list for each collider.  |
| std::map< str, std::map< str, std::vector< str > > > | **[detector_analyses](/documentation/code/classes/structgambit_1_1colliderbit_1_1mcloopinfo/#variable-detector-analyses)** <br>[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) list for each detector of each collider.  |

## Public Functions Documentation

### function set_current_collider

```
void set_current_collider(
    str & col
)
```

Set the current collider. 

### function current_collider

```
const str & current_collider() const
```

Get the current collider. 

### function current_maxFailedEvents

```
const int & current_maxFailedEvents() const
```

Get maximum allowable number of failed events before MC loop is terminated for the current collider. 

### function current_maxFailedEvents

```
int & current_maxFailedEvents()
```

Get/set maximum allowable number of failed events before MC loop is terminated for the current collider. 

### function current_invalidate_failed_points

```
const bool & current_invalidate_failed_points() const
```

Get invalidate_failed_points bool for the current collider. 

### function current_invalidate_failed_points

```
bool & current_invalidate_failed_points()
```

Get/set invalidate_failed_points for the current collider. 

### function current_event_count

```
const int & current_event_count() const
```

Get the number of events generated for the current collider. 

### function current_event_count

```
int & current_event_count()
```

Get/set the number of events generated for the current collider. 

### function current_convergence_options

```
const convergence_settings & current_convergence_options() const
```

Get the set of convergence options for the current collider. 

### function current_convergence_options

```
convergence_settings & current_convergence_options()
```

Get/set the set of convergence options for the current collider. 

### function current_analyses

```
const std::vector< str > & current_analyses() const
```

Get the set of analyses for the current collider. 

### function current_analyses

```
std::vector< str > & current_analyses()
```

Get/set the set of analyses for the current collider. 

### function current_analyses_for

```
const std::vector< str > & current_analyses_for(
    const str & detname
) const
```

Get the set of analyses for the current collider and a given detector. 

### function current_analyses_for

```
std::vector< str > & current_analyses_for(
    const str & detname
)
```

Get/set the set of analyses for the current collider and a given detector. 

### function current_analyses_exist_for

```
bool current_analyses_exist_for(
    const str & detname
) const
```

Query whether any analyses exist for a given detector for the current collider. 

### function report_exceeded_maxFailedEvents

```
void report_exceeded_maxFailedEvents() const
```

Set exceeded_maxFailedEvents = true and decrement event counter by 1. 

### function report_end_of_event_file

```
void report_end_of_event_file() const
```

Set end_of_event_file = true and decrement event counter by 1. 

### function reset_flags

```
void reset_flags()
```

Reset flags. 

## Public Attributes Documentation

### variable event_gen_BYPASS

```
bool event_gen_BYPASS = false;
```


### variable event_generation_began

```
bool event_generation_began;
```

Event generation has started. 

### variable exceeded_maxFailedEvents

```
bool exceeded_maxFailedEvents;
```

Maximum allowed number of failed events has been reached. 

### variable end_of_event_file

```
bool end_of_event_file;
```

Maximum allowed number of failed events has been reached and MC loop terminated. 

### variable collider_names

```
std::vector< str > collider_names;
```

The names of all colliders. 

### variable maxFailedEvents

```
std::map< str, int > maxFailedEvents;
```

Maximum allowable number of failed events before MC loop is terminated for each collider. 

### variable invalidate_failed_points

```
std::map< str, bool > invalidate_failed_points;
```

Invalidate points where number of failed events > maxFailedEvents? One bool for each collider. 

### variable event_count

```
std::map< str, int > event_count;
```

Number of events generated for each collider. 

### variable convergence_options

```
std::map< str, convergence_settings > convergence_options;
```

Convergence options for each collider. 

### variable analyses

```
std::map< str, std::vector< str > > analyses;
```

[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) list for each collider. 

### variable detector_analyses

```
std::map< str, std::map< str, std::vector< str > > > detector_analyses;
```

[Analysis](/documentation/code/classes/classgambit_1_1colliderbit_1_1analysis/) list for each detector of each collider. 

-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000