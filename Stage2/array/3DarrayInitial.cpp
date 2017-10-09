#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[5][3][4]={0};
    for(int i=0;i<5;i++)
    {
	for(int j=0;j<3;j++)
	{
	    for(int k=0;k<4;k++)
	    {
		cout<<setw(3)<<a[i][j][k];
	    }
	    cout<<endl;
	}
	cout<<endl;
    }
    return 0;
}
