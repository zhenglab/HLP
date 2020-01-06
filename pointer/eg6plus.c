#include <stdio.h>
int main()
{
  char s[30];
  gets(s);
  s[2] = 'Z';
  printf("%s\n",s);

  char *str = "Hello World!";
  str = "I love C!";  //C
  printf("%s\n",str);
  str[3] = 'P';  //W
  return 0;
}




/*
   与字符数组的本质区别在于：
   字符数组存储在全局数据区或栈区（读写）
   而指针表示的字符串存储在常量区（只读）

   段错误 Segment error：
     对一个NULL指针解引用
     访问程序进程以外的内存空间
   总线错误 Bus error：
     对一个错误的起始地址进行解引用

   解引用：
     引用就是引用变量的地址
     解就是把该地址对应的东西解开
     解引用是返回内存地址中保存的值
   The asterisk is used to deference or to declare a pointer variable.

   C程序虚拟内存空间中，从低地址到高地址依次为：
   代码区、堆区（向上增长）、栈区（向下增长）、常量区
   NULL指针位置是虚拟内存地址为0的位置（不属于上述四区）
   访问上述4个区以外的地址容易造成段错误
*/
