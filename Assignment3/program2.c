/*
2. Write a program whic haccepts number from user and print even factors of tha number

Input:      24
Output:     1   2   4    6    1S2
*/
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0 ; 
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=2;i<iNo;i=i+2)
    {
        if(iNo % i == 0 )
        {
           printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue =0;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}