/*
3.  Write a generic program to accept N values and search first occurrence of any specific value.
*/

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *arr, int iSize, T No)
{
    int iCnt = 0;
    int iPos = 0;

    for(iCnt= 0; iCnt<iSize;iCnt++)
    {
        iPos++;
        
        if(arr[iCnt] == No)
        {
            break;
        }
    }

    return iPos;
}

int main()
{

    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;

    iRet = SearchFirst(arr, 9, 40);

    cout<<iRet;

    return 0;
}