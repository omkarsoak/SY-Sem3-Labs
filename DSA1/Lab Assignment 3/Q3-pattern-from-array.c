/*PRINT PATTERN FROM ARRAY*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
}
int main()
{
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr1[size];
    printf("\nEnter the array:\n");
    for(int i=0;i<size;i++)  //scan the array
    {
        scanf("%d",&arr1[i]);
    }
    printf("Output pattern:\n");
    pattern(arr1,size);

    return 0;
}