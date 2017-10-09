#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[3];
    *p=100;
    cout<<*p++<<endl;
    cout<<*p--<<endl;
    cout<<*--p<<endl;
    return 0;
}
