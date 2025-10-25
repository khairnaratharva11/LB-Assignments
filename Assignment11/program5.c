//Write a program which accept range from user and display all numbers in between that range in reverse order

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt=iEnd; iCnt >=iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}
//Time Complexity: O(N)
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);
    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}