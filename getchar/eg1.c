#include<stdio.h>
int main()
{
  int c;
  while( (c=getchar()) != '\n' )  //从控制台流中读取字符，直到按回车键结束
    printf ("%c", c);  //输出读取内容

  return 0;
}
