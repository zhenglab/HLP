#include <stdio.h>
#include <string.h>
int main()
{
  char str1[40]="My name is ";
  char str2[20];
  printf("Input your name:");
  gets(str2);//fgets()
  strcat(str1,str2);
  puts(str1);
  return 0;
}
