//1. Write a program which accept matrix from the user and display transpose of the matrix.
//      A transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
#include <stdio.h>

void Transpose( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < iRow; i++)
    {
        for(j = i+1; j < iCol ; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[j][i];
            Arr[j][i] = temp;
        }
    }
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

    printf("Before Transpose:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");        
    }

    Transpose( m , n, Matrix);


    printf("After Transpose:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");        
    }

    return 0;
}