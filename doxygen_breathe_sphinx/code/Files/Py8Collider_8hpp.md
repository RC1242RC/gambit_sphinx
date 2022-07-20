---
title: 'file Pythia8/Py8Collider.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::ColliderBit::Py8Collider](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider/)** <br>A specializable, recyclable class interfacing ColliderBit and Pythia.  |
| class | **[Gambit::ColliderBit::Py8Collider::InitializationError](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider_1_1initializationerror/)** <br>An exception for when Pythia fails to initialize.  |
| class | **[Gambit::ColliderBit::Py8Collider::EventGenerationError](/documentation/code/classes/classgambit_1_1colliderbit_1_1py8collider_1_1eventgenerationerror/)** <br>An exception for when Pythia fails to generate events.  |

## Detailed Description


**Author**: 

  * Abram Krislock 
  * Pat Scott 


**Date**: 

  * July 2016
  * Jan 2019


The Py8Collider class.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#pragma once

#include <ostream>
#include <stdexcept>
#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/colliders/BaseCollider.hpp"
#include "gambit/ColliderBit/colliders/Pythia8/SetHooksClass.hpp"
#include "SLHAea/slhaea.h"

namespace Gambit
{

  namespace ColliderBit
  {

    template <typename PythiaT, typename EventT, typename hepmc_writerT>
    class Py8Collider : public BaseCollider
    {

      protected:

        PythiaT* _pythiaInstance;
        PythiaT* _pythiaBase;
        std::vector<std::string> _pythiaSettings;


      public:

        const PythiaT* pythia() const { return _pythiaInstance; }

        // Setting up the CombineMatchingInput UserHook
        bool SetupMatchingUserHook()
        {
            SetHooks<PythiaT, EventT> Hook;
            Hook.SetupHook(_pythiaInstance);
            return true;
        }


        class InitializationError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Pythia could not initialize.";
          }
        };
        class EventGenerationError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Pythia could not make the next event.";
          }
        };




        Py8Collider() : _pythiaInstance(nullptr), _pythiaBase(nullptr) {}

        ~Py8Collider()
        {
          _pythiaSettings.clear();
          if (_pythiaInstance) delete _pythiaInstance;
          if (_pythiaBase) delete _pythiaBase;
        }

        void clear()
        {
          _pythiaSettings.clear();
          if (_pythiaInstance)
          {
            delete _pythiaInstance;
            _pythiaInstance=nullptr;
          }
        }




        void addToSettings(const std::string& command) { _pythiaSettings.push_back(command); }
        void banner(const std::string pythiaDocPath) { PythiaT myPythia(pythiaDocPath); }
        void init() { std::cout<<"No settings given to Pythia!\n\n"; throw InitializationError(); }

        void init(const std::vector<std::string>& externalSettings)
        {
          std::string docPath = externalSettings.back();
          std::vector<std::string> settings(externalSettings);
          settings.pop_back();
          init(docPath, settings);
        }

        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings,
                  const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout)
        {
          // Settings acquired externally (ex from a gambit yaml file)
          for(const str& command : externalSettings) _pythiaSettings.push_back(command);

          if (!_pythiaBase)
          {
            _pythiaBase = new PythiaT(pythiaDocPath, false);
          }

          // Pass all settings to _pythiaBase
          for(const str& command : _pythiaSettings) _pythiaBase->readString(command);

          // Create new _pythiaInstance from _pythiaBase
          if (_pythiaInstance) delete _pythiaInstance;
          _pythiaInstance = new PythiaT(_pythiaBase->particleData, _pythiaBase->settings);

          // Send along the SLHAea::Coll pointer, if it exists
          if (slhaea) _pythiaInstance->slhaInterface.slha.setSLHAea(slhaea);

          // Read command again to get SM decay table change from yaml file
          for(const str& command : _pythiaSettings)
          {
            _pythiaInstance->readString(command);
          }

          if (!_pythiaInstance->init(os)) throw InitializationError();
        }

        void init_user_model(const std::string pythiaDocPath,
                             const std::vector<std::string>& externalSettings,
                             const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout)
        {
          // Settings acquired externally (for example, from a gambit yaml file)
          for(const str& command : externalSettings) _pythiaSettings.push_back(command);

          if (!_pythiaBase)
          {
            _pythiaBase = new PythiaT(pythiaDocPath, false);
          }

          // Pass all settings to _pythiaBase
          for(const str& command : _pythiaSettings) _pythiaBase->readString(command);

          // Create new _pythiaInstance from _pythiaBase
          if (_pythiaInstance) delete _pythiaInstance;
          _pythiaInstance = new PythiaT(_pythiaBase->particleData, _pythiaBase->settings);

          // Send along the SLHAea::Coll pointer, if it exists
          if (slhaea) _pythiaInstance->slhaInterface.slha.setSLHAea(slhaea);

          if (!_pythiaInstance->init(os)) throw InitializationError();
        }

        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings, std::ostream& os)
        {
          init(pythiaDocPath, externalSettings, nullptr, os);
        }

        void init_user_model(const std::string pythiaDocPath,
                             const std::vector<std::string>& externalSettings, std::ostream& os)
        {
          init_user_model(pythiaDocPath, externalSettings, nullptr, os);
        }




        void nextEvent(EventT& event) const
        {
          // Try to make and populate an event
          bool accepted_event = _pythiaInstance->next();
          event = _pythiaInstance->event;
          if (!accepted_event)
          {
            throw EventGenerationError();
          }
        }

        double xsec_fb() const { return _pythiaInstance->info.sigmaGen() * 1e12; }
        double xsec_fb(int process_code) const { return _pythiaInstance->info.sigmaGen(process_code) * 1e12; }
        double xsec_pb() const { return _pythiaInstance->info.sigmaGen() * 1e9; }
        double xsec_pb(int process_code) const { return _pythiaInstance->info.sigmaGen(process_code) * 1e9; }

        double xsecErr_fb() const { return _pythiaInstance->info.sigmaErr() * 1e12; }
        double xsecErr_fb(int process_code) const { return _pythiaInstance->info.sigmaErr(process_code) * 1e12; }
        double xsecErr_pb() const { return _pythiaInstance->info.sigmaErr() * 1e9; }
        double xsecErr_pb(int process_code) const { return _pythiaInstance->info.sigmaErr(process_code) * 1e9; }

        int process_code() const { return _pythiaInstance->info.code(); }

        std::vector<int> all_active_process_codes() const { return _pythiaInstance->info.codesHard(); }


     };

  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
