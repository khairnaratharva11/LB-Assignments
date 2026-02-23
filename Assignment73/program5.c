/*5. Write a program which accept matrix from the user and check whether the matrix is Sparse matriox or not.

    Sparse matrix is a matrix with the majority of its elements equal to zero.
*/
#include <stdio.h>
#include<stdbool.h>

bool ChkSparse( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    int CntZero = 0, CntNonZero = 0; 
    bool bFlag = true;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol ; j++)
        {
            if(Arr[i][j] == 0)
            {
                CntZero++;
            }
            else
            {
                CntNonZero++;
            }
        }
    }

    return (CntZero > CntNonZero);    
}

int main()
{
    int m = 0;
    int n = 0;
    bool bRet = 0;
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
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");        
    }

    bRet = ChkSparse( m , n, Matrix);

    if(bRet)
    {
        printf("The given matrix is a Sparse Matrix\n");
    }
        else
    {
        printf("The given matrix is NOT a Sparse Matrix\n");
    }
    return 0;
}