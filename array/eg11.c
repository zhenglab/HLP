#include <stdio.h>
#include <string.h>
int main()
{
  char *a = "aBcDeF";
  char *b = "AbCdEf";
  char *c = "aacdef";
  char *d = "aBcDeF";
  printf("strcmp(a, b) : %d\n", strcmp(a, b));
  printf("strcmp(a, c) : %d\n", strcmp(a, c));
  printf("strcmp(a, d) : %d\n", strcmp(a, d));
  return 0;
}
