/*
5. Write a recursive program which display below paternn.
    INPUT: 6
    OUTPUT:   a  b   c   d   e   f
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char c = '\0';

    c = 'a';

    for(iCnt=1;iCnt<=iNo && c <= 'z';iCnt++, c++)
    {
        printf("%c\t", c);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}