#include <iostream>
using namespace std;
int get_int()
{
    int n=0;
    cout<<"Please input an integer:"<<endl;
    cin>>n;
    return n;
}

int main()
{
    int result=0;
    result=get_int();
    cout<<result;
    return 0;
}
