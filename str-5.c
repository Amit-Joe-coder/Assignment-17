/*
5. Write a program to convert a given string into lowercase
*/
#include <stdio.h>
int main()
{
    int i = 0;
    char str[100];
    printf("Enter any word in upper case: ");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf(str);
}