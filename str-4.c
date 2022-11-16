/*
4. Write a program to convert a given string into uppercase
*/
#include <stdio.h>
int main()
{
    int i = 0;
    char str[100];
    printf("Enter any word in lower case: ");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf(str);
}