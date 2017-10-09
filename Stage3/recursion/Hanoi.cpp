//http://britton.disted.camosun.bc.ca/hanoi.swf
#include <iostream>
using namespace std;
// 将m个盘子从A经过B移动到C
void move(int m, char x, char y, char z)
{
    if(m==1)
    {
	cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
    }
    else
    {
	move(m-1,x,z,y);
	cout<<"把一个盘子从"<<x<<"移动到"<<z<<endl;
	move(m-1,y,x,z);
    }
}
int main()
{
    int n;
    cout<<"请输入盘数n=";
    cin>>n;
    cout<<"在3根柱子上移"<<n<<"只盘的步骤为："<<endl;
    move(n,'A','B','C');
    return 0;
}
