#include <iostream>
using namespace std;
// fab(n)=fab(n-1)+fab(n-2)
// fab(1)=fab(2)=1
int fab(int n)
{
    if(n==1)
	return 1;
    else if(n==2)
	return 1;
    else
	return fab(n-1)+fab(n-2);
}
int main()
{
    cout<<fab(5)<<endl;
    return 0;
}
