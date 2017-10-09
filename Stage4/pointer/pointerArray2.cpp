#include <iostream>
using namespace std;
int main()
{
    int a[5]={10,11,12,13,14};
    //数组名不是变量（常量），不能被赋值。
    //数组名相当于指向数组第一个元素的指针
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<&a[0]<<endl;
    cout<<a[0]<<endl;
    return 0;
}
