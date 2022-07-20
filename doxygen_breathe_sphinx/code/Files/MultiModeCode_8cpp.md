---
title: 'file backend_types/MultiModeCode.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |

## Detailed Description


**Author**: 

  * Selim Hotinli 
  * Janina Renk ([janina.renk@fysik.su.se](mailto:janina.renk@fysik.su.se)) 
  * Sebastian Hoof ([hoof@uni-goettingen.de](mailto:hoof@uni-goettingen.de)) 


**Date**: 

  * 2018 Jan
  * 2020 Sep
  * 2020 Mar


Definitions of the Classy_input class used for communicating with the backend classy.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/backend_types/MultiModeCode.hpp"

namespace Gambit
{

  // Default constructor for multimode inputs
  // N.B. The constructor is set up to support single field inflation models with instant reheating but allow the inclusion
  //      of more complex models. Some default MultiModeCode (MMC) inputs below might have to be adjusted to facilitate this.
  Multimode_inputs::Multimode_inputs()
  {
    num_inflaton = 1; // Assume single field inflation
    instreheat = 1; // Use the instant reheating approximation
    // Using the instant reheating approximation makes N_pivot a derived parameter and the input N_pivot has no effect
    // We fix it to the dummy value below
    N_pivot = 50;
    // Caveat: Changing the default value of 'slowroll_infl_end' requires defining a custom condition for the end of inflation in MMC!
    slowroll_infl_end = 1; // = true, i.e. stop inflation when slow roll parameters = 1
    // Control the output of analytic approximations for comparison. We do not use these.
    use_deltaN_SR = 0; // = false, i.e. MMC will not calculate deltaN observables (assumes slow roll & sum-separable potentials) at the pivot scale
    use_horiz_cross_approx = 0; // = false, i.e. do not ignore the horizon-crossing-approximation for the above
    evaluate_modes = 1; // = true, i.e. evalute modes and do not just rely on background evolution
    get_runningofrunning = 0; // = false, i.e. do not compute the dervative of the spectral index w.r.t. ln(k)
    // Set the initial conditions for the inflation field(s).
    // N.B. For single field inflation, MMC determines the parameters below self-consistenly; choose sensible entries as starting point
    phi_init0 = {10.0};
    dphi_init0 = {1.0};
  };

}
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
