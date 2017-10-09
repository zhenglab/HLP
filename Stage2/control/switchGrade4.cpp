#include<iostream>
using namespace std;

int main()
{
    char grade='a';

    cin>>grade;

    switch(grade)
    {
	case 'a': cout<<"85~100"<<endl;
	default: cout<<"Error"<<endl;
	case 'b': cout<<"70~84"<<endl;
	case 'c':
	case 'd':
	case 'e':
	case 'f': cout<<"60~69"<<endl;
	case 'g': cout<<"<60"<<endl;
    }

    return 0;
}
