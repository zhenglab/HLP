#include<iostream>
using namespace std;
int main() {
  //定义变量
  //all为全部十个数：odd记录奇数、even记录偶数，odd、even至多10个
  int all[10], odd[10], even[10];
  //i，j为循环变量
  int i = 0, j = 0;
  //依次输入10个数至all，i为all的下标
  for (; i < 10; i++)
    cin >> all[i];
  //numOdd，numEven分别记录奇数、偶数的个数
  int numOdd = 0;
  int numEven = 0;
  //遍历数组all，如果当前all[i]为奇数则放入odd[numOdd]，
  //偶数放入even[numEven]
  for (i = 0; i < 10; i++) {
    if (all[i] % 2 != 0) {//奇数
      odd[numOdd] = all[i];
      numOdd++;
    } else {//偶数
      even[numEven] = all[i];
      numEven++;
    }
  }
  //对odd选择排序
  for (i = 0; i < numOdd - 1; i++) {
    for (j = i; j < numOdd; j++) {
      if (odd[j] > odd[i]) {
        //tmp为临时变量
        int tmp = odd[i];
        odd[i] = odd[j];
        odd[j] = tmp;
      }
    }
  }
  //对even选择排序
  for (i = 0; i < numEven - 1; i++) {
    for (j = i; j < numEven; j++) {
      if (even[j] < even[i]) {
        //tmp为临时变量
        int tmp = even[i];
        even[i] = even[j];
        even[j] = tmp;
      }
    }
  }
  //输出奇数
  for (i = 0; i < numOdd; i++) {
    cout << odd[i] << " ";
  }
  cout << endl;
  //输出偶数
  for (i = 0; i < numEven; i++) {
    cout << even[i] << " ";
  }
  cout << endl;
  return 0;
}
