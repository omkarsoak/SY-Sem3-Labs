/*FIND THE CLOSEST LESSER AND GREATER NUMBER 
IN THE ARRAY, TO THE GIVEN NUMBER*/
#include <stdio.h>
#include <stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {swap(&arr[j], &arr[j+1]);}
        }
    }          
}

int main()
{
    int arr[] = {2,6,4,66,41,57,8};  //array
    int size = sizeof(arr)/sizeof(int);   //size of array
    int num=0;
    printf("enter the number: ");
    scanf("%d",&num);  //input the number
    bubbleSort(arr,size);  //sort the array
    int less=arr[0],greater=arr[size-1];
    
    for(int i=0;i<=size;i++)
    {
        if(arr[i]>num && arr[i]<greater)
        {
            greater = arr[i];
        }
        else if (arr[i]<num && arr[i]>=less)
        {
            less = arr[i];
        }
    }
    printf("Lesser number is: %d\n",less);
    printf("Greater number is: %d\n",greater);
    return 0;
}