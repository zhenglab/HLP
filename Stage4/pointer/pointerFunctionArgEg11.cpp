#include <iostream>
using namespace std;
void func()
{
    int a=0;//auto int a=0;//2011 C++新标准
    static int b=0;
    a=a+1;
    b=b+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    for(int i=0;i<5;i++)
    {
	func();
	cout<<"Call Again!"<<endl;
    }
    return 0;
}
