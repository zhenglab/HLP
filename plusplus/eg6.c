#include <stdio.h>

int main()
{
  int i=3;
  int j=4;
  int a = i++ + i++ + i++;
  int b = ++j + ++j + ++j;
  printf("i=%d, j=%d\n", i, j);
  printf("a=%d, b=%d\n", a, b);
  int c = i++ + ++j;
  printf("i=%d, j=%d\n", i, j);
  printf("c=%d\n", c);
  
  return 0;
}
