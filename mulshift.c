#include<stdio.h>
int main()
{
	unsigned int num,number,pos;
	printf("enter the number");
	scanf("%x",&number);
	printf("enter the position");
	scanf("%x",&pos);
	num=number & (~(1<<pos));
	printf("0x%x",num);
	return 0;
}
