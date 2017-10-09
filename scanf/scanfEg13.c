#include <stdio.h> 
int main() 
{ 
  char strings[100];
  scanf("%[1234567890]",strings);
  printf("%s",strings);
  return 0;
} 
