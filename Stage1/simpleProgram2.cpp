#include<iostream>
using namespace std;
int main()
{
  float a=0, b=0, temp=0;
  cout<<"Input a and b: "<<endl;
  cin>>a>>b;
  cout<<"a="<<a<<", b="<<b<<endl;
  temp=a; a=b; b=temp;
  cout<<"a="<<a<<", b="<<b<<endl;
  return 0;
}
