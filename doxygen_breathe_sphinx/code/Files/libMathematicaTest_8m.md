---
title: 'file examples/libMathematicaTest.m'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| (*) ::Package(*) ::Section(*) Dummy(*) author(*) t dat | **[CalculateSquare](/documentation/code/files/libmathematicatest_8m/#variable-calculatesquare)**  |
| CalculateSum[var1_, var2_] | **[__pad0__](/documentation/code/files/libmathematicatest_8m/#variable---pad0--)**  |
| | **[Var2](/documentation/code/files/libmathematicatest_8m/#variable-var2)**  |
| PrintVar[] | **[__pad1__](/documentation/code/files/libmathematicatest_8m/#variable---pad1--)**  |
| PrintVarorVar2[check_] | **[__pad2__](/documentation/code/files/libmathematicatest_8m/#variable---pad2--)**  |
| PrintVarorVar2[check_] | **[Var](/documentation/code/files/libmathematicatest_8m/#variable-var)**  |
| VarEqualVar2[] | **[__pad3__](/documentation/code/files/libmathematicatest_8m/#variable---pad3--)**  |
| VarEqualVar2[]<> | **[ToString](/documentation/code/files/libmathematicatest_8m/#variable-tostring)**  |
| VoidTest[] | **[__pad4__](/documentation/code/files/libmathematicatest_8m/#variable---pad4--)**  |
| ExtractElement[list_, i_] | **[__pad5__](/documentation/code/files/libmathematicatest_8m/#variable---pad5--)**  |
| ExtractElement[list_, i_] | **[func](/documentation/code/files/libmathematicatest_8m/#variable-func)**  |



## Attributes Documentation

### variable CalculateSquare

```
(*) ::Package(*) ::Section(*) Dummy(*) author(*) t dat CalculateSquare;
```


### variable __pad0__

```
CalculateSum[var1_, var2_] __pad0__;
```


### variable Var2

```
Var2 =2.5;
```


### variable __pad1__

```
PrintVar[] __pad1__;
```


### variable __pad2__

```
PrintVarorVar2[check_] __pad2__;
```


### variable Var

```
PrintVarorVar2[check_] Var;
```


### variable __pad3__

```
VarEqualVar2[] __pad3__;
```


### variable ToString

```
VarEqualVar2[]<> ToString;
```


### variable __pad4__

```
VoidTest[] __pad4__;
```


### variable __pad5__

```
ExtractElement[list_, i_] __pad5__;
```


### variable func

```
ExtractElement[list_, i_] func {i,Length[list]}]


\[Delta]var = 75;
```



## Source code

```
(* ::Package:: *)

(* ::Section:: *)
(* Dummy Mathematica package for testing *)


(* \author Tomas Gonzalo *)
(*         t.e.gonzalo@fys.uio.no *)
(* \date 2016 Sept *)



CalculateSquare[var_] := var^2;


CalculateSum[var1_,var2_]:=var1+var2


Var=42;


Var2=2.5;


PrintVar[]:=Var;


PrintVarorVar2[check_]:=If[check,Var,Var2];


VarEqualVar2[]:=Var==Var2


StringTest[var_]:="This is not a test, "<>ToString[var];


VoidTest[]:=Var=Var+1;


ExtractElement[list_,i_]:=list[[i]]


SquareList[list_]:=Table[list[[i]]^2,{i,Length[list]}]


\[Delta]var = 75;


\[CapitalGamma]func[var_] := var + 2;
```


-------------------------------

Updated on 2022-07-20 at 17:18:47 +0000
