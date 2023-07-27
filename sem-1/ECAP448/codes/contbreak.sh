#!/bin/bash

for index in 1 2 3 4 5 6 7 8 9 10
do
if [ $index -le 3 ]; then
echo "Continue the execution"
continue
fi
#
echo $index
#
if [ $index -ge 8 ]; then
echo "Terminating the execution"
break
fi
done