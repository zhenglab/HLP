#include<iostream>
using namespace std;
int max(int a, int b)
{
  if(a>b)
	return a;
  else
	return b;
}
//void main(){}
int main(int argc, char* argv[]) 
{
  cout<<"argc="<<argc<<endl;
  cout<<"argv:"<<endl;
  for(int i = 0; i<argc; i++)
	cout<<argv[i]<<endl;
  //  cout<<max(4,3)<<endl;
  //  int a=argv[1]-'0',b=argv[2]-'0';
  cout<<endl;
  if (argc != 3)
    {
      cout<<"Argument Error."<<endl;
      cout<<"Usage:"<<endl;
      cout<<"\t"<<argv[0]<<" arg1 arg2"<<endl;
      return 7;
    }
  cout<<max(atoi(argv[1]),atoi(argv[2]));

  return 0;   
}   
