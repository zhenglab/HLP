#include <stdio.h>
int *func()
{
  int n = 7;
  return &n;
}
void swap()
{
  int temp;  //临时变量
  temp = 10000;
}
int main()
{
  int *p = func(), n, m;
  printf("vision.ouc.edu.cn\n");
  m=4;
  n=6;
  swap();
  int a=3;
  printf("hello\n");
  n = *p;
  printf("value = %d\n", n);
  return 0;
}
