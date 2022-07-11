//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM25atMSUSY_mA model definition. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer  
///  \date 2015 Jan
///
///  *********************************************

#ifndef __MSSM25atMSUSY_mA_hpp__
#define __MSSM25atMSUSY_mA_hpp__

// Parent model must be declared first! Include it here to ensure that this happens.
#include "gambit/Models/models/MSSM30atMSUSY_mA.hpp"

#define MODEL MSSM25atMSUSY_mA
#define PARENT MSSM30atMSUSY_mA
  START_MODEL

  DEFINEPARS(TanBeta,
             mA,mu,M1,M2,M3)

  DEFINEPARS(mq2_1, mq2_2, mq2_3)
 
  DEFINEPARS(ml2_1, ml2_2, ml2_3)

  DEFINEPARS(md2_1, md2_2, md2_3)

  DEFINEPARS(mu2_1, mu2_2, mu2_3)

  DEFINEPARS(me2_1, me2_2, me2_3)

  DEFINEPARS(Ae_12, Ae_3)
  
  DEFINEPARS(Ad_3)

  DEFINEPARS(Au_3)

  INTERPRET_AS_PARENT_FUNCTION(MSSM25atMSUSY_mA_to_MSSM30atMSUSY_mA)

#undef PARENT
#undef MODEL

#endif
