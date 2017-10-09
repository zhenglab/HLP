#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="hello";
    int i=0,len=0;
    str[3]='\0';
    while(str[i++])
    {
	++len;
    }
    cout<<"len="<<len<<endl;
    cout<<"str.length()="<<str.length()<<endl;
    cout<<str<<endl;
    return 0;
}
