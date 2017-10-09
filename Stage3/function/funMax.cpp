#include <iostream>
using namespace std;
int max(int a, int b)
{
    if(a>b)
	return a;
    else
	return b;
}

int main()
{
    float m=3.0,n=4.0;
    float result=0;
    result=max(m,n);
    cout<<result;
    //cout<<max(3,4);
    return 0;
}
