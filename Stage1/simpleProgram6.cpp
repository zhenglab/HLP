#include<iostream>
using namespace std;
int main()
{
  int i=0;
  cout<<"从大到小输出20以内的奇数："<<endl;
  for (i=20;i>=0;i--)
    {
      if (i%2 != 0)
        cout<<i<<endl;
    }
  return 0;
}
