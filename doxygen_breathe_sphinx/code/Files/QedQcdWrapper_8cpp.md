---
title: 'file src/QedQcdWrapper.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::SpecBit](/documentation/code/namespaces/namespacegambit_1_1specbit/)**  |

## Defines

|                | Name           |
| -------------- | -------------- |
|  | **[addtomap_EL](/documentation/code/files/qedqcdwrapper_8cpp/#define-addtomap-el)**(r, PRODUCT) <br>TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY.  |
|  | **[addtomap](/documentation/code/files/qedqcdwrapper_8cpp/#define-addtomap)**(__KEYS, FPTR)  |

## Detailed Description


**Author**: Ben Farmer ([benjamin.farmer@fysik.su.se](mailto:benjamin.farmer@fysik.su.se)) 

**Date**: 2015 Mar

This class is used to wrap the QedQcd object used by SoftSUSY and FlexibleSUSY in a [Gambit](/documentation/code/namespaces/namespacegambit/) SubSpectrum object. This is to enable access to the parameters of the SM defined as a low-energy effective theory (as opposed to correspending information defined in a UV model). Parameters defined this way are often used as input to a physics calculator.



------------------

Authors:



------------------




## Macros Documentation

### define addtomap_EL

```
#define addtomap_EL(
    r,
    PRODUCT
)
{                                                                       \
   str key      = BOOST_PP_SEQ_ELEM(0,PRODUCT); /* string map key */    \
   tmp_map[key] = BOOST_PP_SEQ_ELEM(1,PRODUCT); /* function pointer */  \
}
```

TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY. 

Macro to help assign the same function pointers to multiple string keys 


### define addtomap

```
#define addtomap(
    __KEYS,
    FPTR
)
BOOST_PP_SEQ_FOR_EACH_PRODUCT(addtomap_EL, (BOOST_PP_TUPLE_TO_SEQ(__KEYS))((FPTR)) )
```


## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************


#include "gambit/Elements/sminputs.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/Elements/slhaea_spec_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
#include "gambit/Utils/util_functions.hpp"

#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/for_each_product.hpp>

#include "lowe.h" 

// Relies on "tmp_map" being used as the variable name for the temporary maps
// inside the fill_map functions.
#define addtomap_EL(r, PRODUCT)                                         \
{                                                                       \
   str key      = BOOST_PP_SEQ_ELEM(0,PRODUCT); /* string map key */    \
   tmp_map[key] = BOOST_PP_SEQ_ELEM(1,PRODUCT); /* function pointer */  \
}

#define addtomap(__KEYS,FPTR) BOOST_PP_SEQ_FOR_EACH_PRODUCT(addtomap_EL, (BOOST_PP_TUPLE_TO_SEQ(__KEYS))((FPTR)) )


namespace Gambit
{

   namespace SpecBit
   {


      QedQcdWrapper::QedQcdWrapper()
         : qedqcd()
         , sminputs()
      {}

      QedQcdWrapper::QedQcdWrapper(const softsusy::QedQcd& model, const SMInputs& input)
         : qedqcd(model)
         , sminputs(input)        /***/
         , hardup(get(Par::Pole_Mass,"u_3")) // QedQcd object will throw an error if we try to run above this, so set this as the limit /***/
         , softup(get(Par::Pole_Mass,"u_3")) // Set top quark pole mass as soft upper limit of  /***/
         , softlow(2) // (GeV) QedQcd object sets beta functions to zero below here anyway
         , hardlow(2) // (GeV) QedQcd object sets beta functions to zero below here anyway
      {}


      QedQcdWrapper::~QedQcdWrapper() {}

      int QedQcdWrapper::get_numbers_stable_particles() const {return -1;}

      void QedQcdWrapper::add_to_SLHAea(int, SLHAstruct& slha) const
      {
        // Here we assume that all SMINPUTS defined in SLHA2 are provided by the
        // SMINPUTS object, so we don't bother repeating them here.  We also assume
        // that the HE spectrum is going to provide the gauge couplings, so we don't
        // bother with those either.  We ignore the first parameter, as it doesn't matter
        // if we're helping make an SLHA1 or SLHA2 file.

        // Add the b pole mass
        SLHAea_add_from_subspec(slha, LOCAL_INFO, *this, Par::Pole_Mass,"d_3","MASS",5,"# mb (pole)");
      }

      void QedQcdWrapper::RunToScaleOverride(double end_scale)
      {
        const double tol = 1.0e-5; // Value used internally in QedQcd methods
        double begin_scale = GetScale();
        qedqcd.run(begin_scale, end_scale, tol);  // Run masses and couplings
      }

      double QedQcdWrapper::GetScale() const { return qedqcd.get_scale(); }

      void QedQcdWrapper::SetScale(double scale) { qedqcd.set_scale(scale); }


      double get_mUp      (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mUp); }
      double get_mCharm   (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mCharm); }
      double get_mTop     (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mTop); }
      double get_mDown    (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mDown); }
      double get_mStrange (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mStrange); }
      double get_mBottom  (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mBottom); }
      double get_mElectron(const softsusy::QedQcd& model) { return model.displayMass(softsusy::mElectron); }
      double get_mMuon    (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mMuon); }
      double get_mTau     (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mTau); }
      // Might as well add photon and gluon for good measure, someone might need them for a loop or something.
      double get_mPhoton  (const softsusy::QedQcd&) { return 0.; }
      double get_mGluon   (const softsusy::QedQcd&) { return 0.; }

      // Note: often people want 1/alpha, but here we return alpha itself
      // Might want to change these to g1,g3, to be consistent with MSSMSpec
      double get_alpha  (const softsusy::QedQcd& model) { return model.displayAlpha(softsusy::ALPHA); }
      double get_alphaS (const softsusy::QedQcd& model) { return model.displayAlpha(softsusy::ALPHAS); }

      // alpha1 is in the GUT normalisation. sinth = sin^2 thetaW(Q) in MSbar
      // scheme
      //  }
      // Note that it computes that couplings at scale "m2". I think other quantities
      // are taken as calculated more accurately at some initial scale, and then this
      // simple 1-loop computation is used just to get these couplings at a nearby
      // scale m2.

      double get_a1 (const softsusy::QedQcd&)
      {
         // We need sin^2 thetaW(Q) for this; i.e. I think it is supposed to be
         // supplied at whatever scale the rest of the parameters are currently
         // defined at. Not sure how to handle this.
         //QedQcd::getGaugeMu(const double m2, const double sinth)
         return 0.;
      }

      //  Note: model object not needed for these, but required by function signature
      double get_Pole_mElectron(const SMInputs& inputs) { return inputs.mE; }
      double get_Pole_mMuon    (const SMInputs& inputs) { return inputs.mMu; }
      double get_Pole_mNu1    (const SMInputs& inputs) { return inputs.mNu1; }
      double get_Pole_mNu2    (const SMInputs& inputs) { return inputs.mNu2; }
      double get_Pole_mNu3    (const SMInputs& inputs) { return inputs.mNu3; }
      // for good measure.
      double get_Pole_mPhoton  (const SMInputs&) { return 0.; }
      double get_Pole_mGluon   (const SMInputs&) { return 0.; }

      double get_sinthW2_pole(const softsusy::QedQcd &qedqcd)
      {
        return (1 - Utils::sqr(qedqcd.displayPoleMW()) / Utils::sqr(qedqcd.displayPoleMZ()));
      }

      // Filler function for getter function pointer maps
      QedQcdWrapper::GetterMaps QedQcdWrapper::fill_getter_maps()
      {
         GetterMaps map_collection;

         //
         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {  // scope so we can reuse the name 'tmp_map' several times, so that our macro works.
            // could make a better macro, or an actual function, but I'm in a hurry
            MTget::fmap0_extraM tmp_map;

            tmp_map["u_1"] = &get_mUp; // u
            tmp_map["u_2"] = &get_mCharm; // c
            tmp_map["u_3"] = &get_mTop; // t
            tmp_map["d_1"] = &get_mDown; // d
            tmp_map["d_2"] = &get_mStrange; // s
            tmp_map["d_3"] = &get_mBottom; // b
            tmp_map["e-_1"]  = &get_mElectron; // e-
            tmp_map["e-_2"] = &get_mMuon; // mu-
            tmp_map["e-_3"]= &get_mTau; // tau-

            tmp_map["gamma"] = &get_mPhoton;
            tmp_map["g"]     = &get_mGluon;

            map_collection[Par::mass1].map0_extraM = tmp_map;
         }

         {
            // Functions utilising the "extraM" function signature
            // (Zero index, model object as argument)

            MTget::fmap0_extraM tmp_map;

            tmp_map["alpha"]  = &get_alpha;
            tmp_map["alphaS"] = &get_alphaS;

            map_collection[Par::dimensionless].map0_extraM = tmp_map;
         }

         //
         // Functions utilising the plain-vanilla function signature ("fmap")
         // (Zero-argument member functions of model object)
         {
            // String names correspond to those defined in particle_database.cpp. If
            // there is a mismatch, please change the ones here!
            MTget::fmap0 tmp_map;

            tmp_map["Z0"]  = &softsusy::QedQcd::displayPoleMZ;
            tmp_map["W+"]  = &softsusy::QedQcd::displayPoleMW;
            tmp_map["u_3"] = &softsusy::QedQcd::displayPoleMt; // t
            // "Pole" for b quark is quoted in SoftSUSY (lowe.h) documentation, so I guess this is an approximation; need to check details.
            tmp_map["d_3"] = &softsusy::QedQcd::displayPoleMb; // b
            tmp_map["e-_3"]= &softsusy::QedQcd::displayPoleMtau; // tau

            // Nearest flavour 'aliases' for the SM mass eigenstates
            tmp_map["t"] = &softsusy::QedQcd::displayPoleMt;
            tmp_map["b"] = &softsusy::QedQcd::displayPoleMb;
            tmp_map["tau-"]= &softsusy::QedQcd::displayPoleMtau;

            map_collection[Par::Pole_Mass].map0 = tmp_map;
         }

         {
            MTget::fmap0_extraI tmp_map;

            tmp_map["e-_1"] = &get_Pole_mElectron; // e-
            tmp_map["e-_2"] = &get_Pole_mMuon; // mu-
            tmp_map["nu_1"] = &get_Pole_mNu1;
            tmp_map["nu_2"] = &get_Pole_mNu2;
            tmp_map["nu_3"] = &get_Pole_mNu3;

            // Nearest flavour 'aliases' for the SM mass eigenstates
            tmp_map["e-"]  = &get_Pole_mElectron; // e-
            tmp_map["mu-"] = &get_Pole_mMuon; // mu-

            tmp_map["gamma"] = &get_Pole_mPhoton;
            tmp_map["g"]     = &get_Pole_mGluon;

            map_collection[Par::Pole_Mass].map0_extraI = tmp_map;
         }

         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {

            MTget::fmap0_extraM tmp_map;

            tmp_map["sinW2"] = &get_sinthW2_pole;

            map_collection[Par::Pole_Mixing].map0_extraM = tmp_map;
         }



         return map_collection;
      }


      void set_Pole_mElectron(SMInputs& inputs, double set_value) { inputs.mE = set_value; }

      // Filler function for setter function pointer maps
      QedQcdWrapper::SetterMaps QedQcdWrapper::fill_setter_maps()
      {
         SetterMaps map_collection;

         //
         // Functions utilising the plain-vanilla function signature ("fmap")
         // (Zero-argument member functions of model object)
         {
            MTset::fmap0 tmp_map;

            // Do something like this, though the demo function here is a getter
            // not a setter so you can't use that one of course :). If the
            // function signature doesn't match what you need I can change it,
            // otherwise need to use one of the "extra" map fillers, see e.g.
            // below (there is also one that takes the model object as an
            // input, as in the getter case)
            tmp_map["Z0"] = &softsusy::QedQcd::setPoleMZ;
            tmp_map["W+"] = &softsusy::QedQcd::setPoleMW;
            map_collection[Par::Pole_Mass].map0 = tmp_map;
         }

         {
            MTset::fmap0_extraI tmp_map;

            tmp_map["e-_1"] = &set_Pole_mElectron;

            map_collection[Par::Pole_Mass].map0_extraI = tmp_map;
         }
         return map_collection;
      }

   } // end SpecBit namespace
} // end Gambit namespace
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
