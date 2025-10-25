//Check Leap Year
#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0 && year % 400 && year % 100 )
    {
        printf("%d is a LEAP YEAR", year);
    }
    else
    {
        printf("%d is not a LEAP YEAR", year);
    }

}

int main()
{
    int yr;
    printf("Enter Year:  ");
    scanf("%d",&yr);
    CheckLeapYear(yr);

    return 0;
}
