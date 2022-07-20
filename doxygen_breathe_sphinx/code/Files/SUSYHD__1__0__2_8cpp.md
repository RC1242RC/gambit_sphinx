---
title: 'file frontends/SUSYHD_1_0_2.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Detailed Description


**Author**: Tomas Gonzalo 

**Date**: 2017 Jan

Frontend for SUSYHD 1.0.2 backend



------------------

Authors (add name and sate if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/SUSYHD_1_0_2.hpp"

// Convenience functions (definitions)
BE_NAMESPACE
{
}
END_BE_NAMESPACE

// Initialisation function (definition)
BE_INI_FUNCTION
{
  // retrive SMInputs dependency 
  const SMInputs& sminputs = *Dep::SMINPUTS;
    
  // retrieve MSSM_spectrum dependency
  const Spectrum& fullspectrum = *Dep::unimproved_MSSM_spectrum;

  // Run Options
  // TODO: Implement these if they can 
  //str scheme = runOptions->getValueOrDef<str>("DRbar", "scheme");
  //std::vector<int> hiOrd = runOptions->getValueOrDef<std::vector<int> >({1,1,1,1},"hiOrd");
  //MReal Rscale = runOptions->getValueOrDef<MReal>(0,"Rscale");
  //bool split = runOptions->getValueOrDef<bool>(false, "split");
  //MReal RscaleSplit = runOptions->getValueOrDef<MReal>(0, "RscaleSplit");
  //bool numerical = runOptions->getValueOrDef<bool>(false, "numerical");
  //std::vector<int> sources = runOptions->getValueOrDef<std::vector<int> >({1,1,1}, "sources");  
  //bool useMStopYukawa = runOptions->getValueOrDef(false, "useMStopYukawa"); 

  // Set mt and alpha_s @ MZ to the values in sminputs
  SetSMparameters(fullspectrum.get(Par::Pole_Mass,"t"), sminputs.alphaS);

}
END_BE_INI_FUNCTION
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
