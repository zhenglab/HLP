#include <stdio.h>
#include <stdlib.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
int main()
{
  int i,len;
  char str1[30] = "http://c.biancheng.net";
  char str2[] = "C Language";
  char str3[30] = "You are a good\0 boy!";
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);
  GET_ARRAY_LEN(str2,len);
  printf("size of str2: %lu\n", sizeof(str2));
  printf("size of str2[0]: %lu\n", sizeof(str2[0]));
  printf("length of str2: %d\n", len);
  return 0;
}
