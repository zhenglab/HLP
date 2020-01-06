#include <stdio.h>
#include <unistd.h>

int main()
{
    while(1)
    {
	fprintf(stdout,"hello-std-out");
	fprintf(stderr,"hello-std-err");
	sleep(1);
    }
    return 0;
}




/*
   stdout和stderr是不同设备描述符。
   stdout是块设备，stderr则不是。
   对于块设备，只有当下面几种情况下才会被输入：
   1）遇到回车；
   2）缓冲区满；
   3）flush被调用。
   而stderr则不会。
*/
