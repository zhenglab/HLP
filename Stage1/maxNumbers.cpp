#include<iostream>
using namespace std;
int main( )
{
  int number[45] = {78, 56, 69, 31, 36, 67, 31, 47, 69, 34, 45, 74, 61, 82, 43, 41, 76, 79, 81, 66, 54, 50, 76, 51, 53, 28, 74, 39, 45, 61, 52, 41, 43, 75, 78, 84, 72, 51, 43, 64, 75, 81, 69, 55, 74};
  int max = 0;
  int i = 0;
  for(i = 0; i < 45; i++)
  {
    if(number[i] > max) max = number[i];
  }
  cout<<"The Maximal Number is: "<<max;
  return 0;
}
