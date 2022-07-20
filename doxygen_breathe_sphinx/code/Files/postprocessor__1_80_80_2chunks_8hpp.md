---
title: 'file postprocessor_1.0.0/postprocessor_1.0.0/chunks.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Chunk](/documentation/code/classes/structchunk/)** <br>Struct to describe start and end indices for a chunk of data.  |
| struct | **[ChunkHash](/documentation/code/classes/structchunkhash/)**  |
| struct | **[ChunkEqual](/documentation/code/classes/structchunkequal/)**  |
| struct | **[ChunkLess](/documentation/code/classes/structchunkless/)**  |

## Types

|                | Name           |
| -------------- | -------------- |
| typedef std::set< [Chunk](/documentation/code/classes/structchunk/), [ChunkLess](/documentation/code/classes/structchunkless/) > | **[ChunkSet](/documentation/code/files/postprocessor__1_80_80_2chunks_8hpp/#typedef-chunkset)**  |

## Detailed Description


[Chunk](/documentation/code/classes/structchunk/) data objects for postprocessor



------------------

Authors (add name and date if you modify): 

## Types Documentation

### typedef ChunkSet

```
typedef std::set<Chunk,ChunkLess> ChunkSet;
```





## Source code

```
//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//

#ifndef __postprocessor_chunks_hpp__
#define __postprocessor_chunks_hpp__

struct Chunk
{
  std::size_t start; // Index of first point in this chunk
  std::size_t end;   // Index of last point in this chunk
  std::size_t eff_length; // Number of points in the chunk that are not marked to be skipped
  Chunk(std::size_t s, std::size_t e)
   : start(s)
   , end(e)
   , eff_length(0)
  {}
  Chunk()
   : start(0)
   , end(0)
   , eff_length(0)
  {}
  // Function to check if a given dataset index was processed in this chunk
  bool iContain(std::size_t index) const
  {
    return (start<=index) and (index<=end);
  }
  // Function to compute length of this chunk
  std::size_t length() const
  {
    return end - start + 1;
  }
};

// To use Chunk in std::unordered_map/set, need to provide hashing and equality functions
struct ChunkHash{ 
  std::size_t operator()(const Chunk &key) const { 
    return std::hash<std::size_t>()(key.start) ^ std::hash<std::size_t>()(key.end);
  }
};

struct ChunkEqual{
  bool operator()(const Chunk &lhs, const Chunk &rhs) const {
    return (lhs.start == rhs.start) and (lhs.end == rhs.end);
  }
};

struct ChunkLess{
  bool operator() (const Chunk& lhs, const Chunk& rhs) const
  {
    return (lhs.start < rhs.start); // Just sort based on start index alone
  }
};

//typedef std::unordered_set<Chunk,ChunkHash,ChunkEqual> ChunkSet; // Actually I want ordered sets now
typedef std::set<Chunk,ChunkLess> ChunkSet; // Actually I want ordered sets now

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
