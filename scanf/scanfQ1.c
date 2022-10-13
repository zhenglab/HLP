#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    float sum;

    printf("输入1个整型数、1个字符、1个浮点数：\n");
    scanf("%d %c %f",&a,&b,&c);
    printf("您输入的整型数、字符、浮点数分别是：%d %c %f\n",a,b,c);
    sum=a+b+c;
    printf("最终求和结果：%f\n",sum);

    return 0;
}

//https://blog.csdn.net/weixin_65334260/article/details/125333927
