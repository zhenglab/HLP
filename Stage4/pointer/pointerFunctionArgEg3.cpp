#include <iostream>
using namespace std;
int MaxValue(int (*p)[4])
{
    int max=p[0][0];
    for(int i=0;i<3;i++)
	for(int j=0;j<4;j++)
	    if(p[i][j]>max)
		max=p[i][j];
    return max;
}
int main()
{
    int a[3][4]={{1,3,5,7},{9,11,13,15},{2,4,6,8}};
    cout<<"The Max Value is "<<MaxValue(a);
    return 0;
}
