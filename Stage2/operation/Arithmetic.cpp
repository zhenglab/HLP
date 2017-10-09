#include<iostream>
using namespace std;

int main()
{
    int i=3;
    int j=0;
    j=++i;
    cout<<i<<" "<<j<<endl;
    j=i++;
    cout<<i<<" "<<j<<endl;
    cout<<++i<<endl;
    cout<<i++<<endl;
    
    cout<<endl;

    int x=3;
    cout<<-x++<<endl;
    cout<<-++x<<endl;
//    cout<<(-x)++<<endl;
//    cout<<++x++<<endl;

    cout<<endl;

    //编译器非自右向左
    int a=0,b=0,c=2,d=0,e=2,f=2;
    cout<<a<<" "<<a++<<" "<<endl;
    cout<<++b<<" "<<b++<<" "<<endl;
    cout<<c<<" "<<(c++)+(++c)<<" "<<endl;
    cout<<(d=f++)+(e=f)<<endl;
    cout<<f<<" "<<d<<" "<<e<<endl;

    return 0;
}
