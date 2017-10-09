#include <stdio.h>

int main()
{
  char string[50];
    
  /* scanf("%s",string); 不能接收空格符 */
  scanf("%[^\n]",string);
  //  scanf("%[^abc]",string);
  printf("%s\n",string);
  //%[] 扫描字符集合

  return 0;
}
