#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int *pa=&a;

    int b[6]={1,2,3,4,5,6};
    int *pb=b;

    char c[6]={'h','e','l','l','o','\0'};
    char *pc=c;

    cout<<a<<endl;
    cout<<pa<<endl<<endl;

    cout<<b<<endl;
    cout<<pb<<endl<<endl;

    cout<<c<<endl;
    cout<<pc<<endl;

    return 0;
}
