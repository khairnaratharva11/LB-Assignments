/*
3.  Write a program which returns addition pf all element from singly linear linked list
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

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head -> data;
        Head = Head->next;
    }
    return iSum; 
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InserFirst(&head, 40);
    InserFirst(&head, 30);
    InserFirst(&head, 20);
    InserFirst(&head, 10);

    Display(head);

    iRet = Addition(head);

    printf("The sum of elements of the linked list is: %d", iRet);

    return 0;
}