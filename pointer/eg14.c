#include <stdio.h>
int main()
{
  char *str[3] = {
    "c.biancheng.net",
    "C语言中文网",
    "C Language"
  };
  printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
  return 0;
}
/*
int main()
{
  char *str0 = "c.biancheng.net";
  char *str1 = "C语言中文网";
  char *str2 = "C Language";
  char *str[3] = {str0, str1, str2};
  printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
  return 0;
}
*/
