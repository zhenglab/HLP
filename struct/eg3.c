#include<stdio.h>
#include<string.h>
struct student
{
  char gender;
  int age;
};                          //结构体的“;”不能少
#define STU struct student  //宏定义结构体
int main()
{
  STU stu, stu1;          //宏定义STU使用
  stu.gender = 'm';
  stu1.age = 25;
  printf("%d\n%c\n", stu1.age, stu.gender);
}//宏定义结构体
