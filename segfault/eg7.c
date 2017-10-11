#include <stdio.h>
#include <stdlib.h>
int main()
{
  int* p = (int*)0xC0000fff;
  *p = 10;
}
