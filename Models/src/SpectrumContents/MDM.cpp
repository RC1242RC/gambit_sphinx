//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Class defining the parameters that SubSpectrum 
///  objects providing Scalar Singlet Dark Matter
///  spectrum data must provide
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2018 April
///
///  *********************************************

#ifndef __MDM_contents_hpp__
#define __MDM_contents_hpp__

#include "gambit/Models/SpectrumContents/RegisteredSpectra.hpp"

namespace Gambit {

  SpectrumContents::MDM::MDM()
  {
     setName("MDM");
     std::vector<int> scalar = initVector(1);   // i.e. get(Par::Tag, "name")
     std::vector<int> v2     = initVector(2);   // i.e. get(Par::Tag, "name", i)
     std::vector<int> v3     = initVector(3);   // "
     std::vector<int> v4     = initVector(4);   // "
     std::vector<int> v6     = initVector(6);   // "
     std::vector<int> m2x2   = initVector(2,2); // i.e. get(Par::Tag, "name", i, j)
     std::vector<int> m3x3   = initVector(3,3); // "
     std::vector<int> m4x4   = initVector(4,4); // "
     std::vector<int> m6x6   = initVector(6,6); // "
  


     addParameter(Par::mass1, "vev"      );

     addParameter(Par::Pole_Mass, "h0_1");
     
     addParameter(Par::Pole_Mass, "Chi0" );
     addParameter(Par::Pole_Mass, "Chi1" );
     addParameter(Par::Pole_Mass, "Chi2" );
     
     addParameter(Par::dimensionless, "lambda_h");
    
     addParameter(Par::dimensionless, "g1", scalar);
     addParameter(Par::dimensionless, "g2", scalar);
     addParameter(Par::dimensionless, "g3", scalar);
    
     addParameter(Par::dimensionless, "sinW2", scalar);
  
     addParameter(Par::dimensionless, "Yd", m3x3);
     addParameter(Par::dimensionless, "Yu", m3x3);
     addParameter(Par::dimensionless, "Ye", m3x3);
  }

}
#endif
