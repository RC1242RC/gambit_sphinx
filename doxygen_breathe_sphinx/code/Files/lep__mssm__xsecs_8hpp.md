---
title: 'file ColliderBit/lep_mssm_xsecs.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::ColliderBit](/documentation/code/namespaces/namespacegambit_1_1colliderbit/)**  |

## Detailed Description


**Author**: 

  * Are Raklev ([ahye@fys.uio.no](mailto:ahye@fys.uio.no)) 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 


**Date**: 

  * 2015 Jun
  * 2015 Jul


Sparticle production cross-section calculators for LEP.

Results are taken from A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C30 (1986) 441 A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1 S. Dawson, E. Eichten and C. Quigg, Phys. Rev. D31 (1985) 1581 A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411

The Bartl, Fraas and Majerotto (BFM) papers are based on a convention for the neutralino decomposed into photino, zino and two higgsinos a and b: \(\tilde\chi_i^0 = N_{i1} \tilde\gamma + N_{i2} \tilde Z + N_{i3} \tilde H_a + N_{i4} \tilde H_b\) where \(\tilde H_a = \tilde H_1^0 \sin\beta - \tilde H_2^0 \cos\beta\) and \(\tilde H_b = \tilde H_1^0 \cos\beta + \tilde H_2^0 \sin\beta\)

This corresponds to the conventions for N' in Haber & Kane (HK). Haber & Kane in turn have similar conventions to Gunion & Haber which is used in SLHA, however, \(\tan\beta\) is upside down in HK. A conversion routine SLHA2BFM_NN from SLHA to these conventions is included.

For the charginos a convention similar to HK is followed, which has almost the same mixing matrices V and U as in SLHA, however, BFM uses \(\sigma_3 V\) as the mixing matrix for negative charged states. HK refines this to be dependent on the mass matrix determinant so as to always get positive masses. For conversion from SLHA to BFM use SLHA2BFM_VV.

For sleptons the SLHA convention is followed. Thus \(F_{11}=\cos\phi\), \(F_{12}=\sin\phi\), etc. For \(\phi = 0\) we have \(\tilde l_1 = \tilde l_L\) and \(\tilde l_2 = \tilde l_R\).



------------------

Authors



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include <vector>


namespace Gambit
{
    
  namespace ColliderBit
  {
    
    typedef std::vector< std::vector<double> > MixMatrix;
    
    void get_sigma_ee_ll(triplet<double>& result, const double sqrts, const int generation, const int l_chirality, 
                         const int lbar_chirality, const double gtol, const double ftol, const bool gpt_error,
                         const bool fpt_error, const Spectrum& spec, const double gammaZ, const bool l_are_gauge_es);
    void get_sigma_ee_chi00(triplet<double>& result, const double sqrts, const int chi_first, const int chi_second,
                            const double tol, const bool pt_error, const Spectrum& spec, const double gammaZ);
    void get_sigma_ee_chipm(triplet<double>& result, const double sqrts, const int chi_plus, const int chi_minus,
                            const double tol, const bool pt_error, const Spectrum& spec, const double gammaZ);    

    double xsec_sleislej(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix F, 
                         MixMatrix N, const double mN[4], double alpha, double mZ, double gZ,
                         double sin2thetaW, bool warn_on_CP_violating_masses = true);
    double xsec_neuineuj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix N,
                         const double mS[2], double tanb, double alpha, double mZ, double gZ, double sin2thetaW);
    double xsec_chaichaj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix V, 
                         MixMatrix U, double msn, double alpha, double mZ, double gZ, double sin2thetaW);
    
    void SLHA2BFM_NN(MixMatrix &NN, double tanb, double sin2thetaW);
    void SLHA2BFM_VV(MixMatrix &VV);
    void BFM2SLHA_NN(MixMatrix &NN, double tanb, double sin2thetaW);
    void BFM2SLHA_VV(MixMatrix &VV);
    MixMatrix multiply(MixMatrix A, MixMatrix B);
    MixMatrix transpose(MixMatrix A);
    void print(MixMatrix A);
        
  }
  
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
