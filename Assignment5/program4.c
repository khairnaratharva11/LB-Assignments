//Check Positive, Negative, or Zero
#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Positive");
    }
    else if(num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int number;
    printf("Enter Number:   ");
    scanf("%d", &number);

    CheckNumberType(number);
    return 0;
}