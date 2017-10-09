#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char a=64;
    int b='Z';
    int c=b-a;
    char d=6+256;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    cout<<endl;

    cout<<"This is the first line!\n";
    cout<<'\a'<<'\\'<<'\n';

    return 0;
}
