#include <iostream>
#include "max.h"
using namespace std;
int main()
{
    cout<<max(3,4);
    return 0;
}
/*
int main(int argc, char* argv[])
{
    if(argc!=3)
    {
	cout<<"Arguments Error!"<<endl;
	cout<<"Usage:"<<endl;
	cout<<"\t"<<argv[0]<<" Number1 Number2"<<endl;
	return 7;
    }
    cout<<"The maximum number is: "<<max(argv[1],argv[2]);
    return 0;
}
*/
