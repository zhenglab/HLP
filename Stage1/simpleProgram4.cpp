#include<iostream>
using namespace std;
int main()
{
  char a='A';
  cout<<"猜猜我是哪个字母："<<endl;
  cin>>a;
  if (a != 'G')
    cout<<"你猜错了！ "<<endl;
  else if (a == 'G')
    cout<<"被你猜中了！"<<endl;
  return 0;
}
