#no of digit..
echo "enter number"
read -r n #omitting backslash
count=0
while [ "$n" -gt 0 ] #quote for blackslash..
do
	n=$((n/10))
	count=$((count+1))
done
printf "no of digit is %d\n" $count