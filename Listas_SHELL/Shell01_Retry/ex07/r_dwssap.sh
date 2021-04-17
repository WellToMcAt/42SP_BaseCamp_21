#!/bin/bash

cat /etc/passwd | cut -d ":" -f 1 | sed -n "0~2p" | rev | sort -r | sed ''$FT_LINE1','$FT_LINE2'!d' | tr "\n" " " | sed 's/ /, /g' | sed 's/, $/./g'
