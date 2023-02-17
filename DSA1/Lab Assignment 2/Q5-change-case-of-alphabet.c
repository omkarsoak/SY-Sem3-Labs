/*CONVERT UPPERCASE TO LOWERCASE AND VICE-VERSA*/
#include <stdio.h>  
#include <stdlib.h>  
char touppercase(char lower)
{
    char upper;
    upper = lower - 32;   //using ASCII values
    return upper;
}
char tolowercase(char upper)
{
    char lower;
    lower = upper + 32;  //using ASCII values
    return lower;
}
int main ()  
{  
    char input1;
    printf("Enter the lowercase character: ");
    scanf("%c",&input1);
    printf("\nThe uppercase is: %c\n",touppercase(input1));

    char input2;
    printf("Enter the uppercase character: ");
    scanf("%c",&input2);
    printf("\nThe lowercase is: %c\n",tolowercase(input2));
      
    return 0;  
}  