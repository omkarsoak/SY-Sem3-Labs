/*SUM OF NATURAL NUMBERS*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum += i;
    }
    printf("Tne sum is: %d\n",sum);
    return 0;
}