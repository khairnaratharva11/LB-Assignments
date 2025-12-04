/*
5. Accept division of student from user and depends on the division display exam timing.
There are 4 divisions in school as A,B,C,D.
Exam of division A at 7AM, B at 8.30Am, C at 9.20AM and D at 10.30AM.
(Application should be case insensitive)

INPUT:  C
OUTPUT: Your exan at 9.20AM

INPUT:  d
OUTPUT: Your exan at 10.30AM
*/

#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'a'|| ch == 'A')
    {
        printf("Your exam at 7AM");
    }
    else if(ch == 'b'|| ch == 'B')
    {
        printf("Your exam at 8.30AM");
    }
    else if(ch == 'c'|| ch == 'C')
    {
        printf("Your exam at 9.20AM");
    }
    else if(ch == 'd'|| ch == 'D')
    {
        printf("Your exam at 10.30AM");
    }
    else
    {
        printf("Enter a valid division");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter your division: ");
    scanf("%c", &cValue);
     
    DisplaySchedule(cValue);

    return 0;
}