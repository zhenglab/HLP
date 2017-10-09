#include<iostream>
using namespace std;
int main()
{
    float weight=0,height=0,healthRate=0;
    cin>>weight>>height;//weight=>kg height=>m
    healthRate=weight/(height*height);
    if((18<=healthRate)&&(healthRate<=25))
	cout<<"体重适中！"<<endl;
    else if((25<healthRate)&&(healthRate<=30))
	cout<<"超重！注意控制！"<<endl;
    else if((30<healthRate)&&(healthRate<=35))
	cout<<"肥胖！减肥吧！"<<endl;
    else if((35<healthRate)&&(healthRate<=40))
	cout<<"重度肥胖！别吃了！"<<endl;
    else
	cout<<"请直接拨打120！"<<endl;
    return 0;
}
