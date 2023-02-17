#include <stdio.h>
#include <stdlib.h>
int check_vowel(char data)
{
    switch (data)
    {
    case 'a':return 1;break;
    case 'e': return 1; break;
    case 'i': return 1; break;
    case 'o': return 1; break;
    case 'u': return 1; break;
    case 'A': return 1; break;
    case 'E': return 1; break;
    case 'I': return 1; break;
    case 'O': return 1; break;
    case 'U': return 1; break;
    default: return 0; break;
    }
}
int main()
{
    char input='a';
    printf("Enter the character:");
    scanf("%c",&input);
    if(check_vowel(input)==1)
    {printf("vowel\n");}
    else if(check_vowel(input)==0)
    {printf("consonant\n");}
    else
    {
        printf("enter valid input\n");
    }
    return 0;
}