---
title: 'file Core/likelihood_container.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::Likelihood_Container](/documentation/code/classes/classgambit_1_1likelihood__container/)** <br>Class for collecting pointers to all the likelihood components, then running and combining them.  |

## Detailed Description


**Author**: 

  * Christoph Weniger ([c.weniger@uva.nl](mailto:c.weniger@uva.nl)) 
  * Gregory Martinez ([gregory.david.martinez@gmail.com](mailto:gregory.david.martinez@gmail.com)) 
  * Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 
  * Anders Kvellestad ([anders.kvellestad@fys.uio.no](mailto:anders.kvellestad@fys.uio.no)


**Date**: 

  * 2013 May, June, July
  * 2013 July 
  * 2014 Feb
  * 2013 Aug 
  * 2014 May, June
  * 2019 May
  * 2021 Feb


Likelihood container declarations.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef __likelihood_container_hpp__
#define __likelihood_container_hpp__

#include "gambit/Core/container_factory.hpp"
#include "gambit/Printers/baseprinter.hpp"

namespace Gambit
{

  class Likelihood_Container : public Scanner::Function_Base<double (std::unordered_map<std::string, double> &)>
  {

    private:

      std::vector<DRes::VertexID> target_vertices;

      std::vector<DRes::VertexID> aux_vertices;

      DRes::DependencyResolver &dependencyResolver;

      Printers::BaseBasePrinter &printer;

      //std::unordered_map<str, double> parameterMap;

      std::map<str, primary_model_functor *> functorMap;

      double min_valid_lnlike;

      double alt_min_valid_lnlike;

      double active_min_valid_lnlike;

      bool print_invalid_points;

      double disable_print_for_lnlike_below;

      str lnlike_modifier_name;
      Options lnlike_modifier_params;

      std::map<DRes::VertexID,str> return_types;

      std::chrono::time_point<std::chrono::system_clock> previous_startL;
      std::chrono::time_point<std::chrono::system_clock> previous_endL;

      const str intralooptime_label; // Time elapsed during likelihood evaluations
      const str interlooptime_label; // Time elapsed between likelihood evaluation
      const str totallooptime_label; // Time elapsed from end of one likelihood evaluation to end of next (sum of the above two)

      const int intraloopID;
      const int interloopID;
      const int totalloopID;

      const int invalidcodeID;

      bool debug;

    public:

      Likelihood_Container (const std::map<str, primary_model_functor *> &functorMap,
       DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile,
       const str &purpose, Printers::BaseBasePrinter& printer);

      void setParameters (const std::unordered_map<std::string, double> &);

      double main (std::unordered_map<std::string, double> &in);

      double purposeModifier(double lnlike);
  };

  // Register the Likelihood Container as an available target function for ScannerBit.  The first argument
  // is a tag that gets used later by the Likelihood_Container_Factory to create a new Likelihood_Container
  // and return a pointer to it.
  LOAD_SCANNER_FUNCTION(GAMBIT_Scanner_Target_Function, Likelihood_Container)

}

#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
