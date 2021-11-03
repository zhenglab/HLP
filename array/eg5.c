#include <stdio.h>
int main()
{
  int nums[10] = {1, 10, 6, 296, 177, 23, 0, 100, 34, 999};
  int i, num, subscript = -1;
  printf("Please input an integer: ");
  scanf("%d", &num);
  for(i=0; i<10; i++){
    if(nums[i] == num){
      subscript = i;
      break;
    }
  }
  if(subscript<0){
    printf("%d isn't in the array.\n", num);
  }else{
    printf("%d is in the array, and its subscript is %d.\n", num, subscript);
  }
  return 0;
}
