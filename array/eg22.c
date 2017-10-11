#include <stdio.h>
int main()
{
  int n;
  printf("Input string length: ");
  scanf("%d", &n);
  char str[n];
  printf("Input string: ");
  scanf("%s",str);
  puts(str);
  return 0;
}
