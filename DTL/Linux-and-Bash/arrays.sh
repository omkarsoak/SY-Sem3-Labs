declare -a arr
arr=("my" "name" "is" "omkar")
echo ${arr[2]}
for i in ${arr[@]}
do
	echo "$i"
done
