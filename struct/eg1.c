#include<stdio.h>
#include<string.h>
//定义结构体，可以在主函数内定义
struct student
{
  char name[32];
  char gender;
  int age;
  //其boy是先定义到后边初始化，people是定义的同时初始化，但是这两种用法不建议使用
}boy,people = {"yyy", 'y', '0'};   
int main()
{
  printf("%s\n%c\n%c\n", people.name, people.age, people.gender);
  struct student person = {"xxx", 'x', 'x'};
  printf("%s\n%c\n%c\n", person.name, person.age, person.gender);
  //对boy进行初始化
  strcpy(boy.name, "Jack");
  boy.age = 24;
  boy.gender = 'm';
  printf("%s\n%d\n%c\n", boy.name, boy.age, boy.gender);
  //对girl和girl1进行定义及初始化
  struct student girl,girl1;
  strcpy(girl.name, "Alisa");
  girl.age = 24;
  girl.gender = 'w';
  printf("%s\n%c\n%c\n", girl.name, girl.age, girl.gender);
  //结构体变量可以直接赋值给相同类型结构体
  girl1 = girl;
  printf("%s\n%c\n%c\n", girl1.name, girl1.age, girl1.gender);
  return 0;
}//结构体变量定义及初始化
