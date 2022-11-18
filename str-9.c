/*
9. Write a C program to sort a string array in ascending order.
*/
#include <stdio.h>
int main()
{
    int i, j = 0;
    char str[100], str2[100], temp;
    printf("Enter any word: ");
    gets(str);
    for (i = 0; i <= str[i]; i++)
    {
        for (j = i + 1; j < str[j]; j++)
        {
            if (str[i] > str[j])
            {

                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf(str);
}