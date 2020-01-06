#include <stdio.h>

int main()
{
    int i;
    i = 10;
    printf("i: %d\n",i);
    printf("sizeof(i++): %d\n",sizeof(i++));
    printf("i: %d\n",i);
    return 0;
}




/*
   sizeof 不是函数，而是一个操作符；
   sizeof(i++) 求i++类型的size；
   在程序运行前（编译时）就可以完成；
   程序运行时不再有i++表达式。
*/
