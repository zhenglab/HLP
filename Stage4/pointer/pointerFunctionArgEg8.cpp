#include <iostream>
using namespace std;
int *getInt1()
{
    int value1=20;
    return &value1;
}
int *getInt2()
{
    int value2=30;
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
