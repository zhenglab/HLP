#include <stdio.h>
int main()
{
	char str1[20], str2[20];
	scanf("%s",str1);
	printf("%s\n",str1);
	//fflush(stdin);
	char string[100];
	scanf("%[^\n]",string);
	scanf("%s",str2);
	printf("%s\n",str2);
	
	return 0;
}
