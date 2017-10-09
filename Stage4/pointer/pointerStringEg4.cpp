#include <iostream>
using namespace std;
int main()
{
    char buffer[10]="ABC";
    char *pc;
    pc="hello";
    cout<<pc<<endl;
    pc++;
    cout<<pc<<endl;
    cout<<*pc<<endl;
    pc=buffer;
    cout<<pc;
    return 0;
}
