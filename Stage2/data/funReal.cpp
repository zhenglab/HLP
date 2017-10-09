#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a=0,b=0;
    a=123456.789e5;
    b=a+20;//12345678920?
    cout<<setprecision(20)<<b<<endl;
    return 0;
}
