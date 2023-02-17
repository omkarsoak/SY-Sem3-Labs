#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    (a>b && a>c) ? printf("the largest number is:%d\n",a)
    : (b>c && b>a) ? printf("the largest number is:%d\n",b)
    :  printf("the largest number is:%d\n",c);

    return 0;
}