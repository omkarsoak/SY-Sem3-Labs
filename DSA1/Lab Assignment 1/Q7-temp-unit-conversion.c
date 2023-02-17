#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fahrenheit to Celsius
    float fahrenheit=0,celsius=0;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius = ((fahrenheit-32)*5)/9;
    printf("Temp in celsius is: %.2f\n",celsius);
    return 0;
}