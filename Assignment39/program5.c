/*
5. Write a recursive program which display below paternn.
   OUTPUT:   a  b   c   d   e   f
*/

#include <stdio.h>

void Display()
{
    int iCnt = 0;
    char c = '\0';

    c = 'a';

    for(iCnt=1;iCnt<=6 && c <= 'z';iCnt++, c++)
    {
        printf("%c\t", c);
    }
}

int main()
{
    Display();

    return 0;
}