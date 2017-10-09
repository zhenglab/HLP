#include <stdio.h> 

int main() 
{ 
  int n = 5; 
  char c[n]; 
  for(int i = 0; i < n; i++) 
    c[i] = scanf("%c",&c[i]);
  //c[i] = scanf("%c ",&c[i]);
  printf("%s",c); 

  return 0; 
}
