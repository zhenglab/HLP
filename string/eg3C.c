#include <stdio.h>
int main()
{
    char a[80];
    gets(a);
    int i, j = 0;
    for(i=0; a[i]; i++)
	if((a[i] >= 'a' && a[i] <='z') || (a[i] >='A' && a[i] <= 'Z'))
	{
	    a[j] = a[i];
	    j++;
	}
    a[j] = '\0';
    puts(a);
    return 0;
}
