/*
4. Accept one character from user and connvert case of that character

Input:a          Output:A
Input:D          Output:d
*/
#include<stdio.h>

void DisplayConvert(int cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("converted aplabet is: %c", cValue);    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("CONVERTED ALPHSBET IS: %c", cValue);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter Character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}