---
title: 'file SpecBit/MDMSpec_head.hpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::SpecBit](/documentation/code/namespaces/namespacegambit_1_1specbit/)**  |

## Classes

|                | Name           |
| -------------- | -------------- |
| class | **[Gambit::SpecBit::MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/)**  |
| struct | **[Gambit::SpecTraits< SpecBit::MDMSpec< MI > >](/documentation/code/classes/structgambit_1_1spectraits_3_01specbit_1_1mdmspec_3_01mi_01_4_01_4/)**  |
| class | **[Gambit::SpecBit::MDMSpec](/documentation/code/classes/classgambit_1_1specbit_1_1mdmspec/)**  |

## Detailed Description


**Author**: James McKay [j.mckay14@imperial.ac.uk](mailto:j.mckay14@imperial.ac.uk)

**Date**: 2018 Mar

"Header" declarations for MDMSpec class (definitions in another header file due to this being a template class)



------------------

Authors:



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#ifndef MDMSPEC_HEAD_H
#define MDMSPEC_HEAD_H

#include "gambit/Elements/spec.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Models/SpectrumContents/RegisteredSpectra.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"

namespace Gambit
{
   namespace SpecBit
   {
      template <class MI>  // "MI" for "Model_interface"
      class MDMSpec;
   }

   // For example of what kind of class MI needs to be, see
   // SpecBit/include/model_files_and_boxes.hpp,
   // MODELNAME_interface class

   //template <>
   template <class MI>
   struct SpecTraits<SpecBit::MDMSpec<MI>>
   {
      static std::string name() { return "MDMSpec"; }
      typedef SpectrumContents::MDM Contents;
      typedef typename MI::Model Model;
      typedef DummyInput Input;
   };

   namespace SpecBit
   {
      template <class MI>
      class MDMSpec : public Spec<MDMSpec<MI>>
      {
         private:
            str backend_name;
            str backend_version;
            static const int _index_offset;

         public:
            typedef MDMSpec<MI> Self;
            typedef typename Self::MTget MTget;
            typedef typename Self::MTset MTset;
            typedef typename Self::GetterMaps GetterMaps;
            typedef typename Self::SetterMaps SetterMaps;
            typedef typename SpecTraits<Self>::Model Model;
            typedef typename SpecTraits<Self>::Input Input;

            static int index_offset() {return _index_offset;}
            virtual double GetScale() const;
            virtual void SetScale(double scale);
            virtual void RunToScaleOverride(double scale);

            //constructors
            MDMSpec();
            MDMSpec(MI, str backend_name, str backend_version);

            //Could more constructors to interface with other generators

            // These are public for now so that SpecBit_tests.cpp can access them
            MI model_interface;

            // Dummy placeholder for potential Inputs object
            DummyInput dummyinput;

            //Destructor
            virtual ~MDMSpec();

            // Functions to interface Model and Input objects with the base 'Spec' class
            Model& get_Model() { return model_interface.model; }
            Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }
            const Model& get_Model() const { return model_interface.model; }
            const Input& get_Input() const { return dummyinput; /*unused here, but needs to be defined for the interface*/ }



            virtual std::string AccessError(std::string state) const;


            template<class MDMlike>
            void get_lowe_data_from(MDMlike &othermodel)
            {

              typename MI::Model& model = model_interface.model;

              model.set_scale( othermodel.get_scale() );
              model.set_Yu( othermodel.get_Yu() );


              return;
            }

            // Overload of this function to just easily copy the othermodel object
            // if it is of type Model
            void get_external_spectrum(typename MI::Model& othermodel)
            {
              model_interface.model = othermodel;
              return;
            }

            static GetterMaps fill_getter_maps();
            static SetterMaps fill_setter_maps();

      };


   } // end SpecBit namespace
} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
```


-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000
