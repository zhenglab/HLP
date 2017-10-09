#include <stdio.h>
int main()
{
  int a=0,n;
  printf("\n input n:    ");
  scanf("%d",&n);
  while (n--) printf("%d  ",a++*2);
  return 0;
}
