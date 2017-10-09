#include <stdio.h>
#include <math.h>
int main()
{
  int m,i,k,n=0;
  for(m=101;m<=200;m=m+2){
    k=sqrt(m);  // m 的开方
    for(i=2;i<=k;i++)
      if(m%i==0)  break;
    if(i>=k+1){
      printf("%d\n",m);
      n=n+1;
    }
  }
  printf("\n");
  return 0;
}
