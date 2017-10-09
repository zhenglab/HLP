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
    int a[2]={3,5};
    change(a[0],a[1]);
    cout<<"main1: "<<a[0]<<" "<<a[1]<<endl;
    return 0;
}
