#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		printf("%d",rem);
	}
	
	return 0;
}

