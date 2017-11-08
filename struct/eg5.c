#include<stdio.h>
#include<string.h>
struct student 
{
  int age;
  char name[32];
};
int main()
{
  struct student arr[3] = 
    {
      {24, "Jack"},
      {23, "Alisa"},
      {25, "Jays"}
    };//结构体数组
  printf("arr[0].age:%d\narr[1].name:%s\n",arr[0].age, arr[1].name);
  return 0;
}//结构体数组
