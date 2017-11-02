#include <stdio.h>
int main()
{
  int a = 2, b = 1, c = 3;
  int *p = &c;
  int i;
  for(i=0; i<8; i++){
    printf("%d, ", *(p+i) );
  }
  return 0;
}
