#include <iostream>
using namespace std;
int main()
{
    const int a=78;
    const int b=28;
    int c=18;
    const int *pi=&a;
    //*pi=58;//error *pi不能被赋值
    pi=&b;//可以给pi重新赋值
    //*pi=68;//error *pi不能被赋值
    pi=&c;
    //*pi=88;//error *pi不能被赋值
    return 0;
}
