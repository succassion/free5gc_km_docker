It is Test code.

## Reference
**Reference GItHub : https://github.com/PrinzOwO/gtp5g**

**+Fixed build error. (Recently kernel version)**

## GTP5G Kernel Module Build/Install
```
$ cd gtp5g
$ make
$ sudo make install
```

## Check module
```
$ lsmod | grep  gtp
gtp5g                  94208  0
udp_tunnel             20480  2 gtp5g,vxlan
```
