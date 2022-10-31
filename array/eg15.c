#include <stdio.h>
int main()
{
  char str1[30], str2[30];
  printf("Input str1: ");
  gets(str1);//fgets
  printf("Input str2: ");
  gets(str2);//fgets
  printf("str1: %s\nstr2: %s\n", str1, str2);
  return 0;
}
