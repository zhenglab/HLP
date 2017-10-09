#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch = 'A';
    char str[20] = "vision.ouc.edu.cn";
    float flt = 10.234;
    int no = 150;
    double dbl = 20.123456;
    
    cout<<"Character is "<<ch<<endl;
    cout<<"String is "<<str<<endl;
    cout<<"Float value is "<<setprecision(8)<<flt<<endl;
    cout<<"Integer value is "<<no<<endl;
    cout<<"Double value is "<<setprecision(8)<<dbl<<endl;
    cout<<"Octal value is "<<oct<<no<<endl;
    cout<<"Hexadecimal value is "<<hex<<no<<endl;

    cout<<"0x"<<hex<<setfill('0')<<setw(4)<<0x424<<endl;

    return 0;
}
