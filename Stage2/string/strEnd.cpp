#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[]="hello";
    //string str="hello";
    cout<<str<<endl;
    str[3]='\0';
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
	cout<<str[i];
    cout<<endl;
    return 0;
}
