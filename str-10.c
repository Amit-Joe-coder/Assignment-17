/*
10. Write a program in C to Find the Frequency of Characters
*/
#include <stdio.h>
int main()
{
    int i;
    char str1[100], str2[150] = {0};
    printf("enter any word: ");
    gets(str1);
    for (i = 0; i < str1[i]; i++)
    {
        str2[str1[i]]++;
    }
    printf("this is output: \n");
    for (i = 0; i < 150; i++)
    {
        if (str2[i] != 0)
        {
            printf("%c==%d\n", i, str2[i]);
        }
    }
}