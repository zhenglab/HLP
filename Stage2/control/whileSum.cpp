#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    i=1;
    while(i<=100)
    {
	sum=sum+i;
	cout<<i<<" "<<sum<<endl;
	i++;//notice
    }
    cout<<sum<<endl;
    //cout<<endl<<i<<endl;
    return 0;
}
