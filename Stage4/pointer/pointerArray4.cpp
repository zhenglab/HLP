#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10],i;
    int *p=NULL;
    p=a;
    for(i=0;i<10;i++)
	//cin>>a[i];
        cin>>*p++;
    for(i=9;i>=0;i--)
	//cout<<setw(3)<<a[i];
    	cout<<setw(3)<<*p--;
    return 0;
}
