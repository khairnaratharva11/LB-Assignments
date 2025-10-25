/*
1. Write a program a=which accept number from user and display below pattern

Input:      5
Output:     *   *   *   *   *   #   #   #   #   #

Input:      6
Output:     *   *   *   *   *   *   #   #   #   #   #   #
          
Input:      -5
Output:     *   *   *   *   *   #   #   #   #   #
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    iCnt = 0;
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
}
//Time Complexity: O(N)
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}