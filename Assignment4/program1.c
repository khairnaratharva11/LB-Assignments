/*
1. Write a program whci accepts number from user and display its multiplication of factor
Input:      12
Output:     144     (1*2*3*4*6)

Input:      13
Output:     1       (1)

Input:      10
Output:     10      (1*2*5)
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int iProduct = 1;
    int iCnt = 0;
    for ( iCnt =1; iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt ==0)
        {
        iProduct = iProduct * iCnt;
        } 
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}