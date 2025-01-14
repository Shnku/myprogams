function factorial() {
	n=$1
	result=0
	if [ "$n" -eq 0 ] || [ "$n" -eq 1 ]; then
		echo "result 1"
		result=1
	else
		t1=$(($n - 1))
		echo "t1=$t1"
		tmp=$(factorial $t1)
		echo "tmp=$tmp"
		result=$(($n * $tmp))
		echo "rsult=$result"
	fi
	return $result
}

function facto() {
	nth=$1
	# fact=1
	if ((nth == 0 || nth == 1)); then
		echo "1"
	else
		echo "$(("$nth" * $(facto $(("$nth" - 1)))))"
	fi
}

factorial 4
echo "facto of __ is $?"

printf "\n\nUSING ECHO facto....%d\n" "$(facto 5)"

# t1=3
# factorial.sh: line 12: 2 * result 1: syntax error in expression (error token is "1")
# factorial.sh: line 12: 3 * t1=1
# tmp=result 1: attempted assignment to non-variable (error token is "=1
# tmp=result 1")
# tmp=t1=2
# tmp=t1=1
# tmp=result 1
# factorial.sh: line 12: 4 * t1=2
# tmp=t1=1
# tmp=result 1: attempted assignment to non-variable (error token is "=2
# tmp=t1=1
# tmp=result 1")
# facto of __ is 1

# USING ECHO facto....120

####note..
#do not use return in function.. it doesnot work as other programming langs...
#this is foe shell limitations..
