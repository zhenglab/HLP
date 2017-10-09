#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0;
    a=5>3&&2||8<4-(b=!0);
    cout<<a<<" "<<b<<endl;
    
    cout<<endl;

    int i=0,x=1,y=2,z=3;
    i=++x||++y||z++;
    cout<<i<<" "<<x<<" "<<y<<" "<<z<<endl;

    return 0;
}
