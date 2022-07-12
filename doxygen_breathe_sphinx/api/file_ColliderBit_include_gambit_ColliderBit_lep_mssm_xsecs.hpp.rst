
.. _file_ColliderBit_include_gambit_ColliderBit_lep_mssm_xsecs.hpp:

File lep_mssm_xsecs.hpp
=======================

|exhale_lsh| :ref:`Parent directory <dir_ColliderBit_include_gambit_ColliderBit>` (``ColliderBit/include/gambit/ColliderBit``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. contents:: Contents
   :local:
   :backlinks: none

Definition (``ColliderBit/include/gambit/ColliderBit/lep_mssm_xsecs.hpp``)
--------------------------------------------------------------------------


.. toctree::
   :maxdepth: 1

   program_listing_file_ColliderBit_include_gambit_ColliderBit_lep_mssm_xsecs.hpp.rst



Detailed Description
--------------------

Sparticle production cross-section calculators for LEP.

Results are taken from A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C30 (1986) 441 A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1 S. Dawson, E. Eichten and C. Quigg, Phys. Rev. D31 (1985) 1581 A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411

The Bartl, Fraas and Majerotto (BFM) papers are based on a convention for the neutralino decomposed into photino, zino and two higgsinos a and b: :math:`\tilde\chi_i^0 = N_{i1} \tilde\gamma + N_{i2} \tilde Z + N_{i3} \tilde H_a + N_{i4} \tilde H_b` where :math:`\tilde H_a = \tilde H_1^0 \sin\beta - \tilde H_2^0 \cos\beta` and :math:`\tilde H_b = \tilde H_1^0 \cos\beta + \tilde H_2^0 \sin\beta`

This corresponds to the conventions for N' in Haber & Kane (HK). Haber & Kane in turn have similar conventions to Gunion & Haber which is used in SLHA, however, :math:`\tan\beta` is upside down in HK. A conversion routine SLHA2BFM_NN from SLHA to these conventions is included.

For the charginos a convention similar to HK is followed, which has almost the same mixing matrices V and U as in SLHA, however, BFM uses :math:`\sigma_3 V` as the mixing matrix for negative charged states. HK refines this to be dependent on the mass matrix determinant so as to always get positive masses. For conversion from SLHA to BFM use SLHA2BFM_VV.

For sleptons the SLHA convention is followed. Thus :math:`F_{11}=\cos\phi`, :math:`F_{12}=\sin\phi`, etc. For :math:`\phi = 0` we have :math:`\tilde l_1 = \tilde l_L` and :math:`\tilde l_2 = \tilde l_R`.




Authors

Are Raklev (ahye@fys.uio.no) 

2015 Jun

Pat Scott (p.scott@imperial.ac.uk) 

2015 Jul







Includes
--------


- ``vector``



Included By
-----------


- :ref:`file_ColliderBit_src_ColliderBit_LEP.cpp`

- :ref:`file_ColliderBit_src_lep_mssm_xsecs.cpp`




Namespaces
----------


- :ref:`namespace_Gambit`

- :ref:`namespace_Gambit__ColliderBit`


Functions
---------


- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a0f8614fd96d901159ac0d80064ba1f33`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a2a49411999b394113fffcb395bab148f`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a4ec008f96435ebe11b78eca1aa2126f0`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1abbf01c906a8961538f1ea4f79d56fcec`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a989dc93c7fb84645e72819a5986ab7a5`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a2791d0121d64b32b19da2f1129efdf4d`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1ad77ec694b2787bf548b6e9a9c62a259c`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a2d9bce10091f76de9afa9815f1cce2bf`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a185a033e85266930b5e6220b3a149204`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1ab5acef007a85c7973d4c6df87a830cc1`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a0a45ecc9f0425ac00881ccbee9667570`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a259260adac6ba1e9f35d2bdac43d0daa`

- :ref:`exhale_function_lep__mssm__xsecs_8hpp_1a9669178acc1b60140c705ef7749b24db`


Typedefs
--------


- :ref:`exhale_typedef_lep__mssm__xsecs_8hpp_1a4258ff02bfd4c7757d7804d4149d8afe`

