#include <stdio.h>
int main()
{
  char test[1];
  printf("%c", test[1000000000]);
  //printf("%c", test[1]);
  return 0;
}
