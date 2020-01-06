#include <stdio.h>
int max(int *intArr, int len)
{
  int i, maxValue = intArr[0];  //假设第0个元素是最大值
  for(i=1; i<len; i++){
    if(maxValue < intArr[i]){
            maxValue = intArr[i];
    }
  }
  
  return maxValue;
}
/*
int max(int intArr[6], int len)
{
  int i, maxValue = intArr[0];  //假设第0个元素是最大值
  for(i=1; i<len; i++){
    if(maxValue < intArr[i]){
      maxValue = intArr[i];
        }
  }
  return maxValue;
}
*/
/*
int max(int intArr[], int len)
{
  int i, maxValue = intArr[0];  //假设第0个元素是最大值
  for(i=1; i<len; i++){
    if(maxValue < intArr[i]){
      maxValue = intArr[i];
    }
  }
  return maxValue;
}
*/
int main()
{
  int nums[6], i;
  int len = sizeof(nums)/sizeof(int);
  //读取用户输入的数据并赋值给数组元素
  for(i=0; i<len; i++){
        scanf("%d", nums+i);
  }
  printf("Max value is %d!\n", max(nums, len));
  return 0;
}




/*
   C语言不允许直接传递数组的所有元素，而必须传递数组指针。
   参数的传递本质上是一次赋值的过程，赋值就是对内存进行拷贝；
   所谓内存拷贝，就是将一块内存上的数据复制到另一块内存上。
   int、float、char等基本类型数据，占用内存小，内存拷贝快；
   而数组是一系列数据的集合，数据的数量没有限制，内存拷贝可能
   会很长，程序效率低，故C语言不支持数据集合的直接赋值。
   C/C++、Java、Python等也禁止对大块内存进行拷贝，底层指针实现。
*/
