#include <iostream>
using namespace std;
int main()
{
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;
    for(p=&a[0][0];p<&a[0][0]+12;p++)
    {
	cout<<p<<" "<<*p<<endl;
    }
    return 0;
}
