/*
Patrick Moloney
This is a swap program. This swaps 3 different varibles using pointers. Two pointers switch the varibles positions.
The other pointer simple uses another pointer to change the pointers value while keeping the original varible that it was assigned its original value.

*/


#include<stdio.h>

void swapv(int *p1, int *p2, int *p3);

int main()
{
	int x=0, y=3, z=5;
	printf("before swap x is %d, y is %d, and z is %d.\n", x,y,z);
	swapv(&x, &y, &z);
	printf("after swap x is %d, y is %d, and z is %d.\n", x,y,z);

}

void swapv (int *p1, int *p2, int *p3)
{
	int temp=0;
	printf("the original value of p1 is %d \n", *p1);
	p1=p3;
	temp=*p2;
	*p2=*p3;
	*p3=temp;
	temp=*p1;
	printf("the ending value of p1 is %d \n", *p1);

	
	

}