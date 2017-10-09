#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int);
int main()
{
    int a;
    cout<<"Please enter an integer: "<<endl;
    while(cin>>a)
    {
	if(checkPrime(a))
	    cout<<a<<" is a prime."<<endl;
	else
	    cout<<a<<" is not a prime."<<endl;
    }
    return 0;
}

bool checkPrime(int number)
{
    int i,k;
    k=sqrt(number);
    for(i=2;i<=k;i++)
    {
	if(number%i==0)
	    return 0;
    }
    return 1;
}
