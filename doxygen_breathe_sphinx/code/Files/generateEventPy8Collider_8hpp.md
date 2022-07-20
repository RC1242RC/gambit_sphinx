---
title: 'file ColliderBit/generateEventPy8Collider.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[DEBUG_PREFIX](/documentation/code/files/generateeventpy8collider_8hpp/#define-debug-prefix)**  |
|  | **[GET_PYTHIA_EVENT](/documentation/code/files/generateeventpy8collider_8hpp/#define-get-pythia-event)**(NAME) <br>Generate a hard scattering event with a specific Pythia,.  |

## Detailed Description


**Author**: 

  * Abram Krislock ([a.m.b.krislock@fys.uio.no](mailto:a.m.b.krislock@fys.uio.no))
  * Aldo Saavedra
  * Andy Buckley
  * Chris Rogan ([crogan@cern.ch](mailto:crogan@cern.ch)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)) 
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 


**Date**: 

  * 2014 Aug 
  * 2015 May
  * 2015 Jul 
  * 2018 Jan 
  * 2019 Jan 
  * 2019 May
  * 2017 March 
  * 2018 Jan 
  * 2018 May 
  * 2019 Sep
  * 2019 Sep


ColliderBit event loop functions returning collider Monte Carlo events.



------------------

Authors (add name and date if you modify):



------------------




## Macros Documentation

### define DEBUG_PREFIX

```
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  "
```


### define GET_PYTHIA_EVENT

```
#define GET_PYTHIA_EVENT(
    NAME
)
    void NAME(HEPUtils::Event& result)                           \
    {                                                            \
      using namespace Pipes::NAME;                               \
      generateEventPy8Collider(result, *Dep::RunMC,              \
       *Dep::HardScatteringSim, *Dep::EventWeighterFunction,     \
       *Loop::iteration, Loop::wrapup,runOptions);               \
    }
```

Generate a hard scattering event with a specific Pythia,. 

## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/ColliderBit/ColliderBit_eventloop.hpp"
#include "gambit/ColliderBit/colliders/Pythia8/Py8EventConversions.hpp"

// #define COLLIDERBIT_DEBUG
#define DEBUG_PREFIX "DEBUG: OMP thread " << omp_get_thread_num() << ":  "

namespace Gambit
{

  namespace ColliderBit
  {

    #ifndef EXCLUDE_HEPMC
      template<typename PythiaT, typename hepmc_writerT>
      void dropHepMCEventPy8Collider(const PythiaT* Pythia, const safe_ptr<Options>& runOptions)
      {
        // Write event to HepMC file
        static const bool drop_HepMC2_file = runOptions->getValueOrDef<bool>(false, "drop_HepMC2_file");
        static const bool drop_HepMC3_file = runOptions->getValueOrDef<bool>(false, "drop_HepMC3_file");
        if (drop_HepMC2_file or drop_HepMC3_file)
        {
          thread_local hepmc_writerT hepmc_writer;
          thread_local bool first = true;

          if (first)
          {
            str filename = "GAMBIT_collider_events.omp_thread_";
            filename += std::to_string(omp_get_thread_num());
            filename += ".hepmc";
            hepmc_writer.init(filename, drop_HepMC2_file, drop_HepMC3_file);
            first = false;
          }

          if(drop_HepMC2_file)
            hepmc_writer.write_event_HepMC2(const_cast<PythiaT*>(Pythia));
          if(drop_HepMC3_file)
            hepmc_writer.write_event_HepMC3(const_cast<PythiaT*>(Pythia));

        }
      }
    #endif

