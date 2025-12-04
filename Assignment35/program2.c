/*
1.Write a program which accept string from user and count number of small charcter

INPUT: "Marvellous"
OUTPUT: 9
*/

#include <stdio.h>

int CountCapital(char* str)
{
    int iCnt = 0;
    while (*str!= '\0')
    {
        if(*str >= 'a'&&*str <= 'z')
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