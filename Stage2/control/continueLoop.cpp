#include<iostream>
using namespace std;
int main()
{
    int n,counter=0;
    for(n=1;n<=100;n++)
    {
	if(n%3==0||n%5==0||n%7==0)
	    continue;
	cout<<n<<'\t';
	counter++;
	if(counter%10==0)
	    cout<<endl;
    }
    cout<<endl;
    return 0;
}
