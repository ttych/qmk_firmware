#!/bin/sh

sudo dfu-programmer atmega32u4 erase
sleep 1
sudo dfu-programmer atmega32u4 flash $1
sleep 1
sudo dfu-programmer atmega32u4 reset
