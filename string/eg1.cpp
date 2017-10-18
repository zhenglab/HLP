#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
  ifstream in("name.txt");
  string strtmp;
  vector<string> vect;
  while(getline(in, strtmp, '\n'))
    vect.push_back(strtmp.substr(0, strtmp.find(' ')));
  sort(vect.begin(), vect.end());
  vector<string>::iterator it=unique(vect.begin(), vect.end());
  copy(vect.begin(), it, ostream_iterator<string>(cout, "\n"));
  return 0;
}
