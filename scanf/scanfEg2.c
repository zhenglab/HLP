#include <stdio.h>

int main() 
{ 
  int a,b,c;
  
  scanf("%d,%d,%d",&a,&b,&c);
  //scanf("a=%d,b=%d,c=%d",&a,&b,&c);
  printf("%d,%d,%d\n",a,b,c);
  
  return 0;
}

/*
scanf()函数接收输入数据时，遇以下情况结束一个数据的输入：
① 遇空格、“回车”、“跳格”键。
② 遇宽度结束。
③ 遇非法输入。
http://blog.csdn.net/21aspnet/article/details/174326
*/
