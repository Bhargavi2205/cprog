#include<stdio.h>
int main()
{
	int num,sum=0,x;
	printf("enter the number");
	scanf("%d",&num);
	while(num>10)
	{
		sum=0;
		while(num!=0)
		{
			x=num%10;
			sum+=x;
			num=num/10;
		}
		num=sum;
	}
	printf("sum of the number is:%d ",num);
	return 0;
}
