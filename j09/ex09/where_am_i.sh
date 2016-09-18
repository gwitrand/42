#!/bin/sh

ifconfig | grep "inet " | cut -d" " -f2