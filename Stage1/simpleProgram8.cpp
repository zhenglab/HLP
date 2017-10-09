#include<iostream>
using namespace std;
int main()
{
  char a=' '; //用于存放用户输入的字母
  cout<<"猜猜我是哪个字母，最多猜5次哦："<<endl;
  int i=0; //用于记录猜过多少次了
  for (i=0;i<5;i++)
    {
      cin>>a;
      if (a == 'G') //如果猜中
        {
          cout<<"被你猜中了！"<<endl;
          break; //终止循环
        }
      else //如果没有猜中
        cout<<"你猜错了！接着猜吧！"<<endl;
    }
  return 0;
}
