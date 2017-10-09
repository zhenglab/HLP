#include <iostream>
using namespace std;
void change(int a, int b)
{
    cout<<"change1: "<<a<<" "<<b<<endl;
    a=30;
    b=50;
    cout<<"change2: "<<a<<" "<<b<<endl;
}
int main()
{
    int a=3,b=5;
    change(a,b);
    cout<<"main1: "<<a<<" "<<b<<endl;
    return 0;
}
