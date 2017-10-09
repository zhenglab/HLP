#include <iostream>
using namespace std;
void change(int c, int d)
{
    cout<<"change1: "<<c<<" "<<d<<endl;
    c=30;
    d=50;
    cout<<"change2: "<<c<<" "<<d<<endl;
}
int main()
{
    int a=3,b=5;
    change(a,b);
    cout<<"main1: "<<a<<" "<<b<<endl;
    return 0;
}
