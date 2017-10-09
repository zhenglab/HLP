#include<iostream>
using namespace std;

int main()
{
    char grade='a';

    cin>>grade;

    switch(grade)
    {
	case 'a': cout<<"85~100"<<endl;
	case 'b': cout<<"70~84"<<endl;
	case 'c': cout<<"60~69"<<endl;
	case 'd': cout<<"<60"<<endl;
	default: cout<<"Error"<<endl;
    }

    return 0;
}
