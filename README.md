# bof(link) template

Simple modified version of the [TrustedSec BOF template](https://github.com/MEhrn00/boflink) that incorporates [boflink](https://github.com/MEhrn00/boflink) to make my life easier

Links against the common windows libs available in mingw-w64 in the makefile by default. If you need to add others, just add the required -l(libname) flags to the boflink commands e.g. ```-lkernel32 ```

just run ```make``` to build.

I dont own the original bof template or boflink.
Dummy code is in the entry.c as a placeholder to sanity check that boflink is working.

Credits:
- https://github.com/MEhrn00/boflink
- https://github.com/trustedsec/CS-Situational-Awareness-BOF/tree/master/src/base_template
