#include <stdio.h>

int main()
{
  int a = 100;
  char str[20] = "c.biancheng.net";
  printf("%#x, %#x, %s\n", &a, str, str);
  printf("sizeof int: %d, size of str[20]: %d\n", sizeof(a), sizeof(str));
  return 0;
}
