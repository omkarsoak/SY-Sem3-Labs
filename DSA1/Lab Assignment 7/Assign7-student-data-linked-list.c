#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int prn;
    char name[10];
    struct node* next;
}node;
typedef node* list;

void insert_at_begining(node** head_ref,int prn, char* name)
{
    node* new_node = (node*)malloc(sizeof(node));  
    new_node->prn = prn;
    strcpy(new_node->name,name);
    new_node->next = (*head_ref);  //new_node->next points to head
    (*head_ref) = new_node;  //head points to new_node
}


void insert_after_president(node* prev_node,int prn,char* name)
{
    node* new_node = (node*)malloc(sizeof(node)); //create node to be added
    new_node->prn = prn;
    strcpy(new_node->name,name);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}



void display(node*ptr)
{
    while(ptr!=NULL)  //traverse until end
    {
        printf("%d ",ptr->prn);
        printf("%s\n",ptr->name);
        ptr = ptr->next;
    }
}

int total_members(node*ptr)
{
    int count=0;
    while(ptr!=NULL) 
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}


void delete_PRN(node** head_ref,int value)
{
    node* p = *head_ref;  
    node* q = (*head_ref)->next;  //q is 1 node ahead of p
    while(q->prn!=value)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;  //remove connection
    free(q);   //free pointer
}

int main()
{
    node* head = NULL;
    insert_at_begining(&head,192881,"president");
    insert_after_president(head,112103,"secretary");
    insert_after_president(head,918791,"mahesh");
    insert_after_president(head,234879,"omkar");
    insert_after_president(head,979823,"suresh");
    insert_after_president(head,121321,"soham");
    display(head);
    printf("Total members are: %d\n",total_members(head));
    delete_PRN(&head,112103);
    delete_PRN(&head,192881);
    display(head);
    printf("Total members are: %d\n",total_members(head));

    return 0;
}