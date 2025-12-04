/*
3. Accept character from user. If it is captital then display all the characters from the input characters till Z.
   If input character is small then print all the characters in reverse order till a.
   In other cases return directly
INPUT:  Q
OUTPUT: Q   R   S   T   U   V   W   X   Y   Z

INPUT:  m
OUTPUT: m   l   k   j   i   h   g   f   e   d   c   b   a

INPUT:  8
OUTPUT: 
*/

#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if(ch>='a' && ch<='z')
    {    
        while(ch >= 'a')
        {
           printf("%c\t",ch);
           ch--; 
        }
    }
    else if(ch>='A' && ch<='Z')
    {
        while(ch <= 'Z')
        {
           printf("%c\t",ch);
           ch++; 
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}