#. Write a shell script to check whether the file have all the permissions or not.
# Checking the file permission

echo -e "enter file name to check: "
read file
flag=false
if [ -f $file ]; then
	echo "file exist"
	flag=true
else
	echo "file does not exist"
fi

# if [ $flag = true ]; then
# 	case -f $file ))
	