    template<typename PythiaT, typename EventT, typename hepmc_writerT>
    void generateEventPy8Collider(HEPUtils::Event& event,
                                  const MCLoopInfo& RunMC,
                                  const Py8Collider<PythiaT,EventT,hepmc_writerT>& HardScatteringSim,
                                  const EventWeighterFunctionType& EventWeighterFunction,
                                  const int iteration,
                                  void(*wrapup)(),
                                  const safe_ptr<Options>& runOptions)
    {
      static int nFailedEvents;
      thread_local EventT pythia_event;
      static const double jet_pt_min = runOptions->getValueOrDef<double>(10.0, "jet_pt_min");

      // If the event loop has not been entered yet, reset the counter for the number of failed events
      if (iteration == BASE_INIT)
      {
        // Although BASE_INIT should never be called in parallel, we do this in omp_critical just in case.
        #pragma omp critical (pythia_event_failure)
        {
          nFailedEvents = 0;
        }
        return;
      }

      // If in any other special iteration, do nothing
      if (iteration < BASE_INIT) return;

      // Reset the Pythia and HEPUtils events
      pythia_event.clear();
      event.clear();

      // Attempt (possibly repeatedly) to generate an event
      while(nFailedEvents <= RunMC.current_maxFailedEvents())
      {
        try
        {
          #ifdef COLLIDERBIT_DEBUG
          cerr << DEBUG_PREFIX << "Will now call HardScatteringSim.nextEvent(pythia_event)..." << endl;
          #endif

          HardScatteringSim.nextEvent(pythia_event);
          break;
        }
        catch (typename Py8Collider<PythiaT,EventT,hepmc_writerT>::EventGenerationError& e)
        {
          #ifdef COLLIDERBIT_DEBUG
          cerr << DEBUG_PREFIX << "Py8Collider::EventGenerationError caught in generateEventPy8Collider. Check the ColliderBit log for event details." << endl;
          #endif
          #pragma omp critical (pythia_event_failure)
          {
            // Update global counter
            nFailedEvents += 1;
            // Store Pythia event record in the logs
            std::stringstream ss;
            pythia_event.list(ss, 1);
            logger() << LogTags::debug << "Py8Collider::EventGenerationError error caught in generateEventPy8Collider. Pythia record for event that failed:\n" << ss.str() << EOM;
          }
        }
      }

      // Wrap up event loop if too many events fail.
      if(nFailedEvents > RunMC.current_maxFailedEvents())
      {
        // Tell the MCLoopInfo instance that we have exceeded maxFailedEvents
        RunMC.report_exceeded_maxFailedEvents();
        if(RunMC.current_invalidate_failed_points())
        {
          piped_invalid_point.request("exceeded maxFailedEvents");
        }
        wrapup();
        return;
      }

      #ifndef EXCLUDE_HEPMC
        dropHepMCEventPy8Collider<PythiaT,hepmc_writerT>(HardScatteringSim.pythia(), runOptions);
      #endif


      // Attempt to convert the Pythia event to a HEPUtils event
      try
      {
        if (HardScatteringSim.partonOnly)
          convertPartonEvent(pythia_event, event, HardScatteringSim.antiktR, jet_pt_min);
        else
          convertParticleEvent(pythia_event, event, HardScatteringSim.antiktR, jet_pt_min);
      }
      // No good.
      catch (Gambit::exception& e)
      {
        #ifdef COLLIDERBIT_DEBUG
          cerr << DEBUG_PREFIX << "Gambit::exception caught during event conversion in generateEventPy8Collider. Check the ColliderBit log for details." << endl;
        #endif

        #pragma omp critical (event_conversion_error)
        {
          // Store Pythia event record in the logs
          std::stringstream ss;
          pythia_event.list(ss, 1);
          logger() << LogTags::debug << "Gambit::exception caught in generateEventPy8Collider. Pythia record for event that failed:\n" << ss.str() << EOM;
        }

        str errmsg = "Bad point: generateEventPy8Collider caught the following runtime error: ";
        errmsg    += e.what();
        piped_invalid_point.request(errmsg);
        wrapup();
        return;
      }

      // Assign weight to event
      EventWeighterFunction(event, &HardScatteringSim);
    }

    #define GET_PYTHIA_EVENT(NAME)                               \
    void NAME(HEPUtils::Event& result)                           \
    {                                                            \
      using namespace Pipes::NAME;                               \
      generateEventPy8Collider(result, *Dep::RunMC,              \
       *Dep::HardScatteringSim, *Dep::EventWeighterFunction,     \
       *Loop::iteration, Loop::wrapup,runOptions);               \
    }

  }

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
