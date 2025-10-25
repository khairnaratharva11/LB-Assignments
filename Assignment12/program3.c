//3. Sum of all factors of number

#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0,iSum =0;
    for(iCnt = 1; iCnt<= number/2; iCnt++)
    {
        if(number % iCnt == 0)
        {
            iSum = iSum + iCnt;
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
    printf("%d\n", sum_of_factors(number));
    return 0;
}
