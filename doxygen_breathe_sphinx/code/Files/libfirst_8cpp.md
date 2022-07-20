---
title: 'file examples/libfirst.cpp'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **[initialize](/documentation/code/files/libfirst_8cpp/#function-initialize)**(int a) |
| void | **[someFunction](/documentation/code/files/libfirst_8cpp/#function-somefunction)**() |
| double | **[byRefExample](/documentation/code/files/libfirst_8cpp/#function-byrefexample)**(double & input) |
| void | **[byRefExample2](/documentation/code/files/libfirst_8cpp/#function-byrefexample2)**(double & input, double input2) |
| double | **[returnResult](/documentation/code/files/libfirst_8cpp/#function-returnresult)**() |
| double | **[nastyExample](/documentation/code/files/libfirst_8cpp/#function-nastyexample)**(int count, ... ) |
| double | **[arrayarg_1D](/documentation/code/files/libfirst_8cpp/#function-arrayarg-1d)**(double arg[10]) |
| double | **[arrayarg_2D](/documentation/code/files/libfirst_8cpp/#function-arrayarg-2d)**(double arg[10][10]) |
| double | **[arrayarg_3D](/documentation/code/files/libfirst_8cpp/#function-arrayarg-3d)**(double arg[10][10][10]) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| const int | **[array_length](/documentation/code/files/libfirst_8cpp/#variable-array-length)**  |
| int | **[someInt](/documentation/code/files/libfirst_8cpp/#variable-someint)**  |
| double | **[someDouble](/documentation/code/files/libfirst_8cpp/#variable-somedouble)**  |
| double | **[someArray](/documentation/code/files/libfirst_8cpp/#variable-somearray)**  |
| std::vector< double > | **[someVector](/documentation/code/files/libfirst_8cpp/#variable-somevector)**  |
| bool | **[isInitialized](/documentation/code/files/libfirst_8cpp/#variable-isinitialized)**  |
| std::string | **[prefix](/documentation/code/files/libfirst_8cpp/#variable-prefix)**  |


## Functions Documentation

### function initialize

```
void initialize(
    int a
)
```


### function someFunction

```
void someFunction()
```


### function byRefExample

```
double byRefExample(
    double & input
)
```


### function byRefExample2

```
void byRefExample2(
    double & input,
    double input2
)
```


### function returnResult

```
double returnResult()
```


### function nastyExample

```
double nastyExample(
    int count,
    ... 
)
```


### function arrayarg_1D

```
double arrayarg_1D(
    double arg[10]
)
```


### function arrayarg_2D

```
double arrayarg_2D(
    double arg[10][10]
)
```


### function arrayarg_3D

```
double arrayarg_3D(
    double arg[10][10][10]
)
```



## Attributes Documentation

### variable array_length

```
const int array_length = 10;
```


### variable someInt

```
int someInt;
```


### variable someDouble

```
double someDouble;
```


### variable someArray

```
double someArray;
```


### variable someVector

```
std::vector< double > someVector;
```


### variable isInitialized

```
bool isInitialized = false;
```


### variable prefix

```
std::string prefix = "libfirst: ";
```



## Source code

```
/*
 * A dummy C++ library for testing GAMBIT backend setup 
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <cstdarg>

//
// Some global variables:
//
const int array_length = 10;
int someInt;
double someDouble;
double someArray[array_length];
std::vector<double> someVector;
bool isInitialized = false;
std::string prefix = "libfirst: ";

//
// Some functions:
//

// 'initialization'
void initialize(int a)
{
  std::cout << std::endl;
  std::cout << prefix << "This is function 'initialize'." << std::endl;
  someInt = a;
  for ( int x = 0; x < array_length; x++ ) { someArray[x] = 2.0*x; }
  someVector.push_back(1.5);
  someVector.push_back(1.6);
  isInitialized = true;
  std::cout << prefix << "Initialization done. Variable 'someInt' set to: " << someInt << std::endl;
} // end initialize


// 'calculation'
void someFunction()
{
  std::cout << std::endl;
  std::cout << prefix << "This is function 'someFunction'." << std::endl;

  if (isInitialized)
  {
    std::cout << prefix << "Will now perform a calculation..." << std::endl;
    someDouble = 3.1415*someInt;
    std::cout << prefix << "Result stored in variable 'someDouble' is: " << someDouble << std::endl;
  }
  else
  {
    std::cout << prefix << "Not initialized. Cannot perform calculation." << std::endl;
  }
} // end someFunction


// 'byRefExample'
double byRefExample (double& input)
{
  std::cout << prefix << "This is function 'byRefExample'." << std::endl;
  input = someDouble = 2.0*someInt;
  return 2.1*someInt;
}


// 'byRefExample2'
void byRefExample2 (double& input, double input2)
{
  std::cout << prefix << "This is function 'byRefExample2'." << std::endl;
  input = someDouble = 2.3*someInt + input2;
}


// return 'result'
double returnResult()
{
  std::cout << "I'm returnResult() from libfirst.so, and I'm feeling well." << std::endl;
  return someDouble;
}


// an example variadic function
double nastyExample(int count, ...)
{
  double result = 0;
  va_list args;
  va_start(args, count);
  for (int i = 0; i < count; ++i)
  {
    result += va_arg(args, double);
  }
  va_end(args);
  return result;
}

// an example function taking a 1D array as an argument
double arrayarg_1D(double arg[10])
{
  return arg[0]*arg[9]; 
}

// an example function taking a 1D array as an argument
double arrayarg_2D(double arg[10][10])
{
  return arg[0][0]*arg[9][0]*arg[9][9]; 
}

// an example function taking a 1D array as an argument
double arrayarg_3D(double arg[10][10][10])
{
  return arg[0][0][0]*arg[9][0][0]*arg[9][9][9]; 
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:46 +0000
