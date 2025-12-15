/*
1. Write a recursive program which display below paternn.
   OUTPUT:   *   *   *   *   *
*/

#include <stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    Display();

    return 0;
}