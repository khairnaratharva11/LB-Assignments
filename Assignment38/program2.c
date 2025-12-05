    /*
    2.Write a program which accept string from user and copy that characters of that string intp another string in by removing all white spaces.
    */
    #include<stdio.h>

    void StrCpyX(char *src, char *dest)
    {
        int iCnt = 0, jCnt = 0;
        
        iCnt = 0;
        while (src[iCnt] != '\0')
        {
            if(src[iCnt] != ' ')
            {
                dest[jCnt] = src[iCnt];
                jCnt++;
            }
            iCnt++;
        }
        dest[jCnt] = '\0';
    }
    int main()
    {
        char arr[20];
        char brr[20];
        char cValue = '\0';

        printf("Enter the string: ");
        scanf("%[^\n]s", arr);
        
        StrCpyX(arr, brr);
        printf("%s", brr);
        
        return 0;
    }