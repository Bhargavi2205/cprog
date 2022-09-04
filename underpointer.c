#include<stdio.h>
int main()
{
	int arr[5]={0,1,2,3,4};
	int *ptr[5]={arr,arr+1,arr+2,arr+3,arr+4};
	for(int i=0;i<5;i++)
	{
		printf("array[%d] =%d ptr[%d]=%d *ptr[%d]=%d\n",i,arr[i],i,ptr[i],i,*ptr[i]);
	}
	return 0;
}

