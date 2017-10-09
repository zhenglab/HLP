#include <iostream>
using namespace std;
#define N 4
int main()
{
    const int i=4;
    int a[i]={1,2,3,4};
    //int a[N]={1,2,3,4};
    cout <<"a[0]="<<a[0]<<endl
	 <<"a[1]="<<a[1]<<endl
	 <<"a[2]="<<a[2]<<endl
	 <<"a[3]="<<a[3]<<endl;
    return 0;
}
