#include <stdio.h>

void print_day(int day)
{
  char days[8][10] = { "", "Monday", "Tuesday",
                       "Wednesday", "Thursday", "Friday",
                       "Saturday", "Sunday" };
  
  if (day < 1 || day > 7)
    printf("Illegal day number!\n");
  printf("%s\n", days[day]);
}

int main(void)
{
  print_day(2);
  return 0;
}
