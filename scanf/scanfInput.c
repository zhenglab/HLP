#include <stdio.h>

int main()
{
    int a,x;
    printf("Please input a number:\n");
    x = scanf("%d", &a);               //这不是将a的值赋给x，而是用来判断
  //这是定义一个整型变量 x，scanf是输入一个值a，当你输入一个整型值，就会得到x = 1(判断为真)；而当你键输入一个字符或其他不符合条件的内容时，就会得到x = 0(判断为假)
    printf("\nreturn: %d\n", x);
    printf("input: %d\n", a);
    return 0;
}

