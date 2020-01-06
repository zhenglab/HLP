#include <stdio.h>

int main()
{
  int a = 100;
  char str[20] = "c.biancheng.net";
  printf("%x, %#x, %s\n", &a, str, str);
  printf("sizeof int: %lu, size of str[20]: %lu\n", sizeof(a), sizeof(str));
  return 0;
}




/*
   变量名、函数名、字符串名和数组名本质相同
   都是地址的助记符

   变量名在程序中表示数据本身
   函数名、字符串名和数组名在程序中表示的是
   代码块或数据块的首地址
*/
