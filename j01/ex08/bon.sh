#!/bin/sh

ldapsearch -Q | grep sn: | grep BON | wc -l | tr -d ' '
