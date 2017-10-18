#include <string>
#include <iostream>
using namespace std;
int main()
{
  string strinfo=" //*---Hello Word!......------";
  string strset="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  int first = strinfo.find_first_of(strset);
  if(first == string::npos)
    {
      cout<<"not find any characters"<<endl;
      return -1;
    }
  int last = strinfo.find_last_of(strset);
  if(last == string::npos)
    {
      cout<<"not find any characters"<<endl;
      return -1;
    }
  cout << strinfo.substr(first, last - first + 1)<<endl;
  return 0;
}
