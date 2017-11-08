#include <stdio.h>
#include <stdlib.h>
struct student
{
  long num;
  float score;
  struct student *next;
};
int main()
{
  struct student a, b, c, *head, *p;
  a.num = 99101; a.score = 89.5;
  b.num = 99103; b.score = 90;
  c.num = 99107; c.score = 85;//对结点的 num 和 score 成员赋值
  head = &a;//将结点 a 的起始地址赋给头指针 head
  a.next = &b;//将结点 b 的起始地址赋给 a 结点的 next 成员
  b.next = &c;
  c.next = NULL;// c 结点的 next 成员不存放其他结点地址
  p = head;//使 p 指针指向 a 结点
  do
    {
      printf("%ld %5.1f\n", p->num, p->score);// 输出 p 指向的结点的数据
      p = p->next;//使 p 指向下一结点
    } while(p != NULL);//输出完 c 结点后 p 的值为 NULL
  return 0;
}
