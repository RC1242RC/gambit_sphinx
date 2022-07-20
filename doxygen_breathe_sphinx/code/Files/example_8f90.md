---
title: 'file example/example.f90'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[m1](/documentation/code/namespaces/namespacem1/)**  |
| **[ma](/documentation/code/namespaces/namespacema/)**  |
| **[mb](/documentation/code/namespaces/namespacemb/)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| integer function | **[two](/documentation/code/files/example_8f90/#function-two)**() |
| character *8 function | **[text](/documentation/code/files/example_8f90/#function-text)**() |


## Functions Documentation

### function two

```
integer function two()
```


### function text

```
character *8 function text()
```




## Source code

```
!
! Dummy Fortran file to test CBGB
!

module m1
  integer i1,i2(2),i3(3)
  character*8 str
  common /dummy_block/ i1,i2,i3,str
contains
   integer function one()
      one = 1
   end function one
end module m1


integer function two()
  two = 2
end function two


CHARACTER*8 function text()
  text = "ABCDEFGH"
end function text

module ma
contains
   CHARACTER*4 function text()
      text = "abcd"
   end function text
end module ma

module mb
contains
   CHARACTER*6 function text()
      text = "abcdef"
   end function text
end module mb
```


-------------------------------

Updated on 2022-07-20 at 17:18:48 +0000
