//2. Write a program which accept matrix  and one number from the user and return frequency of that number.
#include <stdio.h>

int Frequecny( int iRow, int iCol, int Arr[iRow][iCol], int iNo)
{
    int i = 0;
    int j = 0;
    int iCount = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int m = 0;
    int n = 0;
    int iRet = 0;
    int iValue = 0;
    printf("Enter the Number of Rows : ");
    scanf("%d", &m);

    printf("Enter the Number of Columns : ");
    scanf("%d", &n);

    int i = 0, j = 0;
    int Matrix[m][n];

    for(i = 0; i < m; i++)
    {
        printf("Elements in Row number %d :\n",i+1);
        for(j = 0; j < n; j++)
        {
            printf("\t%d : ", j+1);
            scanf("%d", &Matrix[i][j]);
        }
    }

    printf("Enter the number to search the frequency of : ");
    scanf("%d", &iValue);


    iRet = Frequecny( m , n, Matrix, iValue);

    printf("Frequency of %d is  : %d\n", iValue, iRet);

    return 0;
}