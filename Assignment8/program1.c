/*1. Write a program which accpet number from user and if number is less than 50
the print small, if it is greater than 50 and less than 100 then print medium,if it is
greater than 200 then print large
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<0)
    {
        printf("Enter a Positive Value");
    }
    else if(iNo<=50)
    {
        printf("Small");
    }
    else if( iNo> 50 && iNo< 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
//Time Complexity: O(1)
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}