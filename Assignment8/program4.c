//4. Write a program which accept number from user and display its talble

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\t", iNo*iCnt);
    }
}
//Time Complexity: O(10)
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}