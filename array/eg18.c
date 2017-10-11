#include <stdio.h>
int main()
{
  int a[3] = {10, 20, 30}, i;
  for(i=-2; i<=4; i++){
    printf("a[%d]=%d\n", i, a[i]);
  }
  return 0;
}
