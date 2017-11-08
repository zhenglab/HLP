#include<stdio.h>
union untype
{
  int a;
  float b;
  char c;
};
int main()
{
  union untype un;
  un.a = 123;
  un.b = 3.14;
  un.c = 'f';
  printf("%d\n", un.a);  //一次只能访问一个值
  //printf("%d\n", un.b);
  //printf("%d\n", un.c);
  return 0;
}//联合体
