#!/bin/bash
PS3="Choose your favourite fruite from the list: "
select FRUIT in apple banana blueberry kiwi orange watermelon STOP
do
if [ $FRUIT == "" ]; then
echo "Invalid entry\n"
continue
elif [ $FRUIT = STOP]; then 
echo "Thanks for playing!"
fi
echo "You choose $FRUIT as your favourite fruit."
echo "That is choice number $REPLY.\n"
done