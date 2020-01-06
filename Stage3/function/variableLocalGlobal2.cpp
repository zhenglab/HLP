#include <iostream>
using namespace std;
int a=0,b=0;
void exchange(int a, int b)
{
    int p;
    if(a<b)
    {
	p=a;a=b;b=p;
    }
    cout<<"exchange: "<<a<<" "<<b<<endl;
}
int main()
{
    cout<<"Init: "<<a<<" "<<b<<endl;
    cin>>a>>b;
    exchange(a,b);
    cout<<"main: "<<a<<" "<<b<<endl;
    return 0;
}
