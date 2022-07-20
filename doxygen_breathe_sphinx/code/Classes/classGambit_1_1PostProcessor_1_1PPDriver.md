---
title: 'class Gambit::PostProcessor::PPDriver'
description: 'Driver class to handle the actual postprocessing tasks. '

---








Driver class to handle the actual postprocessing tasks. 


`#include <postprocessor.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-ppdriver)**()<br>[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/) member function definitions.  |
| | **[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-ppdriver)**(Printers::BaseBaseReader * const r, Printers::BaseBasePrinter * const p, [Scanner::like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) const l, const [PPOptions](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/) & o)<br>Real constructor.  |
| int | **[run_main_loop](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-run-main-loop)**(const ChunkSet & done_chunks)<br>The main run loop.  |
| bool | **[get_ModelParameters](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-get-modelparameters)**(std::unordered_map< std::string, double > & outputMap) |
| int | **[run_main_loop](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-run-main-loop)**(const [Chunk](/documentation/code/classes/structchunk/) & mychunks)<br>The main run loop.  |
| void | **[check_settings](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-check-settings)**()<br>Check postprocessor settings for consistency and general validity.  |
| bool | **[check_for_redistribution_request](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-check-for-redistribution-request)**() |
| void | **[send_redistribution_request](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-send-redistribution-request)**() |
| void | **[clear_redistribution_requests](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-clear-redistribution-requests)**() |
| | **[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-ppdriver)**() |
| | **[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-ppdriver)**(Printers::BaseBaseReader * const r, Printers::BaseBasePrinter * const p, [Scanner::like_ptr](/documentation/code/classes/classgambit_1_1scanner_1_1like__ptr/) const l, const [PPOptions](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/) & o) |
| void | **[check_settings](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-check-settings)**() |
| bool | **[get_ModelParameters](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-get-modelparameters)**(std::unordered_map< std::string, double > & outputMap) |
| [Chunk](/documentation/code/classes/structchunk/) | **[get_new_chunk](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-get-new-chunk)**()<br>Compute start/end indices for a given rank process, given previous "done_chunk" data.  |
| void | **[set_done_chunks](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-set-done-chunks)**(const ChunkSet & done_chunks) |
| unsigned long long | **[next_point_index](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-next-point-index)**()<br>Return index of next point to be distributed for processing (mainly to track progress)  |
| unsigned long long | **[get_total_length](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#function-get-total-length)**()<br>Return total length of input dataset (mainly to track progress)  |

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| const int | **[REDIST_REQ](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/#variable-redist-req)**  |

## Public Functions Documentation

### function PPDriver

```
PPDriver()
```

[PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/) member function definitions. 

Default constructor 


### function PPDriver

```
PPDriver(
    Printers::BaseBaseReader * const r,
    Printers::BaseBasePrinter * const p,
    Scanner::like_ptr const l,
    const PPOptions & o
)
```

Real constructor. 

### function run_main_loop

```
int run_main_loop(
    const ChunkSet & done_chunks
)
```

The main run loop. 

Retrieve the old parameter values from previous output


### function get_ModelParameters

```
bool get_ModelParameters(
    std::unordered_map< std::string, double > & outputMap
)
```


Debugging; show what was actually retrieved from the output file

Debugging; show what was actually retrieved from the output file


### function run_main_loop

```
int run_main_loop(
    const Chunk & mychunks
)
```

The main run loop. 

Retrieve the old parameter values from previous output


### function check_settings

```
void check_settings()
```

Check postprocessor settings for consistency and general validity. 

Check if any of the output names selected in the renaming scheme are already claimed by functor output etc. Also check if the requested input label actually exists in the input dataset And check if the selected output name clashes with another input name that isn't selected for renaming

Check if any of the output names selected in the renaming scheme are already claimed by functor output etc. Also check if the requested input label actually exists in the input dataset And check if the selected output name clashes with another input name that isn't selected for renaming


### function check_for_redistribution_request

```
bool check_for_redistribution_request()
```


### function send_redistribution_request

```
void send_redistribution_request()
```


### function clear_redistribution_requests

```
void clear_redistribution_requests()
```


### function PPDriver

```
PPDriver()
```


Default constructor 


### function PPDriver

```
PPDriver(
    Printers::BaseBaseReader * const r,
    Printers::BaseBasePrinter * const p,
    Scanner::like_ptr const l,
    const PPOptions & o
)
```


### function check_settings

```
void check_settings()
```


Check if any of the output names selected in the renaming scheme are already claimed by functor output etc. Also check if the requested input label actually exists in the input dataset And check if the selected output name clashes with another input name that isn't selected for renaming

Check if any of the output names selected in the renaming scheme are already claimed by functor output etc. Also check if the requested input label actually exists in the input dataset And check if the selected output name clashes with another input name that isn't selected for renaming


### function get_ModelParameters

```
bool get_ModelParameters(
    std::unordered_map< std::string, double > & outputMap
)
```


Debugging; show what was actually retrieved from the output file

Debugging; show what was actually retrieved from the output file


### function get_new_chunk

```
Chunk get_new_chunk()
```

Compute start/end indices for a given rank process, given previous "done_chunk" data. 

### function set_done_chunks

```
void set_done_chunks(
    const ChunkSet & done_chunks
)
```


### function next_point_index

```
unsigned long long next_point_index()
```

Return index of next point to be distributed for processing (mainly to track progress) 

### function get_total_length

```
unsigned long long get_total_length()
```

Return total length of input dataset (mainly to track progress) 

## Public Attributes Documentation

### variable REDIST_REQ

```
static const int REDIST_REQ = 0;
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000