#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 81

int main()
{
    char s[N];
    int a[N]={0}, b[N]={0}, result[N]={0};
    int i, aLen, bLen, longer, resultLen, temp;

    gets(s); aLen = strlen(s); 
    for(i=0;i<aLen;i++) a[i] = s[aLen-1-i]-'0';
    gets(s); bLen = strlen(s); 
    for(i=0;i<bLen;i++) b[i] = s[bLen-1-i]-'0';

    longer = (aLen>bLen ? aLen : bLen);
    for(i=0;i<longer;i++){
        result[i] += (a[i] + b[i]) % 10;
        result[i+1] += (a[i] + b[i]) / 10;
    }

    resultLen = result[longer]==0 ? longer : longer+1;
    for(i=0;i<resultLen/2;i++){
        temp = result[i];  result[i] = result[resultLen-1-i]; result[resultLen-1-i] = temp;
    }
    for(i=0;i<resultLen;i++) printf("%d", result[i]);

    return 0;
}
