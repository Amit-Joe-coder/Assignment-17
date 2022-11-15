/*
2. Write a program to count the occurrence
of a given character in a given string.
*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[10], ch[10];
    printf("enter the character you want to count: ");
    fgets(ch, 10, stdin);
    printf("enter any word:");
    fgets(str, 10, stdin);
    printf("hello %s", str);
    for (i = 0; i<=10; i++)
    {
        if (ch[0] == str[i])
        {
            count++;
        }
    }
    printf("%d", count);
}