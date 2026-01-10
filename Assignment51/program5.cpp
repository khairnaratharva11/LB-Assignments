/*
5.  Write program to accept N values and reverse the contents
*/

#include<iostream>

using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp;
    
    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}
int main()
{
    int arr[] = { 10,20,30,10,30,40,10,40,10};
    for(int i = 0 ; i<9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    Reverse(arr, 9);

    for(int i = 0 ; i<9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}