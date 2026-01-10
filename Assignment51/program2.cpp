/*
2.  Write a program to accept N values and cout frequency of any specific value
*/

#include<iostream>
using namespace std;

template<class T>

int Frequency(T *arr, int iSize, T No)
{
    int iCnt = 0;
    int iFreq = 0;
    for(iCnt= 0; iCnt<iSize;iCnt++ )
    {
        if(arr[iCnt] == No)
        {
            iFreq++;
        }
    }
    return iFreq;
}


int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;

    iRet = Frequency(arr, 9, 10);

    cout<<iRet<<"\t";

    return 0;
}