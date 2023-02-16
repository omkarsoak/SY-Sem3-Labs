echo "Printing even numbers between 1 and 10"
for i in {1..10}
do
	if [ $(($i % 2)) == 0 ];
    	then
        	echo "$i"
    	fi
done
