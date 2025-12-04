/*
1.Write a program which accept string from user and count number of capital charcter

INPUT: "Marvellous Multi OS"
OUTPUT: 4
*/

#include <stdio.h>

int CountCapital(char* str)
{
    int iCnt = 0;
    while (*str!= '\0')
    {
        if(*str >= 'A'&&*str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
  
    return iCnt;
}

int main()
{
    char Arr[20]= {'\0'};
    int iRet = 0;

    printf("Enter your string:\n");
    scanf("%[^'\n']s", Arr);
   
    iRet = CountCapital(Arr);
    
    printf("%d\n", iRet);

    return 0;
}