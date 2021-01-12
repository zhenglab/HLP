/*
*   C语言 实现长整数的相加
*   @author 李政 <1244109467@qq.com>
*/

#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

void longadd(char* s1,char* s2 ,int* s3)
{
    int arr1[MAXLEN];
    int arr2[MAXLEN];
    int arr3[MAXLEN];
    int i;

    //求字符串长度　倒序放在int 数组里面
    int len1 = strlen(s1);
    for( i = 0; i < len1; i++)
    {
        arr1[i] = s1[len1-1-i] - '0';
    }
    //求字符串长度　倒序放在int 数组里面
    int len2 = strlen(s2);
    for( i = 0; i < len2; i++)
    {
        arr2[i] = s2[len2-1-i] - '0';
    }
    //加法运算
    for( i = 0; i < MAXLEN; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    //数据处理　超过9的　进行取余　并且进位
    for( i = 0; i < MAXLEN; i++)
    {
        if(arr3[i] >= 10)
        {
            arr3[i+1] += arr3[i] / 10;
            arr3[i] = arr3[i] % 10;
        }
        s3[i] = arr3[i];
    }

    return;
}

int main(int argc, char const *argv[])
{
    char buff1[MAXLEN];
    char buff2[MAXLEN];
    int arr[MAXLEN];

    puts("input 1:");
    gets(buff1);
    puts("input 2:");
    gets(buff2);

    longadd(buff1,buff2,arr);
    //通过ｚ变量的值过滤前面的０ 倒序输出
    int z = 0;
    for(int j =MAXLEN -1 ; j >= 0 ; j-- )
    {
        if(z == 0)
        {
            if(arr[j] != 0)
            {
                printf("%d",arr[j]);
                z= 1;
            }
        }
        else
        {
            printf("%d",arr[j]);
        }   
    }
    //如果z值没有改变　则输出０
    if( z== 0)
    {
        printf("0\n");
    }

    return 0;
}
