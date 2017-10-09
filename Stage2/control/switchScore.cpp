#include<iostream>
using namespace std;

int main()
{
    int score=0,num=0;
    cout<<"Please give the score:"<<endl;
    cin>>score;
    num=score/10;
    switch(num)
    {
	case 10: cout<<"A"<<endl;break;
	case 9: cout<<"A"<<endl;break;
	case 8: cout<<"B"<<endl;break;
	case 7: cout<<"C"<<endl;break;
	case 6: cout<<"D"<<endl;break;
	default: cout<<"E"<<endl;
    }
    return 0;
}
