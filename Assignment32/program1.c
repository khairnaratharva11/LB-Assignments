/*1. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
    OUTPUT :    
                *       *       *       #
                *       *       #       *
                *       #       *       *
                #       *       *       *
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;

    if(iRow!=iCol)
        {
            printf("Invalid Input");
            printf("Row number and Column number should be same");
            return ;
        }
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if(i+j==5)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:   ");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns:   ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}