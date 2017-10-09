#include <iostream>
using namespace std;
int main()
{
    int n=3;
    int a[n];
    for(int i=0;i<n;i++)
	cin>>a[i];
    cout<<endl;
    for(int i=0;i<n;i++)
	cout<<a[i]<<endl;

    cout<<endl;
    cout<<endl;

    n=4;
    for(int i=0;i<n;i++)
	cin>>a[i];
    cout<<endl;
    for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
    
    return 0;
}
