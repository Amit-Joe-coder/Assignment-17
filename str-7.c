/*
7.
Write a program in C to
count the total number of alphabets, digits and special
characters in a string.
*/
#include <stdio.h>
int main()
{
    int x, alphabet = 0, digits = 0, speacialcha = 0;
    char str[100];
    gets(str);
    printf(str);
    printf("\n");
    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 122)
        {
            alphabet++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digits++;
        }
        else
        {
            speacialcha++;
        }
    }
    printf("Alphabets=%d,digits=%d,speacial character=%d", alphabet, digits, speacialcha);
}