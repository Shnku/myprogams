function C() {
	n=$1
	x=$2
	if [ $x -gt $n ]; then
		echo "0"
	elif [ $x -eq 0 ]; then
		echo "1"
	else
		echo $(($n - $x + 1))
	fi
}



