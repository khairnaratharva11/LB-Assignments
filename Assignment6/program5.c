//Write a program which accept total marks & obtained marks from user and calculate percentage.
#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    float iPrct = 0.0;
    iPrct = ((float)iNo2/iNo1) * 100;
    return iPrct;
}
//Time Complexity: O(1)
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter Total Marks: ");
    scanf("%d", &iValue1);
    printf("Please Enter Obtained Marks: ");
    scanf("%d", &iValue2);
    
    if(iValue1 == 0 || iValue1<iValue2)
    {
        printf("Please Enter Valid Total Marks");
    }
    else
    {
        fRet = Percentage(iValue1, iValue2);
        printf("%.2f Percent", fRet);
    }
    return 0;
}