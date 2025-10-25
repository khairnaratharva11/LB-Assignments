//1. Print all factors of a number

#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= number/2; iCnt++)
    {
        if(number % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
//Time Complexity: O(N/2)
int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d",&number);
    print_factors(number);

    return 0;
}
