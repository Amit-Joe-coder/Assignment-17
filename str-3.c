/*
3. Write a program to count vowels in a given string
*/
#include <stdio.h>
int main()
{
  int i,j,count=0;
  char str[100],vowels[5]={'a','e','i','o','u'};
  printf("Enter any Word: ");
  fgets(str,100,stdin);
  for(i=0;str[i];i++)
  {
    for(j=0;j<5;j++)
    {
      if(str[i]==vowels[j])
      {
        count++;
      }
    }
  }
  printf("%d",count);
  return 0;
}