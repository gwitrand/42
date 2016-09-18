#!/bin/sh

cat /etc/passwd | grep -v '\#' | sed '0n;N;s/.*\n//' | rev | cut -d: -f7 | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
