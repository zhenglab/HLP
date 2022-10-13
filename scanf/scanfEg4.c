#include <stdio.h>
#include <unistd.h>

int main()
{
  char str[80];
  char str1[80];
  char str2[80];
    
  scanf("%s",str);/* 此处输入：I love you! */
  printf("%s\n",str);
  sleep(5);/* 这里等待5秒，告诉你程序运行到什么地方*/
  scanf("%s",str1);/* 这两句无需你再输入，是对键盘缓冲区再扫描 */
  scanf("%s",str2);/* 这两句无需你再输入，是对键盘缓冲区再扫描 */
  printf("%s\n",str1);
  printf("%s\n",str2);
  
  return 0;
}
