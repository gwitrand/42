#!/bin/bash

ldapsearch "uid=Z*" | grep "cn:" | sort -r -f | cut -c5-
