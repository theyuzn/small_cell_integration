#!/bin/bash
#!/bin/sh

NAME=o-ran
NAME=$1

sudo modprobe dummy
sudo ip link add $NAME type dummy
ip link show $NAME

sudo ifconfig $NAME hw ether C8:D7:4A:4E:47:50
sudo ip addr add 192.168.130.1/24 brd + dev $NAME
sudo ip link set dev $NAME up
