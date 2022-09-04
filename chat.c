#include<stdio.h>
int main()
{
 	unsigned x=0x12345678;
	char *ch;
	ch=(char*)&x;
	printf("0x%x\n",*ch);
	if(*ch==0x78)
	printf("little ");
	else
	printf("big");
	printf("%d\n%d",sizeof(ch),sizeof(*ch));
	return 0;
}
