---
title: 'file src/MSSMspec.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::SpecBit](/documentation/code/namespaces/namespacegambit_1_1specbit/)**  |

## Detailed Description


**Author**: Ben Farmer ([benjamin.farmer@fysik.su.se](mailto:benjamin.farmer@fysik.su.se)) 

**Date**: Aug 2016

Source file definable quantities for MSSMSpec class



------------------

Authors:



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/SpecBit/MSSMSpec_head.hpp"

namespace Gambit 
{
   namespace SpecBit 
   {
      MSSM_strs::MSSM_strs() {} // Constructor needed to silence certain compiler warnings

      
      const str MSSM_strs::BMu = "BMu";
      const str MSSM_strs::mHd2 = "mHd2";
      const str MSSM_strs::mHu2 = "mHu2";
      const str MSSM_strs::mq2 =  "mq2";
      const str MSSM_strs::ml2 =  "ml2";
      const str MSSM_strs::md2 =  "md2";
      const str MSSM_strs::mu2 =  "mu2";
      const str MSSM_strs::me2 =  "me2";
      const str MSSM_strs::M1 =  "M1";
      const str MSSM_strs::M2 =  "M2";
      const str MSSM_strs::M3 =  "M3";
      const str MSSM_strs::Mu =  "Mu";
      const str MSSM_strs::vu =  "vu";
      const str MSSM_strs::vd =  "vd";
      const str MSSM_strs::TYd =  "TYd";
      const str MSSM_strs::TYe =  "TYe";
      const str MSSM_strs::TYu =  "TYu";
      const str MSSM_strs::ad  =  "ad";
      const str MSSM_strs::ae  =  "ae";
      const str MSSM_strs::au  =  "au";
      const str MSSM_strs::g1  =  "g1";
      const str MSSM_strs::g2  =  "g2";
      const str MSSM_strs::g3  =  "g3";
      const str MSSM_strs::tanbeta = "tanbeta";
      const str MSSM_strs::sinW2 = "sinW2";
      const str MSSM_strs::mA2 = "mA2";
      const str MSSM_strs::Yd  =  "Yd";
      const str MSSM_strs::Yu  =  "Yu";
      const str MSSM_strs::Ye  =  "Ye";

      const str MSSM_strs::gluino = "~g";
      const str MSSM_strs::A0 = "A0";
      const str MSSM_strs::Hplus= "H+";
      const str MSSM_strs::Hminus ="H-";
      const str MSSM_strs::Goldstone0 ="Goldstone0";
      const str MSSM_strs::Goldstoneplus ="Goldstone+";
      const str MSSM_strs::Goldstoneminus ="Goldstone-";
      const str MSSM_strs::Wplus = "W+";
      const str MSSM_strs::Wminus = "W-";
      const str MSSM_strs::Z0 = "Z0";

      
      const str MSSM_strs::su        =   "~u";
      const str MSSM_strs::sd      =   "~d";
      const str MSSM_strs::se      =   "~e-";
      const str MSSM_strs::snu     =   "~nu";
      const str MSSM_strs::chiplus   =   "~chi+";
      const str MSSM_strs::chi0      =   "~chi0";
      const str MSSM_strs::h0      =   "h0";
      const str MSSM_strs::subar     =   "~ubar";
      const str MSSM_strs::sdbar     =   "~dbar";
      const str MSSM_strs::seplus    =   "~e+";
      const str MSSM_strs::snubar    =   "~nubar";
      const str MSSM_strs::chiminus  =   "~chi-";

      // TODO: replace with a more integrated system
 

      // pole mass strings with no index
      const std::vector<str> MSSM_strs::pole_mass_strs = initVector( gluino, A0, Hplus,
                             Hminus, Goldstone0,
                             Goldstoneplus,
                             Goldstoneminus,
                             Wplus, Wminus, Z0 );

      // as above but without Z0 since we do not predict that mass
      const std::vector<str> MSSM_strs::pole_mass_pred = initVector( gluino, A0, Hplus,
                             Hminus, Goldstone0,
                             Goldstoneplus,
                             Goldstoneminus,
                             Wplus, Wminus );

      const std::vector<str> MSSM_strs::pole_mass_strs_1 = initVector( su, sd, se, 
                                                      subar, sdbar, seplus,
                               chiplus, chiminus, chi0, h0, 
                               snu, snubar );

      const std::vector<str> MSSM_strs::pole_mass_strs_1_6  = initVector( su, sd, se,
                              subar, sdbar, seplus );

      const std::vector<str> MSSM_strs::pole_mass_strs_1_4  = initVector( chi0 );
      
      const std::vector<str> MSSM_strs::pole_mass_strs_1_3  = initVector( snu, snubar );

      const std::vector<str> MSSM_strs::pole_mass_strs_1_2  = initVector( chiplus, chiminus, h0 );



      const std::vector<str> MSSM_strs::pole_mixing_strs_2_6x6  = initVector( sd, su, se );

      const std::vector<str> MSSM_strs::pole_mixing_strs_2_4x4  = initVector( chi0 );

      const std::vector<str> MSSM_strs::pole_mixing_strs_2_3x3  = initVector( snu );

      const std::vector<str> MSSM_strs::pole_mixing_strs_2_2x2  = initVector( h0, A0, Hplus, chiminus, chiplus );



      // no index 
      const std::vector<str> MSSM_strs::mass2_strs = initVector( BMu, mHd2, mHu2, mA2 );

      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::mass2_strs_2_3x3= initVector( mq2, ml2, md2, mu2, me2 );


   
      // no index
      const std::vector<str> MSSM_strs::mass1_strs = initVector( M1, M2, M3, Mu, vu, vd );
      
      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::mass1_strs_2_3x3 = initVector( TYd, TYe, TYu, ad, ae, au );

 
   
      // no index
      const std::vector<str> MSSM_strs::dimensionless_strs = initVector( g1, g2, g3, tanbeta, sinW2 );

      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::dimensionless_strs_2_3x3 = initVector( Yd, Yu, Ye );

      
   }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
