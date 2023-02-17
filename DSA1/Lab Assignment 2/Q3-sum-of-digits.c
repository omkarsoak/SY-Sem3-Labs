/* sum of digits at even location in a given number*/
#include <stdio.h>
#include <stdlib.h>
//funtion to find power of number
int power(int X, int Y) 
{
	int power = 1, i;
	for (i = 1; i <= Y; ++i)
    {
		power = power * X;
	}
	return power;
}

int main()
{
    int num=0;
    printf("Enter the number:");
    scanf("%d",&num);

    //enter digits of number into array
    int arr[10]={0};
    int i=0;
    while(num>0)
    {
        arr[i] = (num%power(10,i+1))/(power(10,i));
        num = num - num%power(10,i+1);
        i++;
    }

    //length of number
    int length = i;

    //add to sum
    int sum=0;
    if(length%2==0)  //if length is even
    {
        for(int i=0;i<length;i++)
        {
            if(i%2!=0)
            {sum += arr[i];}
        }
    }
    else   //if length is odd
    {
       for(int i=0;i<length;i++)
        {
            if(i%2==0)
            {sum += arr[i];}
        } 
    }
    //Answer
    printf("%d\n",sum);

    return 0;
}