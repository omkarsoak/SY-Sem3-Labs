/*PRINTING ASCII VALUES OF CHARACTERS*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    printf("For uppercase letters:\n");
    for(c=65;c<=90;c++)
    {
        printf("The ASCII value of %c is %d\n",c,c);
    }
    printf("\nFor lowercase letters:\n");
    for(c=97;c<=122;c++)
    {
        printf("The ASCII value of %c is %d\n",c,c);
    }
    return 0;
}