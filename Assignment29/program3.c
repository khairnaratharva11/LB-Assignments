/*3. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 5        iCol = 5
OUTPUT :    a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    char ch = '\0';
    for(i = 1; i<=iRow; i++)
    {
        if(i %2 == 0)
        {
            for(j = 1 , iCnt =1 ; j<=iCol; j++ , iCnt++)
            {
                printf("%d\t", iCnt);
            }
        }
        else
        {
            for(j = 1 , ch = 'a'; j<=iCol; j++ , ch++)
            {
                if(iCol<=26)
                {
                    printf("%c\t", ch);
                }
                else
                {
                    printf("Enter valid number of alphabets..");
                    break;
                }
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