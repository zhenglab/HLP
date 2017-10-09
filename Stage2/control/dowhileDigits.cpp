#include<iostream>
using namespace std;

int main()
{
    int num;
    int count=0;

    cout<<"Please enter an integer:"<<endl;
    cin>>num;

    do
    {
	cout<<num%10;
	num=num/10;
	count++;
    } while(num!=0);
    cout<<endl;
    cout<<count<<" digits"<<endl;

    return 0;
}
