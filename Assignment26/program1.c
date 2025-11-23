/*1. Accept number from user and display below pattern
INPUT : 5
OUTPUT: A   B   C   D   E
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char C = 'A';

    if(iNo <=26)
    {
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            printf("%c\t", C);
            C++;
        }
    }
    else
    {
        printf("\nEnter Valid number of Alphabets");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:   ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}