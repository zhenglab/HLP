#include<stdio.h>
union var {
    long int l;
    int i;
};
int main() {
    union var v;
    v.l = 5;
    printf("v.l is %d\n",v.i);
    v.i = 6;
    printf("now v.l is %ld! the address is %p\n",v.l,&v.l);
    printf("now v.i is %d! the address is %p\n",v.i,&v.i);
    return 0;
}




/*
   union固定首地址
   union按最大需求开辟一段内存空间
*/
