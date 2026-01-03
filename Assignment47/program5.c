/*
5.  Consider Sinlgy Linear Linked List to solve below problem statements
        Count Prime Numbers
            void CountPrime(PNODE first);
*/

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}


void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        printf("\nThe Linked List is Empty\n");
    }    
    else if((*first) ->next == NULL )
    {
        free (*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)->next;
        
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        printf("\nThe Linked List is Empty\n");
    }    
    else if((*first) ->next == NULL )
    {
        free (*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);  
        temp->next = NULL;
    }
}

void Display(PNODE first)
{
    printf("\n");
    while(first != NULL)
    {
        printf("| %d |-> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    
    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertAtPos(PPNODE first, int No, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iSize = Count(*first);
    int iCnt = 0;

    if(pos<1 || pos >iSize+1)
    {
        printf("\nInvalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, No);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        temp = *first;

        for(iCnt =1 ;iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next= temp->next;
        temp->next = newn;        
    }
}

void DeleteAtPos(PPNODE first , int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iSize = Count(*first);
    int iCnt = 0;

    if(pos<1 || pos >iSize)
    {
        printf("\nInvalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt =1 ;iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = temp->next->next;
        free(target);
    }
}

int CountPrime(PNODE head)
{
    int iCnt = 0, iNo = 0;
    int bFlag = 0, iCount = 0;  
    
    while(head != NULL)
    {
        iNo = head->data;
        bFlag = 1;
        
        if(iNo <= 1)
        {
            bFlag = 0;
        }
        else
        {
            for(iCnt = 2; iCnt <= iNo/2; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    bFlag = 0;
                    break;
                }
            }
        }
        
        if(bFlag == 1)
        {
            iCount++;
        }
        head = head->next;

    }

    return iCount;
}
int main()
{
    struct node* head = NULL;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    while(1) {
        printf("\n\nSingly Linked List Menu\n");
        printf("\tSelect what you want to do:\n");
        printf("\t\t 1. Insert At First\n");
        printf("\t\t 2. Insert At Last\n");
        printf("\t\t 3. Insert At Position\n");
        printf("\t\t 4. Delete At First\n");
        printf("\t\t 5. Delete At Last\n");
        printf("\t\t 6. Delete At Position\n");
        printf("\t\t 7. Count Prime Numbers\n");
        printf("\t\t 8. Display List\n");
        printf("\t\t 9. Count Elements\n");
        printf("\t\t10. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &iChoice);
        
        switch(iChoice) {
            case 1:
                printf("Enter Value to insert: ");
                scanf("%d", &iValue);
                InsertFirst(&head, iValue);
                printf("\nList after Insertion:\n");
                Display(head);
                break;
                
            case 2:
                printf("Enter Value to Insert: ");
                scanf("%d", &iValue);
                InsertLast(&head, iValue);
                printf("\nList after Insertion:\n");
                Display(head);
                break;
                
            case 3:
                printf("Enter Value to Insert: ");
                scanf("%d", &iValue);
                printf("Enter position: ");
                scanf("%d", &iPos);
                InsertAtPos(&head, iValue, iPos);
                printf("\nList after Insertion:\n");
                Display(head);
                break;
                
            case 4:
                DeleteFirst(&head);
                printf("\nList after Deletion:\n");
                Display(head);
                break;
                
            case 5:
                DeleteLast(&head);
                printf("\nList after Deletion:\n");
                Display(head);
                break;
                
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &iPos);
                DeleteAtPos(&head, iPos);
                printf("\nList after Deletion:\n");
                Display(head);
                break;
                
            case 7:
                iRet = CountPrime(head);
                printf("There are %d prime Numbers in the list.", iRet);
                
                break;
                
            case 8:
                printf("\nCurrent List:\n");
                Display(head);
                break;
                
            case 9:
                printf("\nNumber of elements in list: %d\n", Count(head));
                break;
                
            case 10:
                printf("\nJay Ganesh... Goodbye!\n");
                return 0;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
}