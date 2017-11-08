#include<stdio.h>
#include<string.h>
struct
{
  char gender;
  int age;
  //无名结构变量必须在定义后定义,
}stu;        
int main()
{
  stu.age = 28;
  printf("%d\n", stu.age);
  return 0;
}//无名结构体（很少使用）
