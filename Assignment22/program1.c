//1. Accept N numbers from user and return frequency of even numbers

#include <stdio.h>
#include <stdlib.h>
int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iSum =0;

    for(iCnt= 0; iCnt<iLength ; iCnt++, *(Arr+1))
    {
        if(Arr[iCnt] % 2 ==0)
        {
            iSum = iSum + 1;
        }
    }

    return iSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if( NULL == p)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d elements:\n ", iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("\tEnter element %d:\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = CountEven(p,iSize);

    printf("Result is: %d", iRet);

    free(p);
    return 0;
}