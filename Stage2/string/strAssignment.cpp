#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[]="C++ language",str2[20];
    int i=0;
    while(str1[i]!='\0')
    {
	str2[i]=str1[i];
	i++;
    }
    //str2[i]='\0';
    cout<<"String1:"<<str1<<" "<<strlen(str1)<<" "<<sizeof(str1)<<endl;
    cout<<"String2:"<<str2<<" "<<strlen(str2)<<" "<<sizeof(str2)<<endl;
    return 0;
}
