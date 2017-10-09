#include<iostream>
using namespace std;
int main() {
  int all[10], odd[10], even[10]; //odd记录奇数、even记录偶数
  int i = 0, j = 0; //i，j为循环计数变量
  for (; i < 10; i++) //输入10个数
    cin >> all[i];
  int numOdd = 0; //numOdd，numEven分别记录奇数、偶数的个数
  int numEven = 0;
  for (i = 0; i < 10; i++) //遍历数组all，奇数放入odd，偶数放入even
    {
      if (all[i] % 2 != 0) {//奇数
        odd[numOdd] = all[i];
        numOdd++;
      } else {//偶数
        even[numEven] = all[i];
        numEven++;
      }
    }
  for (i = 0; i < numOdd; i++)//输出奇数
    cout << odd[i] << " ";
  cout << endl;
  for (i = 0; i < numEven; i++)//输出偶数
    cout << even[i] << " ";
  return 0;
}
