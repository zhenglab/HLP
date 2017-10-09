#include <iostream>
using namespace std;
int main()
{
    int num,count[10]={0};
    for(int i=0;i<20;i++)
    {
	cin>>num;
	for(int j=0;j<10;j++)
	{
	    if(num==j) count[j]++;
	}
    }
    for(int i=0;i<10;i++)
    {
	if(count[i]!=0)
	    cout<<i<<"输入了"<<count[i]<<"次"<<endl;
    }
    return 0;
}
