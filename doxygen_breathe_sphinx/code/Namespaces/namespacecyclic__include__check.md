---
title: 'namespace cyclic_include_check'

description: "[No description available]"

---






[No description available]

## Functions

|                | Name           |
| -------------- | -------------- |
| def | **[checkLoop](/documentation/code/namespaces/namespacecyclic__include__check/#function-checkloop)**(fle fle, ref ref, prev prev) |

## Attributes

|                | Name           |
| -------------- | -------------- |
| list | **[IncludeDirs](/documentation/code/namespaces/namespacecyclic__include__check/#variable-includedirs)**  |
| list | **[files](/documentation/code/namespaces/namespacecyclic__include__check/#variable-files)**  |
| | **[fs](/documentation/code/namespaces/namespacecyclic__include__check/#variable-fs)**  |
| dictionary | **[includes](/documentation/code/namespaces/namespacecyclic__include__check/#variable-includes)**  |
| | **[infile](/documentation/code/namespaces/namespacecyclic__include__check/#variable-infile)**  |
| | **[inp](/documentation/code/namespaces/namespacecyclic__include__check/#variable-inp)**  |
| | **[lines](/documentation/code/namespaces/namespacecyclic__include__check/#variable-lines)**  |
| | **[lineL](/documentation/code/namespaces/namespacecyclic__include__check/#variable-linel)**  |
| | **[st2](/documentation/code/namespaces/namespacecyclic__include__check/#variable-st2)**  |
| list | **[prev](/documentation/code/namespaces/namespacecyclic__include__check/#variable-prev)**  |
| def | **[loop](/documentation/code/namespaces/namespacecyclic__include__check/#variable-loop)**  |


## Functions Documentation

### function checkLoop

```
def checkLoop(
    fle fle,
    ref ref,
    prev prev
)
```



## Attributes Documentation

### variable IncludeDirs

```
list IncludeDirs =  [
    './Core/include',
#    './ModelBit/include',
    './Utils/include',
    './Printers/include',
    './ScannerBit/include',
    './Backends/include',    
    './ColliderBit/include',    
    './DarkBit/include',    
    './FlavBit/include',    
    './ExampleBit_A/include',    
    './ExampleBit_B/include',    
    './Example_SUSYspecBit/include'
];
```


### variable files

```
list files =  [];
```


### variable fs

```
fs =  os.listdir(d);
```


### variable includes

```
dictionary includes =  {};
```


### variable infile

```
infile =  open(f[0]+'/'+f[1]);
```


### variable inp

```
inp =  infile.read();
```


### variable lines

```
lines =  inp.splitlines();
```


### variable lineL

```
lineL =  line.split();
```


### variable st2

```
st2 =  st.replace("\"","" ).replace(">","" ).replace("<","" );
```


### variable prev

```
list prev =  [];
```


### variable loop

```
def loop =  checkLoop(f,f,prev);
```





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000