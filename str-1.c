/*
1. Write a program to calculate the length of the string.
(without using built-in method)
*/
#include<stdio.h>
int main()
{
    int i;
    char str[200];
    printf("Enter any Word to gets its length: ");
    gets(str);
    for ( i = 0;str[i]; i++);
    printf("%d",i);
    
}