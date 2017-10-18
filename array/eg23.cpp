#include <iostream>
using namespace std;

int main()
{
  // 二维字符数组
  char a[3][6]={"Tread","Micro","Soft"};
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<6;j++)
        {
          cout<<a[i][j];
        }
      cout<<endl;
    }

  cout<<endl;

  // 字符串数组
  string b[]={"Tread","Micro","Soft"};
  for(int i=0;i<3;i++)
    {
      cout<<b[i]<<endl;
    }
  
  return 0;
}
  
