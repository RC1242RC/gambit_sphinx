---
title: 'file frontends/DDCalc_1_2_0.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Functions

|                | Name           |
| -------------- | -------------- |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(scan_level ) |
| | **[DDCalc_SetWIMP_mG](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-ddcalc-setwimp-mg)**(WIMP ,  *Dep::mwimp , Dep::DD_couplings-> gps, Dep::DD_couplings-> gns, Dep::DD_couplings-> gpa, Dep::DD_couplings-> gna) |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(LocalHaloParameters_ptr->rho0 *fraction !  =rho0_eff) |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(LocalHaloParameters_ptr->vrot !  =vrot) |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(LocalHaloParameters_ptr->v0 !  =v0) |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(LocalHaloParameters_ptr->vesc !  =vesc) |
| | **[if](/documentation/code/files/ddcalc__1__2__0_8cpp/#function-if)**(halo_changed ) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| | **[BE_NAMESPACE](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-be-namespace)**  |
| int | **[WIMP](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-wimp)**  |
| int | **[Halo](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-halo)**  |
| [END_BE_NAMESPACE](/documentation/code/files/common__macros_8hpp/#define-end-be-namespace) | **[BE_INI_FUNCTION](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-be-ini-function)**  |
| safe_ptr< LocalMaxwellianHalo > | **[LocalHaloParameters_ptr](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-localhaloparameters-ptr)**  |
| double | **[fraction](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-fraction)**  |
| bool | **[scan_level](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-scan-level)**  |
| bool | **[halo_changed](/documentation/code/files/ddcalc__1__2__0_8cpp/#variable-halo-changed)**  |

## Detailed Description


**Author**: 

  * Lars A. Dal ([l.a.dal@fys.uio.no](mailto:l.a.dal@fys.uio.no)) 
  * Christopher Savage ([chris@savage.name](mailto:chris@savage.name)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Felix Kahlhoefer ([felix.kahlhoefer@desy.de](mailto:felix.kahlhoefer@desy.de)) 
  * Sebastian Wild ([felix.kahlhoefer@desy.de](mailto:felix.kahlhoefer@desy.de)) 


**Date**: 

  * 2014 Jul
  * 2014 Sept 
  * 2015 Jan,Feb,June
  * 2016 Apr, Aug
  * 2016 August
  * 2016 Aug


Frontend source for the DDCalc backend.

Actual implementation of DDCalc ini function.



------------------

Authors (add name and date if you modify):

Authors (add name and date if you modify):



------------------


## Functions Documentation

### function if

```
if(
    scan_level 
)
```


### function DDCalc_SetWIMP_mG

```
DDCalc_SetWIMP_mG(
    WIMP ,
     *Dep::mwimp ,
    Dep::DD_couplings-> gps,
    Dep::DD_couplings-> gns,
    Dep::DD_couplings-> gpa,
    Dep::DD_couplings-> gna
)
```


### function if

```
if(
    LocalHaloParameters_ptr->rho0 *fraction !  =rho0_eff
)
```


### function if

```
if(
    LocalHaloParameters_ptr->vrot !  =vrot
)
```


### function if

```
if(
    LocalHaloParameters_ptr->v0 !  =v0
)
```


### function if

```
if(
    LocalHaloParameters_ptr->vesc !  =vesc
)
```


### function if

```
if(
    halo_changed 
)
```



## Attributes Documentation

### variable BE_NAMESPACE

```
BE_NAMESPACE {
  
  std::map<str,int> ex_map;
```


### variable WIMP

```
int WIMP;
```


### variable Halo

```
int Halo;
```


### variable BE_INI_FUNCTION

```
END_BE_NAMESPACE BE_INI_FUNCTION {

  
  static double rho0_eff = 0.4, vrot = 235, v0 = 235, vesc = 550;
```


### variable LocalHaloParameters_ptr

```
static safe_ptr< LocalMaxwellianHalo > LocalHaloParameters_ptr;
```


### variable fraction

```
double fraction = *Dep::RD_fraction;
```


### variable scan_level

```
static bool scan_level = true;
```


### variable halo_changed

```
bool halo_changed = false;
```



## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/DDCalc_1_2_0.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

#include <map>
#include <stdexcept>

// File-local globals
BE_NAMESPACE
{
  // Map returning detector index given an analysis name.
  std::map<str,int> ex_map;
  // DM model and halo model singleton indices.
  int WIMP, Halo;
}
END_BE_NAMESPACE


// Initialisation function
BE_INI_FUNCTION
{

  // Halo model parameters and pointers to their entries in the Params map.
  static double rho0_eff = 0.4, vrot = 235, v0 = 235, vesc = 550;
  static safe_ptr<LocalMaxwellianHalo> LocalHaloParameters_ptr;

  // Fraction of DM
  double fraction = *Dep::RD_fraction;

  // Scan-level initialization -----------------------------
  static bool scan_level = true;
  if (scan_level)
  {
    // Initialize halo and WIMP models
    WIMP = DDCalc_InitWIMP();
    Halo = DDCalc_InitHalo();

    // Initialize experiments
    if (*InUse::DDCalc_Experiment)
    {
      ex_map["XENON100_2012"] = XENON100_2012_Init(false);
      ex_map["XENON1T_2017"] = XENON1T_2017_Init(false);
      ex_map["LUX_2013"] = LUX_2013_Init(false);
      ex_map["SuperCDMS_2014"] = SuperCDMS_2014_Init(false);
      ex_map["SIMPLE_2014"] = SIMPLE_2014_Init(false);
      ex_map["LUX_2016"] = LUX_2016_Init(false);
      ex_map["PandaX_2016"] = PandaX_2016_Init(false);
      ex_map["PandaX_2017"] = PandaX_2017_Init(false);
      ex_map["LUX_2015"] = LUX_2015_Init(false);
      ex_map["PICO_2L"] = PICO_2L_Init(false);
      ex_map["PICO_60_F"] = PICO_60_F_Init(false);
      ex_map["PICO_60_I"] = PICO_60_I_Init(false);
      ex_map["PICO_60_2017"] = PICO_60_2017_Init(false);
      //ex_map["DARWIN_Ar"] = DARWIN_Ar_Init(false);
      //ex_map["DARWIN_Xe"] = DARWIN_Xe_Init(false);
    }

    // Save safe pointers to local halo parameters.
    LocalHaloParameters_ptr = Dep::LocalHalo.safe_pointer();
  }
  scan_level = false;

  // Point-level initialization ----------------------------

  // Change DM parameters
  DDCalc_SetWIMP_mG(WIMP,*Dep::mwimp,Dep::DD_couplings->gps,Dep::DD_couplings->gns,
                    Dep::DD_couplings->gpa,Dep::DD_couplings->gna);

  // Log stuff if in debug mode
  #ifdef DDCALC_DEBUG
    double sigmapSI,sigmanSI,sigmapSD,sigmanSD;
    DDCalc_GetWIMP_msigma(WIMP,*Dep::mwimp,sigmapSI,&sigmanSI,&sigmapSD,&sigmanSD);
    logger() << "DDCalc WIMP-nucleon cross-sections [pb]:" << std::endl;
    logger() << "  sigmapSI = " << sigmapSI << std::endl;
    logger() << "  sigmanSI = " << sigmanSI << std::endl;
    logger() << "  sigmapSD = " << sigmapSD << std::endl;
    logger() << "  sigmanSD = " << sigmanSD << EOM;
  #endif

  // Change halo parameters.
    bool halo_changed = false;

    if (LocalHaloParameters_ptr->rho0 * fraction != rho0_eff) {rho0_eff = LocalHaloParameters_ptr->rho0 * fraction; halo_changed = true;}
    if (LocalHaloParameters_ptr->vrot != vrot)                {vrot     = LocalHaloParameters_ptr->vrot;            halo_changed = true;}
    if (LocalHaloParameters_ptr->v0   != v0)                  {v0       = LocalHaloParameters_ptr->v0;              halo_changed = true;}
    if (LocalHaloParameters_ptr->vesc != vesc)                {vesc     = LocalHaloParameters_ptr->vesc;            halo_changed = true;}

    if (halo_changed)
    {
      DDCalc_SetSHM(Halo,rho0_eff,vrot,v0,vesc);

      // Log stuff if in debug mode
      #ifdef DDCALC_DEBUG
        logger() << "Updated DDCalc halo parameters:" << EOM;
        logger() << "    rho0 [GeV/cm^3]     = " << LocalHaloParameters_ptr->rho0 << EOM;
        logger() << "    rho0_eff [GeV/cm^3] = " << rho0_eff << EOM;
        logger() << "    vrot [km/s]         = " << vrot << EOM;
        logger() << "    v0   [km/s]         = " << v0   << EOM;
        logger() << "    vesc [km/s]         = " << vesc << EOM;
      #endif
    }

}
END_BE_INI_FUNCTION

// Convenience functions
BE_NAMESPACE
{
  // Convenience function for returning detector index given an analysis name.
  int DDCalc_Experiment(const str& ex)
  {
    int result = -1;
    try { result = ex_map.at(ex); }
    catch(std::out_of_range&) { backend_error().raise(LOCAL_INFO, "Unknown experiment requested from DDCalc."); }
    return result;
  }

  // Convenience function for calling CalcRates with internally-initialised WIMP and halo objects.
  void DDCalc_CalcRates_simple(const int& D) { DDCalc_CalcRates(D, WIMP, Halo); }
}
END_BE_NAMESPACE
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
