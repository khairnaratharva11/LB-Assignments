//Write a program which accept range from user and return addition of all even numbers in between that range.
//Range should contains positive numbers only

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    for(iCnt=iStart; iCnt <=iEnd; iCnt++)
    {
        if(iCnt%2 == 0)
        {
        iSum = iSum + iCnt;
        }
    }
    return iSum;
}
//Time COmplexity: O(N) 
int main()
{   
    int iValue1 =0, iValue2 =0, iRet = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);
    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    if(iValue1 <0 || iValue2<0 || iValue2<iValue1)
    {
        printf("Invalid Range");
    }
    else
    {
        iRet = RangeSumEven(iValue1 , iValue2);
        printf("Addition is %d", iRet);

    }


    return 0;
    
}