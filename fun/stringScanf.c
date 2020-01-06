#include <stdio.h>

int main()
{
    char str[10];
    printf("Enter the string:");
    scanf("%s",str);
    printf("You entered:%s\n",str);
    return 0;
}




/*
   abort trap 6
   scanf 数组越界
   undefined behavior
*/
