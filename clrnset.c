#include<stdio.h>
int main()
{
	unsigned int num,number,pos,nbits,newvl;
	printf("enter the number");
	scanf("%x",&number);
	printf("enter the position");
	scanf("%x",&pos);
	printf("nbits");
	scanf("%x",&nbits);
	printf("enter new value");
	scanf("%x",&newvl);
	unsigned int value=((1<<nbits)-1);
	num=number&(~(value<<pos));
	newvl=num|(newvl<<pos);
	printf("0x%x",newvl);
	return 0;
}
