#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a sentence:"<<endl;
    while((c=getchar())!=EOF)
	cout<<c;
    return 0;
}
