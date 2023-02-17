#include <stdio.h>
#include <stdlib.h>

int main()
{
    float circumference=0,area=0;
    const float pi=3.14;
    float radius=0;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Circumference is: %.2f\n",circumference);
    printf("Area is: %.2f\n",area);
    return 0;
}