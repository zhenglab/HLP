#include <iostream>
using namespace std;
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<"a="<<"\t\t"<<a<<endl;
    cout<<"&a[0]="<<"\t\t"<<&a[0]<<endl<<endl;

    cout<<"a+1="<<"\t\t"<<a+1<<endl;
    cout<<"&a[0]+1="<<"\t"<<&a[0]+1<<endl<<endl;

    cout<<"*a="<<"\t\t"<<*a<<endl;
    cout<<"a[0]="<<"\t\t"<<a[0]<<endl;
    cout<<"&a[0][0]="<<"\t"<<&a[0][0]<<endl<<endl;

    cout<<"*a+1="<<"\t\t"<<*a+1<<endl;
    cout<<"a[0]+1="<<"\t\t"<<a[0]+1<<endl;
    cout<<"&a[0][0]+1="<<"\t"<<&a[0][0]+1<<endl<<endl;

    return 0;
}
