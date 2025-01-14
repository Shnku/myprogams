function gcd() {
	a=$1
	b=$2
	while [ "$b" -ne 0 ]
	do # space is necessary around []
		min=$b
		b=$((a % b))
		a=$min
	done
	echo "$a"
}

function lcm() {
	a=$1
	b=$2
	mul=$((a * b))
	c=$(gcd "$a" "$b")
	echo $((mul / c))
}

#When you use return in a Bash function, it sets the return status of the function, not the value to be returned. The return status is an integer value that indicates the success or failure of the function execution.
#To capture the output of a function in Bash, you typically use command substitution, which involves enclosing the function call within $() to capture the output as a string. This is why using echo to output the result of a function and then capturing that output using command substitution is a common approach in Bash scripting.
###
# Call the lcm function and capture the result

echo "Enter two numbers: "
read -r x y
g=$(gcd "$x" "$y")
p=$(lcm "$x" "$y")
printf "GCD is %d \nlcm is %d\n" "$g" "$p"
