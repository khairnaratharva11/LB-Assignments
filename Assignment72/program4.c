//4. Write a program which accept matrix from the user and display the sum of elements from each column.
#include <stdio.h>

void AddColumn( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int iSum = 0;

    for(i = 0; i < iCol; i++)
    {
        iSum = 0;
        for(j = 0; j < iRow; j++)
        {
            iSum = iSum + Arr[j][i];
        }
        printf("%d\t", iSum);
    }
    printf("\n");
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


    AddColumn( m , n, Matrix);

    return 0;
}