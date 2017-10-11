#include <stdio.h>
int main()
{
  int a[4] = {20, 345, 700, 22};
  int b[4] = {56720, 9999, 20098, 2};
  int c[4] = {233, 205, 1, 6666};
  int d[4] = {34, 0, 23, 23006783};
  printf("%-9d %-9d %-9d %-9d\n", a[0], a[1], a[2], a[3]);
  printf("%-9d %-9d %-9d %-9d\n", b[0], b[1], b[2], b[3]);
  printf("%-9d %-9d %-9d %-9d\n", c[0], c[1], c[2], c[3]);
  printf("%-9d %-9d %-9d %-9d\n", d[0], d[1], d[2], d[3]);
  return 0;
}
