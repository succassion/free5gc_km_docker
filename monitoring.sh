#!/bin/bash

#monitoring Tool

while : 
do 
	clear
	echo "Network Configuration(5sec)" 
	#kubectl -n free5gc-k8s get pods -l "project=free5gc"
        kubectl -n free5gc-k8s get pods
	#ifconfig
	sleep 5
done
