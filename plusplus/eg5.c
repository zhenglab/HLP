#include <stdio.h>

int main()
{
  int i=1;
  int j=1;
  int a = i++ + i++ + i++ + i++ + i++ + i++ + i++; // 七个
  int b = ++j + ++j + ++j + ++j + ++j + ++j + ++j;
  printf("a=%d, b=%d\n", a, b);
  printf("i=%d, j=%d\n", i, j);

  return 0;
}
