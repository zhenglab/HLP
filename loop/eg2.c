#include <stdio.h>
int main()
{
  int i,sum=0;
  i=1;
  while(i<=100){
    sum=sum+i;
    i++;
  }
  printf("%d\n",sum);
  return 0;
}
