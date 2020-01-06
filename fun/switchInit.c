#include <stdio.h>
int main()
{
    int a=1;
    switch(a)
    {
	int b=20;
	case 1: 
		printf("b is %d\n",b);break;
	default:
		printf("b is %d\n",b);break;
    }
    return 0;
}




/*
   switch-case语句会把变量b的初始化直接跳过
   程序会输出一个随机的内存值
*/
