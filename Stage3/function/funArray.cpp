#include <iostream>
using namespace std;
void change(int a[])
{
    cout<<"change1: "<<a[0]<<" "<<a[1]<<endl;
    a[0]=30;
    a[1]=50;
    cout<<"change2: "<<a[0]<<" "<<a[1]<<endl;
}
int main()
{
    int a[2]={3,5};
    change(a);
    cout<<"main1: "<<a[0]<<" "<<a[1]<<endl;
    return 0;
}
