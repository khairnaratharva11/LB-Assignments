/*
2. Write a recursive program which accept number from user and return summation of its digits
    INPUT: 879
    OUTPUT: 24
*/
#include <stdio.h>

int Sum(int iNo)
{
    int iCnt = 0, iSum = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}