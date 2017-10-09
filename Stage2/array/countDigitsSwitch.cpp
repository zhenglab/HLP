#include <iostream>
using namespace std;
int main()
{
    int num,count[10]={0};
    for(int i=1;i<=20;i++)
    {
	cin>>num;
	switch(num)
	{
	    case 0: count[0]++;break;
	    case 1: count[1]++;break;
	    case 2: count[2]++;break;
	    case 3: count[3]++;break;
	    case 4: count[4]++;break;
	    case 5: count[5]++;break;
	    case 6: count[6]++;break;
	    case 7: count[7]++;break;
	    case 8: count[8]++;break;
	    case 9: count[9]++;break;
	}
    }
    for(int i=0;i<10;i++)
    {
	if(count[i]!=0)
	    cout<<i<<"输入了"<<count[i]<<"次"<<endl;
    }
    return 0;
}
