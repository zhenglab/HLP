#include <iostream>
using namespace std;
int absolute(int n)
{
    if(n<0)
	return (-n);
    else
	return n;
}

int main()
{
    int m=-123,result=0;
    result=absolute(m);
    cout<<result;
    return 0;
}
