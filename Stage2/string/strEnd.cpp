#include <iostream>
#include <string>
using namespace std;
int main()
{
    //char str[]="hello";
    string str="hello";
    str[3]='\0';
    cout<<str<<endl;
    return 0;
}
