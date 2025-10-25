//Find Sum of first N natural numbers
#include <stdio.h>

int sum_natural_numbers ( int limit)
{
int iCnt = 0, iSum = 0;
for(iCnt = 1; iCnt <= limit; iCnt++)
{
    iSum= iSum + iCnt;
}
return iSum;
}
//Time Complexity: O(N)

int main()
{
    int limit;

    printf("Enter Number:  ");
    scanf("%d", &limit);
    printf("%d", sum_natural_numbers(limit));
    return 0;
}