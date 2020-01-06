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
  struct date birth;
};
int main()
{
  struct student stu;
  struct student *p = &stu;      //结构体指针
  strcpy(p->name, "jack");
  p->age = 25;
  p->birth.year = 1991;
  p->birth.month = 3;
  p->birth.day = 21;
  printf("His name is %s\nHe is %d years old\nHe was born on %d.%d.%d\n", 
	  p->name, p->age, p->birth.year, p->birth.month, p->birth.day);
  return 0;
}//结构体指针
