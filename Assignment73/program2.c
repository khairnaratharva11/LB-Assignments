//2. Write a program which accept matrix from the user and reverse  the contents of each row.
#include <stdio.h>

void ReverseRow( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol/2 ; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i][iCol-j-1];
            Arr[i][iCol-j-1] = temp;
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

    printf("Before Reverse of Rows:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");        
    }

    ReverseRow( m , n, Matrix);


    printf("After Reverse of Rows:\n");
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