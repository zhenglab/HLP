#include <iostream>
using namespace std;
int sum(int array[],int n)//const int p[] 指向符号常量的指针 read-only
{
    for(int i=0;i<10-1;i++)//i<10
    {
	*(array+1)=*array+*(array+1);
	array++;
    }
    return *array;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(a,10)<<endl;
    for (int i=0;i<10;i++)
	cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
