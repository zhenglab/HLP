#include <stdio.h>

int main()
{
  int a;
  char c;
  do
    {
      scanf("%d",&a);
      scanf("%c",&c);
      printf("a=%d     c=%c\n",a,c);
      //printf("c=%d\n",c);
    } while(c!='N');
}
//fflush(stdin);
//getch();
//getchar();
