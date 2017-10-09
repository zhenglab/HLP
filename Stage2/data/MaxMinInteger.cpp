#include<iostream>
using namespace std;

int main()
{
    unsigned int a=0xFFFFFFFF;
    cout<<"Max unsigned int: "<<dec<<a<<endl;
    a=a+1;
    cout<<"Min unsigned int: "<<dec<<a<<endl;
    signed int b=0x7FFFFFFF;
    cout<<"Max signed int: "<<dec<<b<<endl;
    b=b+1;
    cout<<"Min signed int: "<<dec<<b<<endl;
    return 0;
}
