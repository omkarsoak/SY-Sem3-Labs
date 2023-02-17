/*REVERSING ARRAY WITHOUT USING ANOTHER ARRAY*/
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int*b)   //SWAP TWO NUMBERS(PASS BY REFERENCE)
{
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void display_arr(int array[], int length)
{
  for(int i=0; i<length; i++)
  {
    printf("%d ",array[i]);
  }
  printf("\n"); 
}
void reverse_array(int array[],int length)
{
    int i=0,j=length-1;
    while(i<j)
    {
        swap(&array[i],&array[j]);
        i++;
        j--;
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
    printf("Original array: ");
    display_arr(arr1,size);   //original array
    reverse_array(arr1,size);
    printf("Reversed array: ");
    display_arr(arr1,size);  //Reversed array
    return 0;
}