#include <stdio.h>  
#include <string.h>  
typedef struct changeable {
  int iCnt;  
  char pc[0];  
} schangeable;  

main()
{
  printf("size of struct changeable : %d\n",sizeof(schangeable));
  
  schangeable *pchangeable = (schangeable *)malloc(sizeof(schangeable) + 10*sizeof(char));
  printf("size of pchangeable : %d\n",sizeof(pchangeable));
  
  schangeable *pchangeable2 = (schangeable *)malloc(sizeof(schangeable) + 20*sizeof(char));
  pchangeable2->iCnt = 20;
  printf("pchangeable2->iCnt : %d\n",pchangeable2->iCnt);
  strncpy(pchangeable2->pc,"hello world",11);
  printf("%s\n",pchangeable2->pc);
  printf("size of pchangeable2 : %d\n",sizeof(pchangeable2));

  return 0;
}
