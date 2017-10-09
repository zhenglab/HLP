#include <stdio.h> 
int main() 
{
  int a=123; 
  char c='t';

  printf("input\n");
  scanf("%d%c",&a,&c);
  scanf("%d%c",&a,&c);
  scanf("%d%c",&a,&c);
  printf("%d\n%c\n",a,c);

  return 0;
}

/*
对于scanf( "%d%c ",&a,&c)，scanf语句执行时，首先试图从缓冲区中读入一个%d类型的数据，如果和
第一个参数匹配，则继续从缓冲区中读取数据和第二个参数进行匹配，依次进行下去，直到匹配完所有的参数；
如果其中有一个参数不匹配，那就从这个地方跳出，忽略这个scanf后面所有的参数，而去执行下一条语句。
*/
