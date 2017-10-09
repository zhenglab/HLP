#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10],*p=NULL,*q=NULL,temp;
    for(p=a;p<a+10;p++)
	cin>>*p;
    for(p=a,q=a+9;p<q;p++,q--)
    {
	temp=*p;*p=*q;*q=temp;
    }
    for(p=a;p<a+10;p++)
	cout<<setw(3)<<*p;
    return 0;
}
