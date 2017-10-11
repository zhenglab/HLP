#include <stdio.h>
#include <string.h>
int main()
{
  char str1[15], str2[]="C Language";
  strcpy(str1, str2);
  puts(str1);
  printf("\n");
  return 0;
}
