It is Test Code.

## Reference 
**Reference GitHub : https://github.com/aligungr/UERANSIM**

## Install Required Tools
```
$ sudo apt update
$ sudo apt install make
$ sudo apt install g++
$ sudo apt install libsctp-dev lksctp-tools
$ sudo apt install iproute2
$ sudo snap install cmake --classic
```

## Build UERANSIM
```
$ make
```

## Changed Configuration
- config/free5gc-gnb.yaml
```
 linkIp: 127.0.0.1    # gNB's local IP address for Radio Link Simulation (Usually same with local IP)
 ngapIp: 10.100.0.107 # UERANSIM IP  # gNB's local IP address for N2 Interface (Usually same with local IP)
 gtpIp: 10.100.0.107  # UERANSIM IP  # gNB's local IP address for N3 Interface (Usually same with local IP)

 # List of AMF address information
 amfConfigs:
   - address: 10.100.0.105 # FREE5GC IP
     port: 38412
```
