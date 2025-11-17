//2. Acccept N numbers and return difference between frequency even number and odd numbers

#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCntEven = 0, iCntOdd = 0;
    
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCntEven++;
        }
        else
        {
            iCntOdd++;
        }
    }
    
    return iCntEven - iCntOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt =0;
    int *p = NULL;

    printf("Enter number of elements:   ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        printf("\tEnter element %d:   ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);
    printf("%d", iRet);
    free(p);

    return 0;
}