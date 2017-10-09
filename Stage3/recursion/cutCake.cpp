#include <iostream>
using namespace std;
int main()
{
    int blockCount=0;
    int i=0,N=0;
    cin>>N;
    blockCount=1;
    for(i=1;i<=N;i++)
	blockCount=blockCount+i;
    cout<<"最多可切"<<blockCount<<"块"<<endl;
    return 0;
}
/*
// q(n)=q(n-1)+n
// q(0)=1
int q(int n)
{
    if(n==0)
	return 1;
    else
	return q(n-1)+n;
}
int main()
{
    cout<<q(4)<<endl;
    return 0;
}
*/
