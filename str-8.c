/*
8. Write a program in C to copy one string to another string.
*/
#include <stdio.h>
int main()
{
    char str_1[100], str_2[100];
    printf("This is the string that  you want to copy:");
    gets(str_1);
    printf("%s", str_1);
    for (int i = 0; i <= str_1[i]; i++)
    {
        str_2[i] = str_1[i];
    }
    printf("Your string has been copied succesfully: ");
    for (int i = 0; i < str_2[i]; i++)
    {
        printf("%c", str_2[i]);
    }
}