#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a=3.14159265358979323846264338327950238419716939937510582097494459230781640628620899862803487534211706793214808;
    double b=3.14159265358979323846264338327950238419716939937510582097494459230781640628620899862803487534211706793214808;
    long double c=3.14159265358979323846264338327950238419716939937510582097494459230781640628620899862803487534211706793214808;
    cout<<a<<endl;
    cout<<setprecision(100)<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}