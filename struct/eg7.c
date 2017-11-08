#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct student 
  {
    int age;
    char name[32];
    //相当将struct student重命名为STU，而非宏定义
  }STU;
  typedef int M;
  M a = 4;      //M和int的作用是一样的，只是重命名
  int b = 5;
  M c = a + b;
  printf("%d + %d = %d\n", a, b, c);
  return 0;
}//typedef重命名
