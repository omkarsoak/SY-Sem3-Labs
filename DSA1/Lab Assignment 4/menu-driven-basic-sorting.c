/*MENU DRIVEN PROGRAM FOR SORTING
BUUBLE SORT, SELECTION SORT & INSERTION SORT*/
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/*BUBBLE SORT*/
void bubble_sort(int arr[],int n)  //iterative
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


/*INSERTION SORT*/
void insertion_sort(int arr[],int n) 
{
    int j,key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j]=key;
    }
}

/*SELECTION SORT*/
void selection_sort(int arr[],int n) 
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

int main()
{
    int arr[] = {2,5,6,33,1,9};  //initial array
    int size = sizeof(arr)/sizeof(arr[0]);
    int menu=0,num=0;
    print_array(arr,size);
    printf("Menu Driven program for sorting:\n");
    printf("1 for bubble sort\n");
    printf("2 for insertion sort\n");
    printf("3 for selection sort\n");
  
    printf("4 To Quit\n");
    
    do
    {
        printf("Enter the menu number: ");
        scanf("%d",&menu);
        printf("\n");
        switch (menu)
        {
        case 1: 
        bubble_sort(arr,size);
        printf("After sort: ");
        print_array(arr,size); break;

        case 2: 
        insertion_sort(arr,size);
        printf("After sort: "); 
        print_array(arr,size); break;

        case 3:
        selection_sort(arr,size);
        printf("After sort: "); 
        print_array(arr,size); break;

        default: break;
        }

    } while(menu!=4);
    printf("Exited from menu driven program\n");
    return 0;
}