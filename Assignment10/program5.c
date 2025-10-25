//5. Write a program which accept area in square feet and convert it into square meter.
//1 square feet = 0.0929 square meter

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMtr = iValue * 0.0929;
    return dSqMtr;
}
//Time Complexity: O(1)
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d Square Feet is %f Square Meter", iValue, dRet);

    return 0;
}