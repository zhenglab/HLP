#include <iostream>
using namespace std;
int main()
{
    char a[10]={'a','b','c','d','e','f','g','h','i','j'};
    //char a[10]={'a','b','c','d','e'};
    //char c[]={'C','h','i','n','a'};
    //char c[]="China";
    //char c[5]="China";//c[6] \0
    for(int i=0;i<10;i++)
	cout<<a[i];
    return 0;
}
