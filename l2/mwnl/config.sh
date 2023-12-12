#!/bin/bash
#!/bin/sh

echo "Config the internet interface"

echo "Your net interface is : $1"
ifconfig $1:ODU 192.168.130.81
ifconfig $1:OAI_CU 192.168.130.83
ifconfig $1:CU_STUB 192.168.130.82
ifconfig $1:RIC_STUB 192.168.130.80

