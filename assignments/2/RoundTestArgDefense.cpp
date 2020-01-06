#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
  if( argc != 2)
    {
      cout <<" Usage: " << argv[0] << " Float_Number" << endl;
      return -1;
    }
  
  float x = atof(argv[1]);
  cout << "x = " << x << endl;
  cout << "ceil(x) = " << ceil(x) << endl;
  cout << "floor(x) = " << floor(x) << endl;
  cout << "round(x) = " << round(x) << endl;

  return 0;
}
