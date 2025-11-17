//5. Accept N numbers from user and accept one another number as NO, return frequency of NO fom it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt<iLength; iCnt ++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq ++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0,  iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

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

    
    iRet = Frequency(p,iSize, iValue);

    printf("\n%d", iRet);

    free(p);
    return 0;
}