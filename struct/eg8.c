#include<stdio.h>
struct A
{
  char a;
  char b;
  int c;
};
struct B
{
  char a;
  int b;
  char c[23];
};
struct C
{
  char a;
  int c[3];
};
struct D
{
  char a;
  short b;
  char c;
};
struct E
{
  char a;
  char b;
  short c;
};
int main()
{
  printf("sizeof(struct A) = %ld\n",sizeof(struct A));
  printf("sizeof(struct B) = %ld\n",sizeof(struct B));
  printf("sizeof(struct C) = %ld\n",sizeof(struct C));
  printf("sizeof(struct D) = %ld\n",sizeof(struct D));
  printf("sizeof(struct E) = %ld\n",sizeof(struct E));
  return 0;
}//结构体大小





/*
内存对齐：#pragma pack(n)
  Linux:4字节
  Windows:8字节
默认从偏移量为0的位置开始存储
每个字母所占字节数是其自身大小的整数倍

https://www.zhihu.com/question/27862634
公式1:前面的地址必须是后面的地址正数倍,不是就补齐
公式2:整个struct的地址必须是最大字节的整数倍
*/
