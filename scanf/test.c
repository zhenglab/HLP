#include <stdio.h>
int main()
{
    int a;
    char b;
    float c,sum;
    scanf("%d %c%f",&a,&b,&c);
    printf("a=%d, b=%c, c=%f\n",a,b,c);
    sum=a+b+c;
    printf("%f\n",sum);

    return 0;
}
