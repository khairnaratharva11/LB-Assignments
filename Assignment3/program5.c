/*
5. Accept on character fromm user and check whether that character is vowel 
    (a,e,i,o,u) or not.
*/
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cAlphabet)
{
    if(cAlphabet == 'a'||cAlphabet == 'e'||cAlphabet == 'i'||cAlphabet == 'o'|cAlphabet == 'u'||cAlphabet == 'A'||cAlphabet == 'E'||cAlphabet == 'I'|cAlphabet == 'O'||cAlphabet == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is VOWEL");
    }
    else
    {
        printf("It is not VOWEL");
    }

    return 0;
}