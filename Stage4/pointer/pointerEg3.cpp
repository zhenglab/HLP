#include <iostream>
using namespace std;
int main()
{
    int n=0;
    int *p=&n;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    return 0;
}
