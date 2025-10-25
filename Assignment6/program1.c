//Write a program which accepts name from the user and print that name

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter Full Name: \n");
    scanf("%s", &Name);
    printf("Your name is %s",  Name);
    return 0;
}
//Time Complexity: O(1)