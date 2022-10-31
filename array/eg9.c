#include <stdio.h>
#include <string.h>
int main()
{
  char str1[40]="My name is ";
  char str2[10];
  printf("Input your name:");//输入超过10个字符测试
  gets(str2);//fgets(str2,20,stdin)
  strcat(str1,str2);
  puts(str1);
  return 0;
}
