#!/bash/sh

sysctl -w net.ipv4.ip_forward=1

echo "\033[33m"Set iptables -t nat -A POSTROUTING -o enp0s3 -j MASQUERADE"\033[0m"
iptables -t nat -A POSTROUTING -o enp0s3 -j MASQUERADE

echo "\033[31m"Stop ufw"\033[0m"
systemctl stop ufw
systemctl status ufw

echo "\033[35m"Set iptables -I FORWARD 1 -j ACCEPT"\033[0m"
iptables -I FORWARD 1 -j ACCEPT
