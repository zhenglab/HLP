#include <stdio.h>
int main()
{
  int a[10] = {0}, max, min, i;
  //从控制台获取用户输入并赋值给数组元素
  for(i=0; i<10; i++){
    scanf("%d", &a[i]);
  }
  //假设a[0]是最大值也是最小值
  max = a[0], min = a[0];
  for(i=1; i<10; i++){
    if(a[i] > max){
      max = a[i];
    }
    if(a[i] < min){
      min = a[i];
    }
  }
  printf("The max is %d, The min is %d\n", max, min);
  return 0;
}
