#include<stdio.h>
int main()
{
    int a,b;

    while(scanf("%x %x",&a,&b)!=EOF)
    {
	printf("%d %x\n",a+b,a+b);
    }

    return 0;
}
