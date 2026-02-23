/*4. Write a program which accept matrix from the user and check whether the matrix is identity matrix or not.
    Identity matrix is a square matrix with 1's along the diagonal from upper left to 
    lower right and 0's in all other positions.
    If it satisfies the structure as explained before then the matrix is called as
    identity matrix
*/
#include <stdio.h>
#include<stdbool.h>

bool ChkIdentity( int iRow, int iCol, int Arr[iRow][iCol])
{
    int i = 0;
    int j = 0;
    bool bFlag = true;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol ; j++)
        {
            if(i == j && Arr[i][j] != 1)
            {
                bFlag = false;
                break;
            }
            else if(i != j && Arr[i][j] != 0)
            {
                bFlag = false;
                break;
            }
        }
        if(bFlag == false)
        {
            break;
        }
    }
    return bFlag;
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

    bRet = ChkIdentity( m , n, Matrix);

    if(bRet)
    {
        printf("The given matrix is an Identity Matrix\n");
    }
        else
    {
        printf("The given matrix is NOT an Identity Matrix\n");
    }
    return 0;
}