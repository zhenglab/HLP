#include <iostream>
using namespace std;
int main()
{
    int c=77;
    int *pointer=NULL;
    pointer=&c;
    //pointer=c;
    
    cout<<&c<<endl;
    cout<<pointer<<endl;
    cout<<*pointer<<endl;

    cout<<endl;

    int iCount=18;
    int *iPtr=&iCount;
    *iPtr=58;
    cout<<iCount<<endl;
    cout<<iPtr<<endl;
    cout<<&iCount<<endl;
    cout<<*iPtr<<endl;
    cout<<&iPtr<<endl;
    return 0;
}
