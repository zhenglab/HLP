#include <stdio.h>
#include <string.h>
int main()
{
  char c='c';
  int i=10;
  char buf[100];
  printf("%s", c); //试图把char型按照字符串格式输出，这里的字符会解释成整数，
  //再解释成地址，所以原因同上面那个例子
  printf("%s", i); //试图把int型按照字符串输出
  memset(buf, 0, 100);
  sprintf(buf, "%s", c);  //试图把char型按照字符串格式转换
  memset(buf, 0, 100);
  sprintf(buf, "%s", i);//试图把int型按照字符串转换

  return 0;
}
