#include <stdio.h>

int main()
{
  int i=3;
  int j=4;
  int a = i++ + i++ + i++;
  int b = ++j + ++j + ++j;
  printf("a=%d, b=%d\n", a, b);
  printf("i=%d, j=%d\n", i, j);
  
  return 0;
}
