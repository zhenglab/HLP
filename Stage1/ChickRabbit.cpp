#include <iostream>
using namespace std;
int main()
{
  int nCases, i, nFeet;
  //nCases 表示输入测试数据的组数，nFeet 表示输入的脚数。
  cin >> nCases;
  for (i=0;i<nCases;i++) {
    cin >> nFeet;
    if (nFeet % 2 != 0) // 如果有奇数只脚，则输入不正确，
                        // 因为不论2只还是4只，都是偶数
      cout << "0 0" << endl;
    else if (nFeet % 4 != 0)
      //若要动物数目最少，使动物尽量有4只脚
      //若要动物数目最多，使动物尽量有2只脚
      cout << nFeet / 4 + 1 << " " << nFeet / 2 << endl;
    else
      cout << nFeet / 4 << " " << nFeet / 2 << endl;
  }
  return 0;
}
