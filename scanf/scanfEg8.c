#include <stdio.h>

int main()
{
  int a,b,c; /* 计算 a+b */
  scanf("%d,%d",&a,&b);
  //while(scanf("%d,%d",&a,&b)!=2) fflush(stdin);
  c=a+b;
  printf("%d+%d=%d",a,b,c);

  return 0;
}
