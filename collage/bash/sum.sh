echo "enter a no: "
read no1
echo "enter 2nd no: "
read no2

echo "sum is $(($no1 + $no2))"
echo "sub is $(($no1 - $no2))"
echo "mul is $(($no1 * $no2))"
echo "div is $(($no1 / $no2))"
echo "mod is $(($no1 % $no2))"
echo "pow is $(($no1 ** $no2))"
a=$(("$no1" * 3 * "$no2"))
echo $a

# (($no1++)) #invalid
# echo "inc is $no1"
# echo "inc is $(("$no1"++))"
# echo "dec is $(($no1--))"
# echo "mod is $(($no1%=10))"

no1=5
# Pre-increment effect
echo "no1 is $no1" # Output: no1 is 5
no1=$(($no1 + 1))

# Post-increment effect (print before increment)
no1=$(($no1 + 1))
echo "no1 is $no1" # Output: no1 is 7

# Pre-decrement effect
no1=$(($no1 - 1))
echo "no1 is $no1" # Output: no1 is 6

# Post-decrement effect (print before decrement)
no1=$(($no1 - 1))
echo "no1 is $no1" # Output: no1 is 5
