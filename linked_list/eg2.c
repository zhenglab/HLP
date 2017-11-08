#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student
{
  long num;
  float score;
  struct student *next;
};

struct student *create()
{
  struct student *p1, *p2, *head;
  int num;
  float score;
  int n = 0;
  
  head = NULL;
  
  p1 = p2 = (struct student *)malloc(LEN);
  
  printf("please input num and score.\n");
  scanf("%ld,%f", &p1->num, &p1->score);
  
  while(p1->num != 0)
    {
      n++;
      if(n == 1)
        head = p1;
      else
        p2->next = p1;
      p2 = p1;
      p1 = (struct student *)malloc(sizeof(struct student));
      printf("please input num and score.\n");
      scanf("%ld,%f", &p1->num, &p1->score);
    }
  p2->next = NULL;
  return head;
}

void printlist(struct student *head)
{
  struct student *p;
  p = head;
  if(head != NULL)
    {
      do
        {
          printf("num=%ld score=%f\n", p->num, p->score);
          p = p->next;
         } while(p != NULL);
    }
}

int main()
{
  struct student *head;
  head = create();
  printlist(head);
  return 0;
}
