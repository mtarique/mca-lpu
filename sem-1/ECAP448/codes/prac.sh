#!/bin/sh

a=1
b=2

if [ $a == $b ]
then 
echo "Hi Tarique, a and b are equal"
elif [ $a -gt $b ]
then
echo "a is greater than b"
else 
echo "a is less than b"
fi
