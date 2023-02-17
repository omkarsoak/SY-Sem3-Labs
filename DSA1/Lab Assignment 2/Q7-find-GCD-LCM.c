/*FINDING GCD AND LCM OF TWO NUMBERS*/
#include <stdio.h>
#include <stdlib.h>
int gcd(int num1,int num2)
{
    int gcd=0;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    return gcd;

}

int lcm(int num1,int num2)
{
    int max=0;
    if(num1>num2){max=num1;}
    else{max=num2;}
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            return max;
        }
        max++;
    }
}
int main()
{
    int num1=0,num2=0;
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("The GCD is: %d",gcd(num1,num2));
    printf("The LCM is: %d",lcm(num1,num2));
    return 0;
}