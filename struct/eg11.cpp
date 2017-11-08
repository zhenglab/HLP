#include <iostream>
using namespace std;

struct st1 
{
  char a ;
  int  b ;
  short c ;
};

struct st2
{
  short c ;
  char  a ;
  int   b ;
};

int main()
{
  cout<<"sizeof(st1) is "<<sizeof(st1)<<endl;
  cout<<"sizeof(st2) is "<<sizeof(st2)<<endl;
  return 0 ;
}
