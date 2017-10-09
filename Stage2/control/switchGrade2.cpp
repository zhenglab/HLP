#include<iostream>
using namespace std;

int main()
{
    char grade='a';

    cin>>grade;

    switch(grade)
    {
	case 'a': cout<<"85~100"<<endl;break;
	case 'b': cout<<"70~84"<<endl;break;
	case 'c': cout<<"60~69"<<endl;break;
	case 'd': cout<<"<60"<<endl;break;
	default: cout<<"Error"<<endl;
    }

    return 0;
}
