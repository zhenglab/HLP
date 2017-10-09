#include <stdio.h>
int main()
{
  int n=0;
  printf("input a string:\n");
  while(getchar()!='\n') n++;
  printf("%d",n);
  return 0;
}
