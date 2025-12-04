/*
1. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
*/
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    char ch = 0;
    for(iCnt = 0; iCnt<=127; iCnt++, ch++ )
    {
        printf("%c\t%d\t%X\t%o\n",ch,ch,ch,ch);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}