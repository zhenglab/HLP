#include <stdio.h>
int main()
{
    char *str = "http://vision.ouc.edu.cn";
    int len = strlen(str), i;
    
    printf("%s\n", str); 
    
    for(i=0; i<len; i++)
    {
	printf("%c", *(str+i));
    }
    printf("\n");

    for(i=0; i<len; i++)
    {
	printf("%c", str[i]);
    }
    printf("\n");
   
    return 0;
}
