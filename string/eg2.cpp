#include <string>
#include <iostream>
using namespace std;
int main()
{
  string strinfo="Please input your name: ";
  cout << strinfo ;
  cin >> strinfo;
  if( strinfo == "winter" )
    cout << "you are winter!"<<endl;
  else if( strinfo != "wende" )
    cout << "you are not wende!"<<endl;
  else if( strinfo < "winter")
    cout << "your name should be ahead of winter"<<endl;
  else
    cout << "your name should be after of winter"<<endl;
  cout <<"Your name is: "<<strinfo<<endl;
  strinfo += ", Welcome to China!";
  cout << strinfo<<endl;
  string strtmp = "How are you? " + strinfo;
  for(int i = 0 ; i < strtmp.size(); i ++)
    cout<<strtmp[i];
  return 0;
}
