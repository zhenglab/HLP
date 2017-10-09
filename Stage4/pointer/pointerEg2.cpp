#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    int *p1=NULL,*p2=NULL;
    int *temp=NULL;
    cin>>a>>b;
    p1=&a;
    p2=&b;
    if(*p1<*p2)
    {
	temp=p1;p1=p2;p2=temp;
    }
    cout<<"max="<<*p1<<",min="<<*p2<<endl;
    return 0;
}

