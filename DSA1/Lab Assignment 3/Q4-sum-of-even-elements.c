/*calculates the sum of even elements of an integer array of size 20*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int sum=0;
    for(int i=0;i<20;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("The sum is: %d\n",sum);
    return 0;
}