---
title: 'file DarkBit/ProcessCatalog.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::DarkBit](/documentation/code/namespaces/namespacegambit_1_1darkbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| struct | **[Gambit::DarkBit::TH_Resonance](/documentation/code/classes/structgambit_1_1darkbit_1_1th__resonance/)** <br>A single resonance of a given width at a given energy (both in GeV)  |
| struct | **[Gambit::DarkBit::TH_resonances_thresholds](/documentation/code/classes/structgambit_1_1darkbit_1_1th__resonances__thresholds/)** <br>Location of resonances and thresholds in energy (GeV)  |
| struct | **[Gambit::DarkBit::TH_ParticleProperty](/documentation/code/classes/structgambit_1_1darkbit_1_1th__particleproperty/)** <br>A container for the mass and spin of a particle.  |
| struct | **[Gambit::DarkBit::TH_Channel](/documentation/code/classes/structgambit_1_1darkbit_1_1th__channel/)**  |
| struct | **[Gambit::DarkBit::TH_Process](/documentation/code/classes/structgambit_1_1darkbit_1_1th__process/)**  |
| struct | **[Gambit::DarkBit::TH_ProcessCatalog](/documentation/code/classes/structgambit_1_1darkbit_1_1th__processcatalog/)** <br>A container holding all annihilation and decay initial states relevant for DarkBit.  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Sanjay Bloor ([sanjay.bloor12@imperial.ac.uk](mailto:sanjay.bloor12@imperial.ac.uk)) 


**Date**: 

  * 2012 Mar, 2014 Jan
  * 2015 Mar
  * 2018 Aug


Type definition header for DarkBit Process Catalog constituents types.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#ifndef __ProcessCatalog_hpp__
#define __ProcessCatalog_hpp__

#include <vector>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/daFunk.hpp"

namespace Gambit
{

  namespace DarkBit
  {
    struct TH_Resonance
    {
      TH_Resonance() : energy(0.), width (0.) {}

      TH_Resonance(double energy, double width) : energy(energy), width(width) {}

      double energy;
      double width;
    };

    struct TH_resonances_thresholds
    {
      TH_resonances_thresholds() {}

      TH_resonances_thresholds(const TH_resonances_thresholds& copy) :
        resonances(copy.resonances), threshold_energy(copy.threshold_energy) {}

      TH_resonances_thresholds& operator= (const TH_resonances_thresholds&) = default;

      TH_resonances_thresholds(const std::vector<TH_Resonance>& resonances,
          const std::vector<double> & thresholds) :
        resonances(resonances), threshold_energy(thresholds) {}

      std::vector<TH_Resonance> resonances;
      std::vector<double> threshold_energy;
    };

    struct TH_ParticleProperty
    {
        TH_ParticleProperty(double mass, unsigned int spin2);

        double mass;

        unsigned int spin2;
    };

    struct TH_Channel
    {
        // Functions

        TH_Channel(std::vector<str> finalStateIDs, daFunk::Funk genRate);

        void printChannel() const;

        bool channelContains(str p) const;

        bool isChannel(str, str, str = "", str = "") const;

        bool isChannel(std::vector<str>) const;


        // Variables

        std::vector<std::string> finalStateIDs;

        unsigned int nFinalStates;

        daFunk::Funk genRate = daFunk::zero("dummyArgument");
    };

    struct TH_Process
    {
        // Functions

        TH_Process(const str & particle1ID);

        TH_Process(const str & particle1ID, const str & particle2ID);

        bool isProcess(const str &, const str & = std::string()) const;

        const TH_Channel* find(std::vector<str>) const;


        // Variables

        bool isAnnihilation;

        str particle1ID;
        str particle2ID;

        bool isSelfConj;

        std::vector<TH_Channel> channelList;

        TH_resonances_thresholds resonances_thresholds;

        daFunk::Funk genRateMisc;
    };

    struct TH_ProcessCatalog
    {
        // Functions

        TH_Process getProcess(str, str = "") const;

        const TH_Process* find(str, str = "") const;

        TH_ParticleProperty getParticleProperty(str) const;

        bool hasParticleProperty(str) const;

        void validate();


        // Variables

        std::vector<TH_Process> processList;

        std::map<std::string, TH_ParticleProperty> particleProperties;
    };
  }
}

#endif // #defined __ProcessCatalog_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
