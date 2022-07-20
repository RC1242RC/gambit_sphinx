---
title: 'namespace Gambit::PostProcessor'

description: "[No description available]"

---






[No description available]

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::PostProcessor::PPDriver](/documentation/code/classes/classgambit_1_1postprocessor_1_1ppdriver/)** <br>Driver class to handle the actual postprocessing tasks.  |
| struct | **[Gambit::PostProcessor::PPOptions](/documentation/code/classes/structgambit_1_1postprocessor_1_1ppoptions/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| ChunkSet | **[get_done_points](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-get-done-points)**(Gambit::Printers::BaseBaseReader & filebase)<br>Read through resume data files and reconstruct which chunks of points have already been processed.  |
| bool | **[point_done](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-point-done)**(const ChunkSet done_chunks, size_t index)<br>Helper functions for performing resume related tasks.  |
| [Chunk](/documentation/code/classes/structchunk/) | **[get_effective_chunk](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-get-effective-chunk)**(const std::size_t total_length, const unsigned int rank, const unsigned int numtasks) |
| [Chunk](/documentation/code/classes/structchunk/) | **[get_my_chunk](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-get-my-chunk)**(const std::size_t dset_length, const ChunkSet & done_chunks, const int rank, const int numtasks)<br>Compute start/end indices for a given rank process, given previous "done_chunk" data.  |
| ChunkSet | **[get_done_points](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-get-done-points)**(const std::string & filebase)<br>Read through resume data files and reconstruct which chunks of points have already been processed.  |
| ChunkSet | **[merge_chunks](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-merge-chunks)**(const ChunkSet & input_chunks)<br>Simplify a ChunkSet by merging chunks which overlap.  |
| void | **[record_done_points](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#function-record-done-points)**(const ChunkSet & done_chunks, const [Chunk](/documentation/code/classes/structchunk/) & mydone, const std::string & filebase, unsigned int rank, unsigned int size) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| const [Chunk](/documentation/code/classes/structchunk/) | **[stopchunk](/documentation/code/namespaces/namespacegambit_1_1postprocessor/#variable-stopchunk)**  |


## Functions Documentation

### function get_done_points

```
ChunkSet get_done_points(
    Gambit::Printers::BaseBaseReader & filebase
)
```

Read through resume data files and reconstruct which chunks of points have already been processed. 

Read through any pre-existing output and reconstruct which chunks of points have already been processed. 


### function point_done

```
bool point_done(
    const ChunkSet done_chunks,
    size_t index
)
```

Helper functions for performing resume related tasks. 

Answer queries as to whether a given dataset index has been postprocessed in a previous run or not 


### function get_effective_chunk

```
Chunk get_effective_chunk(
    const std::size_t total_length,
    const unsigned int rank,
    const unsigned int numtasks
)
```


Get 'effective' start and end positions for a processing batch i.e. simply divides up an integer into the most even parts possible over a given number of processes 


### function get_my_chunk

```
Chunk get_my_chunk(
    const std::size_t dset_length,
    const ChunkSet & done_chunks,
    const int rank,
    const int numtasks
)
```

Compute start/end indices for a given rank process, given previous "done_chunk" data. 

First compute number of points left to process

First compute number of points left to process


### function get_done_points

```
ChunkSet get_done_points(
    const std::string & filebase
)
```

Read through resume data files and reconstruct which chunks of points have already been processed. 

### function merge_chunks

```
ChunkSet merge_chunks(
    const ChunkSet & input_chunks
)
```

Simplify a ChunkSet by merging chunks which overlap. 

Simplify a ChunkSet by merging chunks which overlap (or are directly adjacent). 


### function record_done_points

```
void record_done_points(
    const ChunkSet & done_chunks,
    const Chunk & mydone,
    const std::string & filebase,
    unsigned int rank,
    unsigned int size
)
```


Write resume data files These specify which chunks of points have been processed during this run 



## Attributes Documentation

### variable stopchunk

```
const Chunk stopchunk = Chunk(0,0);
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000