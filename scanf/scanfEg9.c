#include <stdio.h> 
int main() 
{ 
  int a;
  printf("input the data:\n");
  scanf("%d\n",&a);//这里多了一个回车符\n
  //scanf("%d",&a);
  printf("%d",a);
  return 0;
} 
