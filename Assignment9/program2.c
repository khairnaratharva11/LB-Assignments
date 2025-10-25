//2.Accept amount in US Dollar and return its corresponding value in Indian Currency.
//  Consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    return iNo * 70;
}
//Time Complexity: O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}