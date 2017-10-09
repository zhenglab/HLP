#include <iostream>
using namespace std;
//全局变量
int value1=20;
int value2=30;
int *getInt1()
{
    return &value1;
}
int *getInt2()
{
    return &value2;
}
int main()
{
    int *p,*q;
    p=getInt1();
    q=getInt2();
    cout<<*p<<endl;
    return 0;
}
