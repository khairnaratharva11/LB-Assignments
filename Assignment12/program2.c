//2. Count total factors of a number

#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0,iSum =0;
    for(iCnt = 1; iCnt<= number/2; iCnt++)
    {
        if(number % iCnt == 0)
        {
            iSum++;
        }
    }
    return iSum;
}
//Time Complexity: O(N/2)
int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d\n", count_factors(number));
    return 0;
}
