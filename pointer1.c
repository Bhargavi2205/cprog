#include<stdio.h>
main()
{
	char a='x',*p1=&a;
	printf("sizeof(p1)=%d,sizeof(*p1)=%d\n",sizeof(p1),sizeof(*p1));
}

