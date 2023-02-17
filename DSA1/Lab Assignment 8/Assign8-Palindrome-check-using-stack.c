/*Palindrome check using stack*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data;
    struct node *next;
}node;

typedef node* stack;

void linked_list_traversal(node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int is_empty(node* top)
{
    if(top==NULL)
    {return 1;}
    else
    {return 0;}
}

int is_full(node* top)
{
    node* n = (node*)malloc(sizeof(node));
    if(n==NULL)
    {return 1;}
    else
    {return 0;}
}

void push(node** top,char data)
{
    if(is_full(*top)==1)
    {printf("Stack overflow\n");}
    else
    {
        node* n = (node*)malloc(sizeof(node));
        n->data = data;
        n->next = *top;
        *top = n;
    }
}

char pop(node** top)
{
    if(is_empty(*top)==1)
    {printf("Stack underflow\n");}
    else
    {
        node* top1 = *top;
        char data = top1->data;
        top1 = top1->next;
        free(top);
        *top = top1;
        return data;
    }
}

char peek(node* top)  //returns the data at the top
{
    node* ptr = top;
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    else 
    {return -1;}
}

int main()
{
    char str[10];
    stack s1;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Original string: %s\n",str);
    int i=0;
    while(str[i]!='\0')
    {
        push(&s1,str[i]);
        i++;
    }
    printf("Reversed string is: ");
    int palindrome=1;
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=peek(s1))
        {
            palindrome = 0;
        }
        printf("%c",pop(&s1));
        i++;
    }
    printf("\nThe string is a palindrome: %d",palindrome);

    return 0;
}