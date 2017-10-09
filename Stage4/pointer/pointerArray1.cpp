#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[3];
    cout<<*p<<endl;
    *p=100;
    cout<<a[3]<<endl;
    return 0;
}
