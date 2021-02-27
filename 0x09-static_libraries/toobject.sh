#!/bin/bash
for cfiles in ./*.c
do
gcc -c $cfiles
echo "$cfiles"
done
exit 0
