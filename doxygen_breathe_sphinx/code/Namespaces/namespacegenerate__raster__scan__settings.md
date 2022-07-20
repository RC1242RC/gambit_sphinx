---
title: 'namespace generate_raster_scan_settings'

description: "[No description available]"

---






[No description available]

## Attributes

|                | Name           |
| -------------- | -------------- |
| list | **[m2_data](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m2-data)**  |
| list | **[xsec_fb_data](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-fb-data)**  |
| list | **[xsec_uncert_fb_data](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-uncert-fb-data)**  |
| int | **[n](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-n)**  |
| int | **[N](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-n)**  |
| list | **[m2](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m2)**  |
| list | **[xsec_fb](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-fb)**  |
| list | **[xsec_uncert_fb](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-uncert-fb)**  |
| int | **[m1_min](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m1-min)**  |
| int | **[m1_step](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m1-step)**  |
| list | **[m1_raster](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m1-raster)**  |
| list | **[m2_raster](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m2-raster)**  |
| list | **[xsec_fb_raster](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-fb-raster)**  |
| list | **[xsec_uncert_fb_raster](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-uncert-fb-raster)**  |
| int | **[m1](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m1)**  |
| string | **[model_name](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-model-name)**  |
| string | **[m1_str](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m1-str)**  |
| string | **[m2_str](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-m2-str)**  |
| string | **[xsec_fb_str](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-fb-str)**  |
| string | **[xsec_uncert_fb_str](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-xsec-uncert-fb-str)**  |
| string | **[output](/documentation/code/namespaces/namespacegenerate__raster__scan__settings/#variable-output)**  |



## Attributes Documentation

### variable m2_data

```
list m2_data =  [100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000];
```


### variable xsec_fb_data

```
list xsec_fb_data =  [22670.1, 10034.8, 5180.86, 2953.28, 1807.39, 1165.09, 782.487, 543.03, 386.936, 281.911, 209.439, 158.06, 121.013, 93.771, 73.4361, 58.0811, 46.3533, 37.2636, 30.1656, 24.5798, 20.1372, 16.5706, 13.7303, 11.3975, 9.51032, 7.9595, 6.69356, 5.63562, 4.75843, 4.02646, 3.42026, 2.90547, 2.49667, 2.12907, 1.8164, 1.56893, 1.34352];
```


### variable xsec_uncert_fb_data

```
list xsec_uncert_fb_data =  [973.967, 457.604, 253.223, 154.386, 101.316, 68.8042, 48.7463, 35.4083, 26.3602, 20.0201, 15.4539, 12.0956, 9.61659, 7.73547, 6.2389, 5.05005, 4.16461, 3.46763, 2.88065, 2.40183, 2.04438, 1.70195, 1.43519, 1.21937, 1.04092, 0.885243, 0.769988, 0.654544, 0.564061, 0.478362, 0.412315, 0.366257, 0.314019, 0.26801, 0.242682, 0.217618, 0.175604];
```


### variable n

```
int n =  2;
```


### variable N

```
int N =  8;
```


### variable m2

```
list m2 =  m2_data[::n][:N];
```


### variable xsec_fb

```
list xsec_fb =  xsec_fb_data[::n][:N];
```


### variable xsec_uncert_fb

```
list xsec_uncert_fb =  xsec_uncert_fb_data[::n][:N];
```


### variable m1_min

```
int m1_min =  25.;
```


### variable m1_step

```
int m1_step =  50.;
```


### variable m1_raster

```
list m1_raster =  [];
```


### variable m2_raster

```
list m2_raster =  [];
```


### variable xsec_fb_raster

```
list xsec_fb_raster =  [];
```


### variable xsec_uncert_fb_raster

```
list xsec_uncert_fb_raster =  [];
```


### variable m1

```
int m1 =  m1_min;
```


### variable model_name

```
string model_name =  "ColliderBit_SLHA_scan_model";
```


### variable m1_str

```
string m1_str =  "\"" + model_name + "::m1\"" + ": [";
```


### variable m2_str

```
string m2_str =  "\"" + model_name + "::m2\"" + ": [";
```


### variable xsec_fb_str

```
string xsec_fb_str =  "\"" + model_name + "::xsec_fb\"" + ": [";
```


### variable xsec_uncert_fb_str

```
string xsec_uncert_fb_str =  "\"" + model_name + "::xsec_uncert_fb\"" + ": [";
```


### variable output

```
string output =  """

Scanner:

  use_scanner: raster

  scanners:

    raster:
      plugin: raster
      like: LogLike
      parameters:
        {}
        {}
        {}
        {}

""".format(m1_str, m2_str, xsec_fb_str, xsec_uncert_fb_str);
```





-------------------------------

Updated on 2022-07-20 at 17:18:42 +0000