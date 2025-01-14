pow() {
	local no=$1
	local exp=$2
	local res=1
	while (("$exp" > 0)); do
		res=$((res * no))
		((exp--))
	done
	echo $res
}

echo "Enter number: "
read -r no
echo "Enter exponent: "
read -r exp
echo "power is : $(pow "$no" "$exp")"

#output
# Enter number:
# 5
# Enter exponent:
# 6
# Result: 15625
