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
空白字符：空白字符会使scanf函数在读操作中略去输入中的一个或多个空白字符。
非空白字符：一个非空白字符会使scanf()函数在读入时剔除掉与这个非空白字符相同的字符。
https://baike.baidu.com/item/scanf/10773316?fr=aladdin

scanf()函数接收输入数据时，遇以下情况结束一个数据的输入：
① 遇空格、“回车”、“跳格”键。
② 遇宽度结束。
③ 遇非法输入。
http://blog.csdn.net/21aspnet/article/details/174326
*/
