/*	Assignment #2 
	Systems Programming, Spring 2006
	Created by, Patrick Moloney
*/
#include<stdio.h>
#include<stdlib.h>

void array_accommodation(int *a, int size);
void print_array(int *a, int size);
void min_max(int *a, int size, int *min, int *max);
void bubble_sort(int *a, int size);
void bubble_sort_back(int *a, int size);
void binary_search(int *a, int size);
void rec_binary_search(int *a, int low, int high, int *target, char answer);
void lin_search(int *a, int size);
void backwards1(int *a, int size);
void backwards2(int *a, int size);
void backwards3(int *a, int marker);
void swap(int *x, int *y);
void add_number(int *a, int size);
//this declares all the functions that will be used in the program

int main()
{
	// this is the main function and is where all the functions in the program will be called from

	int *a;
	int size;
	int min;
	int max;
	int marker=0;
	int target;
// here i am intializing all the varibles being used in the main function

	printf("How many numbers would you like?\n");
	scanf(" %3d", &size);
// here i am letting the user intiaize the size of the array
	a=(int*)calloc(size, sizeof(int));
//here i am using the calloc funtion to intialize the pointer a so that it can be passed to all the functions
	array_accommodation(a, size);
// this calls the function that allows the user to select the numbers they want in the array
	print_array(a, size);
	backwards2(a, size-1);
// this calls the function that non recursivly prints the numbers backwards using pointers
	print_array(a, size);
	printf("this is backwards recussivly using pointers\n");
	backwards3(a, size-1);
// this calls the function that recursivly uses pointers to print the numbers backwards
	print_array(a, size);
	printf("this is the array printed backwards non recurrisvly\n");
	backwards1(a, size);
// this calls the function that non recursivly prints the array backwards
	print_array(a, size);
	printf("this is the bubble sort function\n");
	bubble_sort(a, size);
// this calls the bubble sort function, bubble sort is a simple function that puts all the numbers in the array in numerical order
	print_array(a, size);
	printf("this is the binary search\n");
	binary_search(a, size);
// this calls the binary search function which searches for a number within the array using a binary search
	print_array(a, size);
	printf("this is the recursive binary-search. \n");
	printf("please enter a number you would like to search for\n");
	scanf("%3d", &target);
/* this askes the user to select a number search for in the array giving it the value of target, 
	this will be passed to the recursive binary search function*/
	rec_binary_search(a, 0, size-1, target, 'N');
// this calls the recursive binary search function which searches for the number the user has chosen (target) using recursive binary
	printf("this is the linear search\n");
	lin_search(a, size);
// this calls the linear serch function which serches for a number chosen by the user using a linear search
	min_max(a, size, &min, &max);
// this calls the function that serches for the highest and lowest numbers in the array
	printf("your lowest number is %d \n", min);
	printf("your highest number is %d \n", max);
	add_number(a, size);
// this calls the function that allows a user to add a number to the array
	return 0;
}

void array_accommodation(int *a, int size)
{
	int i;
	printf("Enter %d numbers \n", size);
	for(i=0; i<size; i++)
	scanf(" %3d", &a[i]);

}

void print_array(int *a, int size)
{
	int i;
	printf("here is your updated array \n");
	for(i=0; i<size; i++)
	printf("%3d \n", a[i]);


}


void bubble_sort(int *a, int size)
{
	int i;
	int j;
	for(j=0; j<size-1; j++)
		for(i=0; i<size-1; i++)
			if(a[i]>a[i+1])
				swap(&a[i], &a[i+1]);
	printf("here is your array in numerical order \n");

}
void backwards1(int *a, int size)
{
	int i;
	int j;
	for(j=0; j<size-1; j++)
		for(i=0; i<size-1; i++)
			if(a[i]<a[i+1])
				swap(&a[i], &a[i+1]);
	printf("here is your array in reverse order \n");


}

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;

}

void add_number(int *a, int size)
{
	int new_number;
	int position;
	int i;
	int *b;

	printf("Please enter a number you want to add to the array\n");
	scanf("%d",&new_number);
	printf("Please enter your desired position\n");
	scanf("%d", &position);
	b=calloc(size+1,sizeof(int));
		for(i=0;i<position;i++)
			b[i]=a[i];
       b[position]=new_number;
		for(i=position+1;i<size+1;i++)
			b[i]=a[i-1];
	printf("Here is your array\n");
	printf("This is your new array \n");

	for(i=0;i<size+1;i++)
		printf("%5d",b[i]);
		printf("\n");

}

void binary_search(int *a, int size)
{
	int low=0;
	int high=size-1;
	int middle;
	int target;
	char answer='N';

	printf("Please enter the number you want to search for \n");
	scanf("%d", &target);
		

	while(low<=high && answer!='Y')
	{
		middle=(high+low)/2;
		if(a[middle] ==target)
			answer='Y';
		else
			if(a[middle] < target)
				low=middle+1;
			if(a[middle] > target)
				high=middle-1;
	}

	if(answer == 'Y')
		printf("Yes, your number is in the array. It's position is %d\n", middle);

}

void rec_binary_search(int *a, int low, int high, int target, char answer)
{

	int middle=0;


	if(low>high)
		printf("The Target is not in the array\n");
	else
	{
		middle=(low+high)/2;

		if(a[middle]==target)
			{
				printf("Yes, the number %d is the array at position %d\n", target, middle);
				answer='Y';
			}
		if(a[middle]<target)
			rec_binary_search(a, middle+1, high, target, answer);
		if(a[middle]>target)
			rec_binary_search(a, low, middle-1, target, answer);
	}

}

void min_max(int *a, int size, int *min, int *max)
{
	int i;
	*min=a[0];
	*max=a[0];
	for(i=0; i<size; i++)
		{
		if(*min>a[i])
			*min=a[i];
		if(*max<a[i])
			*max=a[i];
		}


}

void backwards2(int *a, int size)
{
	int *p;
	printf("this is backwards number two, non recursivly using pointers\n");
	for(p=&a[size]; p>=a; p--)
	{
		printf("%3d", *p);
	}
	printf("\n");
}

void backwards3(int *a, int marker)
{

	if(marker==0)
		printf(" %3d\n", a[marker]);
	else
	{
		printf(" %3d", a[marker]);
		backwards3(a, marker-1);
	}


}
void lin_search(int *a, int size)
{
	int target;
	int i;
	char found='N';
	printf("please enter a number to search for\n");
	scanf(" %3d", &target);
	for(i=0; i<size&& found!='Y'; i++)
		if (a[i]==target)
			found='Y';
		if(found=='Y')
			printf("your target number is in the array %d at index %d\n", target, i-1);
		else
			printf("your number is not in the array\n");
}