//3. Write a program to find even factorial of given number
#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iFact = 1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 ==0)
    {
        iFact = iFact * iCnt;
    }
    }
    
    return iFact;
}
//Time Complexity: O(N)
int main()
{
    int iValue =0 , iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}