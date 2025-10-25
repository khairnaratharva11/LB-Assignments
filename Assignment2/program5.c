//Acept number from user and check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet==true)
    {
        printf("%d is an EVEN Number", iValue);
    }
    else
    {
        printf("%d is an ODD Number", iValue);
    }
    
    return 0;
}