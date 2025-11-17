//1. Accept N number from user and accept one another number as NO check whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;;

    for(iCnt = 0; iCnt<iLength; iCnt ++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0,  iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the number: \n");
    scanf("%d", &iValue);

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

    
    bRet = Frequency(p,iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);
    return 0;
}