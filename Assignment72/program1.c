//1. Write a program which accept matrix from the user and return additon of diagonal elements.
#include <stdio.h>

int AddDiagonal( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int iSum = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                iSum = iSum+Arr[i][j];
            }
        }
    }

    return iSum;
}

int main()
{
    int m = 0;
    int n = 0;
    int iRet = 0;
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

    iRet = AddDiagonal( m , n, Matrix);

    printf("Sum of Diagonal elements is : %d\n", iRet);

    return 0;
}