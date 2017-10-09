#include <iostream>
using namespace std;
float max(float, float);

int main()
{
    int m=3,n=4;
    float result=0;
    result=max(m,n);
    //result=sqrt(4.0);
    cout<<result;
    //cout<<max(3,4);
    return 0;
}

float max(float a, float b)
{
    if(a>b)
	return a;
    else
	return b;
}
