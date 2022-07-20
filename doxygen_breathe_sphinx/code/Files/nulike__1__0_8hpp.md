---
title: 'file shared_includes/nulike_1_0.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: Pat Scott ([patscott@physics.mcgill.ca](mailto:patscott@physics.mcgill.ca)) 

**Date**: 

  * 2013 May 
  * 2014 March 
  * 2015 Aug


Frontend header for the nulike backend.

Compile-time registration of available functions and variables from this backend.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

// Import functions
BE_FUNCTION(nulike_init, void, (const char&, const char&, const char&, const char&, const char&, double&, bool&, bool&), "nulike_init_", "nulike_init")
BE_FUNCTION(nulike_bounds, void, (const char&, const double&, const double&, nuyield_function_pointer, double&, double&, int&,
                                  double&, double&, const int&, const double&, const int&, const bool&, const double&, const double&, void*&, const bool&),
                                  "nulike_bounds", "nubounds")
BE_FUNCTION(nulike_lnpiln, double, (const int&, const double&, const double&, const double&), "nulike_lnpiln_", "lnlike_marg_poisson_lognormal_error")
BE_FUNCTION(nulike_lnpin,  double, (const int&, const double&, const double&, const double&), "nulike_lnpin_",  "lnlike_marg_poisson_gaussian_error")
// Arguments for the last two above are:
//  int    nobs   number of observed events
//  double npred1 number of predicted events with no uncertainty
//  double npred2 number of predicted events with an associated prediction uncertainty due to e.g. efficiency error
//  double error  fractional uncertainty on prediction npred2
// Note that the split into npred1 and npred2 is just for distinguishing which part of the
// predicition has the fractional uncertainty associated with it.  If the uncertainty is on
// the entire prediction, set npred1 = 0 and npred2 = total predicted events.
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
