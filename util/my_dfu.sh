#!/bin/sh

i=5
while [ $i -ge 0 ]; do
    echo -n "$i "
    sleep 1
    i=$(($i - 1))
done
echo

set -x
sudo dfu-programmer atmega32u4 erase
sleep 1
sudo dfu-programmer atmega32u4 flash $1
sleep 1
sudo dfu-programmer atmega32u4 reset
set +x
