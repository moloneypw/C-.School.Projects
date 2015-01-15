#include<stdio.h>

int main()
{
	int x=3;
	int y=8;
	int m=0;
	int *p1;
	int *p2;
	int *p3;

	printf("the value of x is %d \n", x);
	printf("the value of y is %d \n", y);

	p1=&x;
	p2=&y;
	p3=&m;
	*p3=*p2;
	*p2=*p1;
	*p1=*p3;

	printf("the new value of x is %d \n", x);
	printf("the new value of y is %d \n", y);



}