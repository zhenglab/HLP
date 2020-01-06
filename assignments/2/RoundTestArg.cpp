#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
  float x = atof(argv[1]);
  cout << "argc = " << argc << endl;
  cout << "argv[0] = " << argv[0] << endl;
  cout << "x = " << x << endl;
  cout << "ceil(x) = " << ceil(x) << endl;
  cout << "floor(x) = " << floor(x) << endl;
  cout << "round(x) = " << round(x) << endl;

  return 0;
}
