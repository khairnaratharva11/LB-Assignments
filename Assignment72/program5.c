//5. Write a program which accept matrix from the user and swap the contents of consecutive rows.
#include <stdio.h>

void SwapRows( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int temp[iCol];
    for(i = 0; i < iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 0; j < iCol; j++)
                temp[j] = Arr[i][j];
        }
        else if(i > 0)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i-1][j] = Arr[i][j];
                Arr[i][j] = temp[j];
            }
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

    printf("Before Swap:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");        
    }

    SwapRows( m , n, Matrix);


    printf("After Swap:\n");
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