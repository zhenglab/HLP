#include <iostream>
#include <stdio.h>

int main()
{
    int a=12;
    while (scanf("%d", &a) != EOF)
    {
	std::cout<<a<<std::endl;
    }
    return 0;
}
