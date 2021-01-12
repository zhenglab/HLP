#include <stdio.h>

#pragma pack(push)   //保存对齐状态
#pragma pack(1)//设定为4/16字节对齐
struct test
{
    char   m1;
    double   m4;
    int     m3;
};
#pragma   pack(pop)//恢复对齐状态

int main()
{
    int a=0;
    float b=0.0;
    char c='c';
    struct test stru;
    printf("sizeof(int)=%d\n",sizeof(a));
    printf("sizeof(float)=%d\n",sizeof(b));
    printf("sizeof(char)=%d\n",sizeof(c));
    printf("sizeof(struct)=%d\n",sizeof(stru));
    return 0;
}
