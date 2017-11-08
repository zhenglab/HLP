#include<stdio.h>
enum type
{
  A,               //若不赋值，默认为0，B为1，C为2
  B,
  C,
  D = 12,
  E = 3,
  F                //最后一个没有“,”，F递增为4
};
int main()
{
  enum type num;
  //  num.A   //ERROR
  num = A;
  printf("input num:");
  scanf("%d", &num);
  switch(num)
  {
  case A:
    printf("0\n");
    break;
  case B:
    printf("1\n");
    break;
  default:
    break;
  }
  return 0;
}//枚举类型
