#include <stdio.h>

int main()
{
  int a[10];  //长度为10
  int b[3*5];  //长度为15
  int c[4+8];  //长度为12
  
  int m = 3, n;
  scanf("%d", &n);
  int d[m], e[n];

  printf("Please input %d numbers: \n", m);
  for(int i=0; i<m; i++)
    {
      scanf("%d", &d[i]);
    }
  for(int i=0; i<m; i++)
    {
      printf("%d ", d[i]);
    }
  printf("\n");

  printf("Please input %d numbers: \n", n);
  for(int i=0; i<n; i++)
    {
      scanf("%d", &e[i]);
    }
  for(int i=0; i<n; i++)
    {
      printf("%d ", e[i]);
    }
  printf("\n");

  return 0;
}
