#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a sentence:"<<endl;
    while((c=cin.get())!=EOF)
    //while(cin.get(c))
	cout<<c;
    return 0;
}
