/*
4.  Write a program which return lasrgest element from singly linear linked list
*/
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InserFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)  //LL is empty
    {
        (*first) = newn;
    }
    else                //LL contains atleast 1 node
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("| %d |->", first->data);
        first= first ->next;
    }
    printf(" NULL\n");
}

int Maximum(PNODE Head)
{
    int iMax = 0;

    while(Head != NULL)
    {
        if(iMax< Head->data)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax; 
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InserFirst(&head, 240);
    InserFirst(&head, 320);
    InserFirst(&head, 230);
    InserFirst(&head, 110);

    Display(head);

    iRet = Maximum(head);

    printf("The Largest elements of the linked list is: %d", iRet);

    return 0;
}