#include <stdio.h>
#include <stdlib.h>
int check_prime(int num)
{
    if(num<2)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<num/2;i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int start=1,end=100;
    for(int i=start;i<=end;i++)
    {
        if(check_prime(i)==1)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}
