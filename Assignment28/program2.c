/*2. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
OUTPUT :  A   B   C   D
          a   b   c   d
          A   B   C   D
          a   b   c   d
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iCol<=26)
    {
        for(i = 1; i<=iRow; i++)
        {
            int ch = 65;
        {
            for(j = 1; j<=iCol; j++)
            {
                if(i%2 == 0)
                {
                    printf("%c\t", ch+32);             
                    ch++;
                }
                else
                {
                    printf("%c\t", ch);             
                    ch++;
                }
                                
            }
        }
            printf("\n");
        }
    }    
    else
    {
        printf("Enter valid number of Columns");
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