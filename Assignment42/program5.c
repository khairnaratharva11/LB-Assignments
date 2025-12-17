/*
4.  Write a program which return Smallest element from singly linear linked list
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

int Minimum(PNODE Head)
{
    int iMin = Head->data;

    while(Head != NULL)
    {
        if(iMin> Head->data)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }
    return iMin; 
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InserFirst(&head, 640);
    InserFirst(&head, 240);
    InserFirst(&head, 20);
    InserFirst(&head, 230);
    InserFirst(&head, 110);

    Display(head);

    iRet = Minimum(head);

    printf("The Smallest elements of the linked list is: %d", iRet);

    return 0;
}