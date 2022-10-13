#include <stdio.h>

int main()
{
  int i;
  char j;
  for(i = 0;i < 10;i++)
    {
      //scanf("%c",&j);/* 这里%前没有空格 */
      scanf(" %c",&j);/* 注意这里%前有个空格 */
    }
}
