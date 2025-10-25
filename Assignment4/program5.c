/*
5. Write a program which accept number fromm user and return difference between summation of all its factors and non factors

Input:      12
Output:     -34     (16-50)   7   8   9   10  11

Input:      10
Output:     -29     (8-37)
*/

#include<stdio.h>

int FactDoff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0,iSum2 = 0;
        for ( iCnt =1; iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt ==0)
        {
        iSum1 = iSum1 + iCnt;
        } 
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt !=0)
        {
        iSum2 = iSum2 + iCnt;
        }
    }

    return (iSum1-iSum2);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:   ");
    scanf("%d", &iValue);

    iRet = FactDoff(iValue);

    printf("%d", iRet);

    return 0;
}