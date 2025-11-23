/*5. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
OUTPUT :     1    2    3    4
             2    3    4    5
             3    4    5    6
             4    5    6    7
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = 1, iCnt = 1; i<=iRow; i++)
    {
        
        int iAdder =iCnt;
        for(j = 1; j<=iCol; j++, iAdder++)
        {
            printf("%d\t", iAdder);
        }
        iCnt = iCnt + 1;
    
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