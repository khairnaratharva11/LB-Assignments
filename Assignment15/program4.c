//4. Write a program  which accept number from user and return mutiplication of all digits.
#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iProduct = 1;
    while(iNo!=0)
    {

        iDigit = iNo % 10;
        iNo = iNo / 10;
        if( iDigit == 0){}
        else {iProduct = iProduct * iDigit;}
    }
    return iProduct;
}
//Time Complexity: O(N)

int main()
{
    int iValue =0;
    int iRet  = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);

    return 0;
}