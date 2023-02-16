#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n<=1)
    {return 1;}
    else
    {return n*factorial(n-1);}
}
int main()
{
    int ans = factorial(6);
    printf("%d",ans);
    return 0;
}