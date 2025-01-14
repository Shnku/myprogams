echo "enter the no: "
read -r no
copy=$no

while [ $no -gt 0 ]; do
	# digit=$(($digit + 1))
	((digit++))
	# no=$(($no / 10))
	((no /= 10)) 
done
echo "no of digit $digit"

sum=0
no=$copy
while [ $no -gt 0 ]; do
	reminder=$(($no % 10))
	# sum=$(($sum + $(("$reminder" ** "$digit"))))
	((sum += reminder ** digit))
	echo "sum += $reminder^$digit = $sum"
	no=$(($no / 10))
done

if [ $sum -eq $copy ]; then
	echo "armstrong"
else
	echo "not armstrong"
fi

#output
# enter the no: 
# 24
# no of digit 2
# sum += 4^2 = 16
# sum += 2^2 = 20
# not armstrong
# ~/FarflungFoolhardyPlanes$ bash armstrong.sh 
# enter the no: 
# 153
# no of digit 3
# sum += 3^3 = 27
# sum += 5^3 = 152
# sum += 1^3 = 153
# armstrong
# ~/FarflungFoolhardyPlanes$ bash armstrong.sh 
# enter the no: 
# 1634
# no of digit 4
# sum += 4^4 = 256
# sum += 3^4 = 337
# sum += 6^4 = 1633
# sum += 1^4 = 1634
# armstrong