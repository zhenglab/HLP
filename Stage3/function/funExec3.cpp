#include <iostream>
using namespace std;
void exchange(int a, int b)
{
    int p;
    cout<<"exchange1: "<<a<<" "<<b<<endl;
    if(a<b)
    {
	p=a;a=b;b=p;
    }
    cout<<"exchange2: "<<a<<" "<<b<<endl;
}
int main()
{
    int a=3,b=5;
    exchange(a,b);
    cout<<"main1: "<<a<<" "<<b<<endl;
    return 0;
}
