//Write a program which accept number from user and display its table in reverse order

//4. Write a program which accept number from user and display its talble

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        printf("%d\t", iNo*iCnt);
    }
}
//Time Complexity: O(10)
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}