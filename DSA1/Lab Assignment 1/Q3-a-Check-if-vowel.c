#include <stdio.h>
#include <stdlib.h>

int check_vowel(char arr[],char input)
{
    if(input>='a' && input<='z' || input>='A' && input<='Z')
    {
        for(int i=0;i<10;i++)
        {   
            if(input==arr[i])
                {return 1;}
        }
        return 0;
    }
    else
    {
        return -1;
    }
    
}
int main()
{
    char arr[10] = {'a','e','i','o','u','A','E','I','O','U'};
    char input='a';
    printf("Enter the character:");
    scanf("%c",&input);
    if(check_vowel(arr,input)==1)
    {printf("vowel\n");}
    else if(check_vowel(arr,input)==0)
    {printf("consonant\n");}
    else
    {
        printf("enter valid input\n");
    }
    
    return 0;
}