#include<stdio.h>
#include<stdlib.h>
 
int main() 
{
    double pi = 0.0; 
    double num = 4.0; //4倍
    double denom = 1.0;  //分母
    long int loop;
    long int accuracy = 900000;
    int n;
 
    printf("Accuracy set at %ld\n", accuracy);
    printf("term\t\t pi\n");
 
    for (loop = 1; loop <= accuracy; loop++) 
    {
	if (loop % 50000 == 0) 
	{
	    printf("%ld\t\t", loop);
	    double d = 0;
	    for (int i = 1; i <= loop; i++) 
	    {
		if ((i - 1) % 2 == 0)
		    d = d + (denom / (2 * i - 1));
		else
		    d = d - (denom / (2 * i - 1));
	    }
	    pi = num * (d);
	    printf("%.6lf", pi);
	    printf("\n");
	}
    }
    return 0;
}
