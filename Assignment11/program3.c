//Write a program which accept range from user and return from user and return addition of all numbers in between that range.
// (Range sjould contains positive numbers only)
//Input:    23  30
//Output:   212
//Input:    10  18
//Output:   126
#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt=iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
//Time Complexity: O(N)
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);
    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    if(iValue1 <0 || iValue2<0 || iValue2<iValue1)
    {
        printf("Invalid Range");
    }
    else
    {iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);
    }
    return 0;
}