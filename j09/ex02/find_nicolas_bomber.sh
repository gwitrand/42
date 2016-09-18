#!/bin/sh

cat $1 | grep -o -E "(bomber|Bomber).+" | grep -o -E "(\d{2,10}\-\d+){1,3}"