//5. Write a program which accept number from user and return difference between
//   summation of even digits and summation of odd digits.
#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0, iSumOdd = 0;
    int iDiff = 0;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}
//Time Complexity: O(N)

int main()
{
    int iValue =0;
    int iRet  = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}