#include<stdio.h>
#include<string.h>
struct date
{
  int year;
  int month;
  int day;
};
struct student
{
  char name[32];
  int age;
  struct date birth;   //结构体嵌套
};
int main()
{
  struct student stu;
  strcpy(stu.name, "jack");
  stu.age = 25;
  stu.birth.year = 1991;
  stu.birth.month = 3;
  stu.birth.day = 21;
  printf("His name is %s\nHe births in %d.%d.%d\n", stu.name, 
         stu.age, stu.birth.year, stu.birth.month, stu.birth.day);
  return 0;
}//结构体嵌套
