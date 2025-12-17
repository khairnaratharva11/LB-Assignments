/*
1.  Write a program which search first occurrence of particular element from singly linear linked list
    Function should return position at which element is found
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

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            return iPos;
        }
        Head = Head->next;
        iPos++;
    }
    return -1; 
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

    int iSearch = 0;
    printf("Enter number to check the first occurrence in this list:\n");
    scanf("%d", &iSearch);

    iRet = SearchFirstOcc(head,iSearch);

    Display(head);

    if(iRet == -1)
    {
        printf("Element %d is NOT found in the linked list.\n", iSearch);
    }
    else
    {
        printf("Element %d found at position: %d\n", iSearch, iRet);
    }

    return 0;
}