#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    i=1;
    while(i<=100)
    {
	sum=sum+i;
	i++;//notice
	cout<<i<<" "<<sum<<endl;
    }
    cout<<sum<<endl;
    //cout<<endl<<i<<endl;
    return 0;
}
