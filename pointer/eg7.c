#include <stdio.h>
void swap(int a, int b)
{
  int temp;  //临时变量
  temp = a;
  a = b;
  b = temp;
}
int main()
{
  int a = 66, b = 99;
  swap(a, b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}




/*
void swap(int *p1, int *p2)
{
  int temp;  //临时变量
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
int main()
{
  int a = 66, b = 99;
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
*/
