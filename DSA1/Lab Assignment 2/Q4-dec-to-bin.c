/*CONVERT DECIMAL TO BINARY*/
#include <stdio.h>
#include <stdlib.h>

//returns pointer to binary array
int* decimal_to_binary(int decimal,int *length)
{
    int* binary_arr1 = (int*)malloc(sizeof(int)*16);
    int* binary_arr2 = (int*)malloc(sizeof(int)*16);
    int i=0;
    //decimal to binary
    while(decimal>0)
    {
       if(decimal%2==0)
       {binary_arr1[i]=0;} 
       else
       {binary_arr1[i]=1;}
       decimal = decimal/2;
       i++;
    }
    *length = i;
    int length1 = *length;
    //reverse the array
    for(int i=0;i<length1;i++)
    {
        binary_arr2[i]=binary_arr1[length1-i-1];
    }
    return binary_arr2;
}

int number_of_ones(int* binary_arr,int length)
{
    int count=0;
    for(int i=0;i<length;i++)
    {
        if(binary_arr[i]==1)
        {count++;}
    }
    return count;
}

int main()
{
    int decimal=0;
    printf("Enter the number:");
    scanf("%d",&decimal);

    //decimal to binary
    int length_of_binary=0;
    int* ptr = decimal_to_binary(decimal,&length_of_binary);
    printf("The binary number is: ");
    for(int i=0;i<length_of_binary;i++)
    {
        printf("%d",ptr[i]);
    }

    //number of ones
    printf("\nNumber of ones are: %d\n",number_of_ones(ptr,length_of_binary));
    return 0;
}