//1. print all numbers from 1 to N

#include <stdio.h>

void print_numbers ( int limit)
{
int iCnt = 0;
for(iCnt = 1; iCnt <= limit; iCnt++)
{
    printf("%d\t", iCnt);
}
}
//Time Complexity: O(N)

int main()
{
    int limit;

    printf("Enter Number:  ");
    scanf("%d", &limit);
    print_numbers(limit);
    return 0;
}