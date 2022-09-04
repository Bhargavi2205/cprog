#include<stdio.h>
int main()
{
	unsigned int num,number,pos,nbits;
	printf("enter the number");
	scanf("%x",&number);
	printf("enter the position");
	scanf("%x",&pos);
	printf("nbits");
	scanf("%x",&nbits);
	unsigned int value=((1<<nbits)-1);
	num=number | (value<<pos);
	printf("0x%x",num);
	return 0;
}
