---
title: 'file scripts/get_entry_from_heplike.py'

description: "[No description available]"

---






[No description available]

## Namespaces

| Name           |
| -------------- |
| **[get_entry_from_heplike](/documentation/code/namespaces/namespaceget__entry__from__heplike/)**  |




## Source code

```
# !/usr/bin/python


if __name__ == '__main__':

    import sys
    import os
    from yaml import load

    try:
        from yaml import CLoader as Loader, CDumper as Dumper
    except ImportError:
        from yaml import Loader, Dumper

    try:
        for root, dirs, files in os.walk(sys.argv[1], topdown=False):
            for name in files:
                filename = os.path.join(root, name)
                if filename.endswith('.yaml'):
                    with open(filename, 'r') as f:
                        request = r'{}'.format(load(f, Loader=Loader)[str(sys.argv[2])])
                        print(repr(filename + ' : ' + request))
    except IndexError:
        sys.exit("Usage: arg1: directory arg2: key from yaml file")
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
