echo -e "enter val1: \c"
read a
echo -e "enter val2: \c"
read b

# a=9
# b=10
if (($a < $b))
then 
	echo "a is less than b"
elif [ $a -gt $b ]
then
	echo "a is greater than b"
else
	echo "equal"
fi

echo -e "\n\t___string .....if else \n"
read -p "entr string1 : " string1
read -p "entr string2 : " string2
if [ "$string1" = "$string2" ] #== and = same
then
	echo "string1 is equal to string2"
else
	echo "string1 is not equal to string2"
fi


# enter val1: 12
# enter val2: 23
# a is less than b

# 	___string .....if else 

# entr string1 : abc
# entr string2 : abcc
# string1 is not equal to string2

