#include <stdio.h>
#include <math.h>
int main()
{
  double p=0,j=1;
  int i;
  for( i=1;i<10000;i++ )  //此处i为项数
    {
      j=pow(-1.0,i+1)/(2*i-1);  //pow(x,y)求x的y次幂
      p+=j;
      printf("%lf\n",4*p);  //输出每一项的值
    }
  printf("%lf\n",4*p);  //输出最终pi值
  return 0;
}
