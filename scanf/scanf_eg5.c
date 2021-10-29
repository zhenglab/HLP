#include <stdio.h>
int main()
{
	int a,b;
	char c;
	int num;

	num=scanf("%d %d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	printf("%d numbers\n",num);
	//fflush(stdin);
	getchar();
	scanf("%c",&c);
	printf("char=%c\n",c);

	return 0;
}
