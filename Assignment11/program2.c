//Write a program which accept range from user and display all even numbers in between that range
//Input:    23      35
//Output:   24      26      28      30      32      34

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt=iStart; iCnt <=iEnd; iCnt++)
    {
        if(iCnt%2 ==0)
        {
        printf("%d\t", iCnt);
        }
}
}
//Time Complexity: O(N)
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);
    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}