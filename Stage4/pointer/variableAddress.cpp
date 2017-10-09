#include <iostream>
using namespace std;
int main()
{
    int a=7;

    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<&a<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<a<<endl;
    cout<<*&a<<endl;

    return 0;
}
