#include <iostream>
using namespace std;
int main()
{
    int a[5]={10,11,12,13,14};
    int *p=NULL;
    cout<<a<<endl;
    p=a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    return 0;
}
