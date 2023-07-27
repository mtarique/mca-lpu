a=0

while [ $a -lt 10 ]
do
echo -n $a
((a += 1))
done
echo