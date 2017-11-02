#include <stdio.h>
int main()
{
  int arr[] = { 99, 15, 100, 888, 252 };
  int len = sizeof(arr) / sizeof(int);  //求数组长度
  int i;
  for(i=0; i<len; i++)
    {
      printf("%d  ", *(arr+i) );  //*(arr+i)等价于arr[i]
    }
  printf("\n");
  return 0;
}

/*
int main()
{
  int arr[] = { 99, 15, 100, 888, 252 };
  int i, *p = arr, len = sizeof(arr) / sizeof(int);
  for(i=0; i<len; i++)
    {
      printf("%d  ", *(p+i) ); //*p++ *arr++ | *p++ *++p (*p)++
    }
  printf("\n");
  return 0;
}
*/

/*
int main()
{
  int arr[] = { 99, 15, 100, 888, 252 };
  int *p = &arr[2];  //也可以写作 int *p = arr + 2;
  printf("%d, %d, %d, %d, %d\n", *(p-2), *(p-1), *p, *(p+1), *(p+2) );
  return 0;
}
*/
