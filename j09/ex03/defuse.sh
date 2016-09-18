#!/bin/sh

a=$(stat -s bomb.txt | grep -o -E "st_atime=\d+" | grep -o -E "\d+")
b=1
echo $((a-b))
echo $a