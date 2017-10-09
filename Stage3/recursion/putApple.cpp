#include <iostream>
using namespace std;

int count(int m, int n)
{
    //if(m<=1||n<=0) return 1;//wrong
    //if(m==0||n==1) return 1;//right
    if(m<=1||n<=1) return 1;
    if(m<n)
	return count(m,m);
    else
	return count(m,n-1)+count(m-n,n);
}

int main()
{
    int apples, plates;
    cin>>apples>>plates;
    cout<<count(apples,plates);
}

int app(int m, int n)//m代表苹果数目，n代表盘子数目  
{  
    int i=0;  
    int sum=0;  
    if(n==1)  
        return 1;  
    for(i=m;i>=0;i=i-n)  
    {  
        sum=sum+app(i,n-1);  
    }  
    return sum;  
}  
/*
int main()  
{  
    int m=0,n=0;  
    cin>>m>>n;  
    if(m>=n)  
    {  
        cout<<app(m,n)<<endl;  
    }  
    else  
    {  
        cout<<app(m,m)<<endl;  
    }  
    return 0;  
} 
*/
