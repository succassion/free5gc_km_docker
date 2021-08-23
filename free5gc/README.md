It is Test Code.

## Reference
**Reference GitHub : https://github.com/free5gc/free5gc**

## Check and Change golang version
(Need go1.14.4)
```
$ sudo rm -rf /usr/local/go
$ wget https://dl.google.com/go/go1.14.4.linux-amd64.tar.gz
$ sudo tar -C /usr/local -zxvf go1.14.4.linux-amd64.tar.gz

$ vi /home/kube/.profile
+ export GOROOT=/usr/local/go
+ export GOPATH=$HOME/go
+ export PATH=$GOPATH/bin:$GOROOT/bin:$PATH

# Update current shell session
$ source .profile

# Re-Check go version
$ go version
go version go1.14.4 linux/amd64
```

## Install Mongodb
```
$ sudo apt -y update
$ sudo apt -y install mongodb wget git
$ sudo systemctl start mongodb
```

## User-Plane Supporting Packages
```
$ sudo apt -y update
$ sudo apt -y install git gcc g++ cmake autoconf libtool pkg-config libmnl-dev libyaml-dev
$ go get -u github.com/sirupsen/logrus
```

## Linux Host Network Setting
```
$ sudo sysctl -w net.ipv4.ip_forward=1
$ sudo iptables -t nat -A POSTROUTING -o enp0s3 -j MASQUERADE
$ sudo iptables -t nat -S
-A POSTROUTING -o enp0s3 -j MASQUERADE

$ sudo iptables -I FORWARD 1 -j ACCEPT
$ sudo iptables -S
-A FORWARD -j ACCEPT

$ sudo iptables -A FORWARD -p tcp -m tcp --tcp-flags SYN,RST SYN -j TCPMSS --set-mss 1400
$ sudo systemctl stop ufw
```

## Install Control Plane Elents
```
$ cd ~/free5gc
$ make
```

## Set User-Plane Configuration
- config/amfcfg.yaml
```
 configuration:
   amfName: AMF # the name of this AMF
   ngapIpList:  # the IP list of N2 interfaces on this AMF
     - 10.100.0.105 # FREE5GC IP
   sbi: # Service-based interface information
     scheme: http # the protocol for sbi (http or https)
     registerIPv4: 127.0.0.18 # IP used to register to NRF
```
- config/smfcfg.yaml
```
         interfaces: # Interface list for this UPF
           - interfaceType: N3 # the type of the interface (N3 or N9)
             endpoints: # the IP address of this N3/N9 interface on this UPF
               - 10.100.0.105 # FREE5GC IP
             networkInstance: internet # Data Network Name (DNN)
     links: # the topology graph of userplane, A and B represent the two nodes of each link
       - A: gNB1
```
- NFs/upf/build/config/upfcfg.yaml
```
# The IP list of the N3/N9 interfaces on this UPF
  # If there are multiple connection, set addr to 0.0.0.0 or list all the addresses
  gtpu:
    - addr: 10.100.0.105 # FREE5GC IP
    # [optional] gtpu.name
    # - name: upf.5gc.nctu.me
    # [optional] gtpu.ifname
    # - ifname: gtpif
```

## Install WebConsle
```
# Checkout WebConsole version
$ cd ~/free5gc/webconsole
$ git checkout v1.0.1

# Build WebConsole
$ cd ~/free5gc
$ make webconsole

# Rrun WebConsole server
$ cd ~/free5gc
$ ./webconsole/bin/webconsole
```

## WebConsole 
- <WebConsole's server's IP>:5000
- Username: admin
- Password: free5gc
