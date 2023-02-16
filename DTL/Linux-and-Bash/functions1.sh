print_it(){
	echo Hello $1
	return 5
}
print_it omkar
print_it oak
echo "the function returned $?"
