---
title: 'file backend_types/MultiModeCode.hpp'

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
| struct | **[Gambit::gambit_inflation_observables](/documentation/code/classes/structgambit_1_1gambit__inflation__observables/)**  |
| class | **[Gambit::Multimode_inputs](/documentation/code/classes/classgambit_1_1multimode__inputs/)** <br>Class containing the inputs used for inputs to MultiModeCode.  |

## Detailed Description


**Author**: 

  * Selim C. Hotinli [selim.hotinli14@imperial.ac.uk](mailto:selim.hotinli14@imperial.ac.uk)
  * Tomas Gonzalo ([tomas.gonzalo@monash.edu](mailto:tomas.gonzalo@monash.edu)) 


**Date**: 

  * 2017 June 
  * 2017 Oct
  * 2020 Feb


Helper types for MultiModeCode backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Utils/util_types.hpp"

#ifndef __MultiModeCode_hpp__
#define __MultiModeCode_hpp__

namespace Gambit
{

    // type definition for the multimodecode output.
    struct gambit_inflation_observables
    {
        bool check_ic_ok;
        double As;
        double A_iso;
        double A_pnad;
        double A_ent;
        double A_cross_ad_iso;
        double ns;
        double nt;
        double n_iso;
        double n_pnad;
        double n_ent;
        double N_pivot;
        double r;
        double alpha_s;
        double runofrun;
        double f_NL;
        double tau_NL;
        double k_array[1000];
        double pks_array[1000];
        double pks_array_iso[1000];
        double pkt_array[1000];
        int k_size;
        int err = 0;
    };

    class Multimode_inputs
    {
        public:
            // Constructor
            Multimode_inputs();
            // Debugging options
            int silence_output;
            // k values where to evaluate the power spectrum
            double k_min;
            double k_max;
            int numsteps;
            // Parameters realted to the pivot scale
            double k_pivot;
            double N_pivot;
            double dlnk;
            // Parameters related to the potential and initial condidtions
            int num_inflaton = -1;
            int potential_choice = -1;
            int vparam_rows = -1;
            std::vector<double> vparams;
            std::vector<double> phi_init0;
            std::vector<double> dphi_init0;
            // Parameters realted to the scenario for initial conditions
            int slowroll_infl_end;
            int instreheat;
            // Parameters related to approximations and observables
            int use_deltaN_SR;
            int evaluate_modes;
            int use_horiz_cross_approx;
            int get_runningofrunning;
    };
}

#endif // defined __MultiModeCode_hpp__
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
