#include<stdio.h>
void display(void);
void(*funcp)(void);
	void display()
{
	printf("hello");
}

int main()
{
int a=3,*p;
	p=&a;
	display();
	funcp=&display;
        (*funcp)();
}
