#include <stdio.h>
int main()
{
  char *p;  
  p = NULL;  
  *p = 'x';  
  printf("%c", *p);  
  return 0;
}
