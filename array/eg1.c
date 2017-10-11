#include <stdio.h>
int main()
{
  int a[6] = {299, 34, 92, 100};
  //int a[6] = {1, 1, 1, 1, 1, 1};
  //int a[] = {1, 1, 1, 1, 1, 1};
  //int a[6] = 1;
  int b[6], i;
  //从控制台输入数据为每个元素赋值
  for(i=0; i<6; i++){
    scanf("%d", &b[i]);
  }
  //输出数组元素
  for(i=0; i<6; i++){
    printf("%d  ", a[i]);
  }
  putchar('\n');
  for(i=0; i<6; i++){
    printf("%d  ", b[i]);
    }
  putchar('\n');
  
  return 0;
}
