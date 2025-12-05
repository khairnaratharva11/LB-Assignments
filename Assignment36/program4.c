/*
4.  Write a proggram which accept string from user and display only digits from that string.

INPUT: Mmarve89llous121
OUTPUT: 89121
*/
#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt =0;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]>='0'&&str[iCnt]<='9')
        {
            printf("%c", str[iCnt]); 
        }
        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return 0;
}