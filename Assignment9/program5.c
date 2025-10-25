//5. Write a program which returns fifference between Even Factorial and odd factorial of given number.
#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iEvenFact = 1, iOddFact = 1, iDiff = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 ==0)
    {
        iEvenFact = iEvenFact * iCnt;
    }
    else if(iCnt%2 !=0)
    {
        iOddFact = iOddFact * iCnt;
    }
}
    iDiff = iEvenFact - iOddFact;
    return iDiff;  
}
//Time Complexity: O(N)
int main()
{
    int iValue =0 , iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}