#include<iostream>
using namespace std;

int main()
{
    int a=0,x=0;
    x=(a=3,6*3);
    cout<<x<<endl;
    x=a=3,6*3;
    cout<<x<<endl;

    return 0;
}
