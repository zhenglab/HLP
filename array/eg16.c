#include <stdio.h>

int main()
{
  // 对单个元素赋值
  int a[3];
  a[0] = 3;
  a[1] = 100;
  a[2] = 34;
  // 整体赋值（不指明数组长度）
  float b[] = { 23.3, 100.00, 10, 0.34 };
  // 整体赋值（指明数组长度）
  int m[10] = { 100, 30, 234 };
  // 字符数组赋值
  char str1[] = "http://c.biancheng.net";
  // 将数组所有元素都初始化为0
  int arr[10] = {0};
  char str2[20] = {0};

  return 0;
}
