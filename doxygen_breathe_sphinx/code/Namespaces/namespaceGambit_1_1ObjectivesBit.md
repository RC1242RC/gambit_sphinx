---
title: 'namespace Gambit::ObjectivesBit'

description: "[No description available]"

---






[No description available]

## Types

|                | Name           |
| -------------- | -------------- |
| typedef [Gambit::Models::safe_param_map](/documentation/code/classes/classgambit_1_1models_1_1safe__param__map/)< [Gambit::safe_ptr](/documentation/code/classes/classgambit_1_1safe__ptr/)< const double > > | **[map](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#typedef-map)**  |

## Functions

|                | Name           |
| -------------- | -------------- |
| std::vector< double > | **[get_arguments](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-get-arguments)**([map](/documentation/code/classes/classgambit_1_1models_1_1safe__param__map/) param) |
| void | **[gaussian](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-gaussian)**(double & loglike) |
| double | **[rosenbrock](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-rosenbrock)**(double x, double y) |
| double | **[rosenbrock](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-rosenbrock)**(std::vector< double > x) |
| void | **[rosenbrock](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-rosenbrock)**(double & loglike)<br>See [https://en.wikipedia.org/wiki/Rosenbrock_function](https://en.wikipedia.org/wiki/Rosenbrock_function).  |
| void | **[himmelblau](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-himmelblau)**(double & loglike)<br>See [https://en.wikipedia.org/wiki/Himmelblau%27s_function](https://en.wikipedia.org/wiki/Himmelblau%27s_function).  |
| void | **[mccormick](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-mccormick)**(double & loglike) |
| void | **[ackley](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-ackley)**(double & loglike)<br>See [https://en.wikipedia.org/wiki/Ackley_function](https://en.wikipedia.org/wiki/Ackley_function).  |
| void | **[eggbox](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-eggbox)**(double & loglike)<br>Test problem 2 from [https://arxiv.org/abs/1306.2144](https://arxiv.org/abs/1306.2144).  |
| void | **[rastrigin](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-rastrigin)**(double & loglike)<br>See [https://en.wikipedia.org/wiki/Rastrigin_function](https://en.wikipedia.org/wiki/Rastrigin_function).  |
| void | **[beale](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-beale)**(double & loglike) |
| double | **[logaddexp](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-logaddexp)**(double x, double y) |
| void | **[shells](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-shells)**(double & loglike)<br>Test problem 1 from [https://arxiv.org/abs/1306.2144](https://arxiv.org/abs/1306.2144).  |
| void | **[styblinski_tang](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-styblinski-tang)**(double & loglike) |
| void | **[easom](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-easom)**(double & loglike) |
| void | **[tf1](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-tf1)**(double & loglike)<br>Analytic function 1 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525).  |
| void | **[tf2](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-tf2)**(double & loglike)<br>Analytic function 2 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525).  |
| void | **[tf3](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-tf3)**(double & loglike)<br>Analytic function 3 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525).  |
| void | **[tf4](/documentation/code/namespaces/namespacegambit_1_1objectivesbit/#function-tf4)**(double & loglike)<br>Analytic function 4 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525).  |

## Types Documentation

### typedef map

```
typedef Gambit::Models::safe_param_map<Gambit::safe_ptr<const double> > Gambit::ObjectivesBit::map;
```



## Functions Documentation

### function get_arguments

```
std::vector< double > get_arguments(
    map param
)
```


### function gaussian

```
void gaussian(
    double & loglike
)
```


### function rosenbrock

```
double rosenbrock(
    double x,
    double y
)
```


### function rosenbrock

```
double rosenbrock(
    std::vector< double > x
)
```


### function rosenbrock

```
void rosenbrock(
    double & loglike
)
```

See [https://en.wikipedia.org/wiki/Rosenbrock_function](https://en.wikipedia.org/wiki/Rosenbrock_function). 

### function himmelblau

```
void himmelblau(
    double & loglike
)
```

See [https://en.wikipedia.org/wiki/Himmelblau%27s_function](https://en.wikipedia.org/wiki/Himmelblau%27s_function). 

### function mccormick

```
void mccormick(
    double & loglike
)
```


### function ackley

```
void ackley(
    double & loglike
)
```

See [https://en.wikipedia.org/wiki/Ackley_function](https://en.wikipedia.org/wiki/Ackley_function). 

### function eggbox

```
void eggbox(
    double & loglike
)
```

Test problem 2 from [https://arxiv.org/abs/1306.2144](https://arxiv.org/abs/1306.2144). 

### function rastrigin

```
void rastrigin(
    double & loglike
)
```

See [https://en.wikipedia.org/wiki/Rastrigin_function](https://en.wikipedia.org/wiki/Rastrigin_function). 

### function beale

```
void beale(
    double & loglike
)
```


### function logaddexp

```
double logaddexp(
    double x,
    double y
)
```


### function shells

```
void shells(
    double & loglike
)
```

Test problem 1 from [https://arxiv.org/abs/1306.2144](https://arxiv.org/abs/1306.2144). 

### function styblinski_tang

```
void styblinski_tang(
    double & loglike
)
```


### function easom

```
void easom(
    double & loglike
)
```


### function tf1

```
void tf1(
    double & loglike
)
```

Analytic function 1 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525). 

### function tf2

```
void tf2(
    double & loglike
)
```

Analytic function 2 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525). 

### function tf3

```
void tf3(
    double & loglike
)
```

Analytic function 3 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525). 

### function tf4

```
void tf4(
    double & loglike
)
```

Analytic function 4 from [https://arxiv.org/abs/2101.04525](https://arxiv.org/abs/2101.04525). 





-------------------------------

Updated on 2022-07-20 at 17:18:44 +0000