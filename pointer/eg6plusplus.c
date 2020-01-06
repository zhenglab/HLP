#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    p=5;
    //*p=5;
    printf("%d",a);
    return 0;
}




/*
   p=5表示将整型值5存储到指针p中（地址为5）
   *p=5表示将整型值5存储到指针p指向的地址里面（地址5）
   变量一旦确定，地址是不可更改的。
*/
