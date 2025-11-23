/*4. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 5        iCol = 5
OUTPUT :     1    2    3    4    5
            -1   -2   -3   -4   -5
             1    2    3    4    5
            -1   -2   -3   -4   -5
             1    2    3    4    5
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    for(i = 1; i<=iRow; i++)
    {
        if(i %2 != 0)
        {
            for(j = 1; j<=iCol; j++)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for(j = -1; j>=-iCol; j--)
            {
                printf("%d\t", j);
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