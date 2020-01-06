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
  printf("%f\n", un.b);
  printf("%c\n", un.c);
  return 0;
}//联合体




/*
   结构体(struct)中所有变量是“共存”的
   优点是“有容乃大”，全面；
   缺点是struct内存空间的分配是粗放的，不管用不用，全分配。
   联合体(union)中是各变量是“互斥”的
   缺点就是不够“包容”；
   但优点是内存使用更为精细灵活，也节省了内存空间。
*/
