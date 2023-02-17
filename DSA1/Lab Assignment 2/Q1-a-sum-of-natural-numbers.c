/*SUM OF NATURAL NUMBERS*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i=1,sum=0;
    while(i<=num)
    {
        sum += i;
        i++;
    }
    printf("Tne sum is: %d\n",sum);
    return 0;
}