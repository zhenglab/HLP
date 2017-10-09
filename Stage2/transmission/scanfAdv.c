#include <stdio.h>
#include <stdbool.h>

bool skip()
{
    scanf("%*[^0-9]");
    return true;
}

int main()
{
    int n;
    while (skip() && scanf("%d", &n)!=EOF)
	printf("%d\n", n);
    return 0;
}
