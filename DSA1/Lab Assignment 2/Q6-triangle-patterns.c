/*PATTERN PRINTING*/
#include <stdio.h>
#include <stdlib.h>

void star_pattern(int rows)  //pyramid
{
    int spaces=1,j=0;
    for(int i=1;i<=rows;i++,j=0)  //control rows
    {
        for(int spaces=1;spaces<=rows-i;spaces++)  //control spaces in the rows
        {
            printf("  ");  //contains 2 blocks, 2 spaces
        }
        while (j!=2*i-1)   //print 1,3,5...(odd no.) of '*'s
        {
            printf("* ");  //'* ' contains 2 blocks, star and space
            j++;
        }
        printf("\n");
    }
}

void floyds_triangle(int rows)
{   
    int number=1;
    for(int i=1;i<=rows;i++)  //control rows
    {
        for(int j=1;j<=i;j++)   //control columns
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
}

void binary_pattern(int rows)
{
    int spaces=1,k=0,count=0;
    for(int i=1;i<=rows;i++)   //control rows
    {
        count =0;  //as we need pattern to start from 0
        for(int j=1;j<=i;j++)   //control 1st set of pattern
        {
            printf("%d ",count);
            count = !count;   //reverses binary 0 to 1 and 1 to 0
        }
        
        for(spaces=1;spaces<=rows-i;spaces++)    //control spaces
        {
            printf("   ");   //3 blocks of spaces
        }

        count=0;   //as we need pattern to start from 0
        for(int j=1;j<=i;j++)  //control 2nd set of pattern
        {
            printf("%d ",count);
            count = !count;
        }
        
        printf("\n");
    }
}

void pascals_triangle(int rows)
{
    int spaces=0,coefficient=0;
    for (int i = 0; i < rows; i++)  //controls rows
    {
        for (spaces = 1; spaces <= rows - i; spaces++)   //controls spaces
        {
            printf("  ");  //2 blocks of spaces
        }

        for (int j = 0; j <= i; j++)   //controls pattern
        {
            if (j == 0 || i == 0)   //as we require 1st row to be ones
            {
                coefficient = 1; 
            }   
            else
            {
                coefficient = coefficient * (i - j + 1) / j;
            }
            printf("%4d", coefficient);   //prints 4 spaces before printing coefficient
        }
        printf("\n");
    }
}

int main()
{
    int num=0;
    printf("Enter the number of lines: ");
    scanf("%d",&num);
    star_pattern(num);
    floyds_triangle(num);
    binary_pattern(num);
    pascals_triangle(num);
    return 0;
}