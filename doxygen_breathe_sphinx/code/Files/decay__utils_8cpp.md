---
title: 'file src/decay_utils.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DecayBit](/documentation/code/namespaces/namespacegambit_1_1decaybit/)**  |

## Detailed Description


**Author**: Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 

**Date**: 2015 May

Function definitions for DecayBit decay utilities.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/DecayBit/decay_utils.hpp"

namespace Gambit
{

  namespace DecayBit
  {

    DecayTable::Entry CP_conjugate(const DecayTable::Entry& in)
    {
      DecayTable::Entry out;

      // Copy all the basic info to the new DecayTable entry
      out.width_in_GeV = in.width_in_GeV;
      out.positive_error = in.positive_error;
      out.negative_error = out.negative_error;
      out.calculator = in.calculator;
      out.calculator_version = in.calculator_version;
      out.warnings = in.warnings;
      out.errors = in.errors;

      // Iterate over all the open decay channels
      for (auto i : in.channels)
      {
        // Retrieve the decay final states
        std::multiset< std::pair<int,int> > particles = i.first;
        // Determine the antiparticles of the final states
        std::multiset< std::pair<int,int> > antiparticles;
        for (auto particle : particles)
        {
          std::pair<int,int> antiparticle(-1*(particle.first), particle.second);
          // If the antiparticle exists as a distinct particle, add it.
          if (Models::ParticleDB().has_particle(antiparticle)) antiparticles.insert(antiparticle);
          //Otherwise, use the original particle
          else antiparticles.insert(particle);
        }
        // Set the corresponding branching fraction and error in the conjugate entry
        out.channels[antiparticles] = i.second;
      }

      // Hand over the CP-conjugate entry
      return out;
    }

  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
