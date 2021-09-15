#!/bin/bash

set -e

if [ $# -lt 1 ]
then
         echo "Usage : $0 [gnb|ue]"
         exit
fi

command=$1
case "$command" in
ue)   echo "Launching ue: nr-ue -c ue.yaml"
     if [[ ! -z "${GNB_HOSTNAME}" ]] ; then
         export GNB_ADDR="$(host -4 $GNB_HOSTNAME |awk '/has.*address/{print $NF; exit}')"
     fi
     echo "ue) Find GNB_ADDR : $GNB_ADDR"
     envsubst < /config/free5gc-ue.yaml > free5gc-ue.yaml
     /usr/local/build/nr-ue -c free5gc-ue.yaml
     ;;

gnb)  echo "Launching gnb: nr-gnb -c free5gc-gnb.yaml"
     if [[ ! -z "${UE_HOSTNAME}" ]] ; then
         export GNB_ADDR="$(host -4 $GNB_HOSTNAME |awk '/has.*address/{print $NF; exit}')"
     fi
     if [[ ! -z "${AMF_HOSTNAME}" ]] ; then
         export AMF_ADDR="$(ip route | awk '{print $3; exit}')"
     fi
     echo "gnb) Find GNB_ADDR : $GNB_ADDR, AMF_ADDR Gateway : $AMF_ADDR"
     envsubst < /config/free5gc-gnb.yaml > free5gc-gnb.yaml
     /usr/local/build/nr-gnb -c free5gc-gnb.yaml
     ;;

*) echo "unknown component $1 is not a component (gnb or ue). Running $@ as command"
    $@
    ;;
esac
