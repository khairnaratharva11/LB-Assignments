//Write a program which accpets three numbers and print its multiplication
#include<stdio.h>
int Multiply(int iNo1,int iNo2, int iNo3)
{
    int iProduct = 0;
    
    iProduct = iNo1 * iNo2 * iNo3;
    return iProduct; 
}
//Time Complexity: O(1)
int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;
    printf("Please Enter Three Numbers\n");
    scanf("%d %d %d", &iValue1,&iValue2,&iValue3);
    if(iValue1 * iValue2 * iValue3 == 0)
    {
        printf("Please Enter a non Zero Number ");
    }
    else
    {
    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("The multiplication of these three numbers is: %d", iRet);
    }
    return 0;
}