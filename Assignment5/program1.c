// Check Even or Odd
#include<stdio.h>

void CheckEvenOdd(int num)
{
    if( num % 2 == 0)
    {
        printf("%d is an EVEN Number", num);
    }
    else
    {
        printf("%d is an ODD Number", num);
    }
}

int main()
{
    int number;
    printf("Enter Number:   ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}