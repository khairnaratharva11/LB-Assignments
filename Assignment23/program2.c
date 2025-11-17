//2. Accept N numbers from user and accept onne another number as NO, return index of first occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        iCnt = -1;
    }
    return iCnt;
            
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

    
    iRet = FirstOcc(p,iSize, iValue);

    if(iRet ==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is at index %d", iRet);
    }

    free(p);
    return 0;
}