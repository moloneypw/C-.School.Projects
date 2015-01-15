#include <stdio.h>
#include <stdlib.h>

int* array_accomodation(int *array1, int size);
int* bubble_sort(int *array3, int size);
int* new_array_num(int *arrayadd, int size);
void linear_search(int *arraysearch, int size);
void array_avg(int *arrayav, int size);
void max_in_array(int *arraymax, int size);
void min_in_array(int *arraymin, int size);
void array_sum(int *arraysum, int size);
void binary_search(int *arrayb, int size);
void display(int *array2, int size);
void rec_backwards(int *arrayr, int size);
void nonrec_backwards(int arraynr[], int size);
void nonrec_backwards_pointer(int *arraynrp, int size);


void main()
{
	//initializing array a
	int *a;
	//initializing the variable for the array size
	int size;
	//character for the answer for each question
	char ans='y';

	// while loop for the whole program which stops when the answer is no
	do{
		printf("How many numbers do you want to accomodate?\n");
		//input for the size of the array
		scanf("%d",&size);
		printf("Enter your %d numbers to be sorted.\n",size);
		//initializes the array to the size input of size integer
		a=calloc(size,sizeof(int));
		//the function array accomodation is called up which will allow you to input 
		//all of the numbers in the array
		a=array_accomodation(a,size);
		//callls the function max in array and the array and size is passed		
		max_in_array(a,size);
		//callls the function min in array and the array and size is passed
		min_in_array(a,size);
		//callls the function array average and the array and size is passed
		array_avg(a,size);
		//callls the function sum of array and the array and size is passed
		array_sum(a,size);
		//the array a is now sorted using the bubble sort function 
		a=bubble_sort(a,size);
		//callls the function to display the array
		display(a,size);
		
		//that array is printed backwards recursively and the function is called upon and 
		//array a and size-1 is passed down
		printf("\nArray printed backwards using recursion.\n");
		rec_backwards(a,size-1);

		//that array is printed backwards non-recursively and the function is called upon and 
		//array a and size is passed down
		printf("\nArray printed backwards non-recursively.\n");
		nonrec_backwards(a,size);

		//that array is printed backwards non-recursively using a pointer and the function is called 
		//upon and array a and size is passed down
		printf("\nArray printed backwards non-recursively using pointers.\n");
		nonrec_backwards_pointer(a,size);

		
		//This the loop and function for adding a number to the array
		//if the ans is yes then a while loop will keep adding numbers until the user says no
		//the add number function is called upon 
		//after a new number is added to the the other functions are called upon printing the new reults
		printf("\nWould you like to add a number to the array? (y/n) \n");
		scanf("%s",&ans);
		while(ans=='y'||ans=='Y'){
			
			a=new_array_num(a,size);
			size++;			
			display(a,size);
			a=bubble_sort(a,size);
			max_in_array(a,size);
			min_in_array(a,size);
			array_avg(a,size);
			array_sum(a,size);
			printf("\nWould you like to add a number to the array? (y/n) \n");
			scanf("%s",&ans);
		}
		
		//if the answer is yes here the the liner search function is called upon
		printf("\nWould you like to search for a number in the array using linear search? (y/n) \n");
		scanf("%s",&ans);
		if (ans=='y'||ans=='Y'){
			linear_search(a,size);
		}
		
		//if the answer is yes here the the binary search function is called upon
		printf("\nWould you like to search for a number in the array using binary search? (y/n) \n");
		scanf("%s",&ans);
		if (ans=='y'||ans=='Y'){
			binary_search(a,size);
		}

		//this is the final question and the loop will repeat itself if the answer is yes
		printf("\nWould you like to sort other numbers? (y/n) \n");
		scanf("%s",&ans);

	}while(ans=='y'||ans=='Y');

}

int* array_accomodation(int *array1, int size)
{
	int i;

	//for loop that stop when i gets to size
	//it will scan for the each number input then put it into the array
	for(i=0;i<size;i++)
	{
		scanf("%d",&array1[i]);
	}
	//the array is returned back into main
	return array1;
}

int* bubble_sort(int *array3, int size)
{
	int i,j;
	
	
	for(j=0;j<size-1;j++)
		for(i=0;i<size-1;i++)
			if(array3[i+1]<array3[i])
			{
				//if the next number in the array is 
				//less then the previous number then the prvious number is put into temp
				//the larger number is back into the array
				//the samller number is put back at a lower index
				int temp;
				temp=array3[i];
				array3[i]=array3[i+1];
				array3[i+1]=temp;
			}

		return array3;
}

void display(int *array2, int size)
{
	int i;

	//the for loop goes all the way to size
	//it prints each number in the array 
	printf("\nThis is your sorted array:\n");
	for(i=0;i<size;i++)
	{
		printf("%2d",array2[i]);
		printf("\n");
	}
	}

void max_in_array(int *arraymax, int size)
{
	int i,temp;
	
	
	for(i=0;i<size;i++)
	{
		//temp is set the the first index in the array 
		//if the next number in the array is larger than temp it replaces the number in temp
		//after the for loop is doen temp is printed
		temp=arraymax[0];
		if(arraymax[i]>temp)
			temp=arraymax[i];
	}
	printf("\nThe largest number in the array is %d.\n",temp);
}

void min_in_array(int *arraymin, int size)
{
	int i,temp;
	
	//the loop works the same as max number but if temp is larger than the number in the array then 
	//temp becomes that new number
	for(i=0;i<size;i++)
	{
		temp=arraymin[0];
		if(arraymin[i]<temp)
			temp=arraymin[i];
	}
	printf("\nThe smallest number in the array is %d.\n",temp);
}


void array_avg(int *arrayavg, int size)
{
	int i,avg;

	avg=0;
	
	//i goes until it gets to size and at each index the number is added to the previous average
	for(i=0;i<size;i++)
	{
		avg=arrayavg[i]+avg;
	}
	//average is then diivided by the size of the array to get the final number
	avg=avg/size;

	printf("\nThe average of your array is %d.\n",avg);
}

void array_sum(int *arraysum, int size)
{
	int i,sum=0;

	//i goes until the size of the array 
	//the numbers at each index of the array are added to the sum
	for(i=0;i<size;i++){
		sum=arraysum[i]+sum;
	}

	printf("\nThe sum of the array is %d.\n",sum);
}


int* new_array_num(int *arrayadd, int size)
{
	int temp=0,pos_a,i;
	//a new array is initialized
	int *b;
	b=calloc(size+1, sizeof(int));
	printf("\nWhat number would you like to add?\n");
	scanf("%d",&temp);
	printf("\nWhat position in the array where you like to put it?\n");
	scanf("%d",&pos_a);
	
	for(i=0;i<pos_a;i++){
		b[i]=arrayadd[i];
	}
	b[pos_a]=temp;
	
	
	
	for(i=pos_a+1;i<size+1;i++){
		b[i]=arrayadd[i-1];
	}
	
	
	
	//the new array with the new number is returned
	return b;
}

void linear_search(int *arraysearch, int size)
{
	int i;
	int temp,found=0;

	//the number the user wants to find is input and stored in temp
	printf("What number would you like to search for?\n");
	scanf("%d",&temp);

	//this loop goes from 0 to size
	//if temp is equal the any numbers in the array then the interger found is equal to 1
	for(i=0;i<size;i++){
		if (temp==arraysearch[i])
			found=1;
	}

	//if found is 1 then a statement is printed that the number was in the array
	//if found is not 1 then the number was not in the array is printed
	if (found==1)
		printf("\n The number %d was found in the array.\n",temp);
	else
		printf("\n The number %d was not found in the array.\n",temp);
}

void binary_search(int *arrayb, int size)
{
	int low=0,high=size-1,temp=0,middle;
	char ans='n';

	//the user inputs a number to be searched for then it is stored in temp
	printf("What number would you like to search for?\n");
	scanf("%d",&temp);

	//the loop goes while low is less than high or the ans is not yes
	while(low<=high&&ans!='y')
	{
		//the integer middle is set between high and low
		middle=high+low/2;
		//if the index at the interger middle is the same as temp the the loop is over and
		//it is printed that the number was found
		if(arrayb[middle]==temp)
			ans='y';
		else
			//if the number at the middle index is less than temp
			//then the interger low becomes one more than middle
			if(arrayb[middle]<temp)
				low=middle+1;
			//if the number at the middle index is larger than temp
			//then the interger high becomes one less than middle
			if(arrayb[middle]>temp)
				high=middle-1;
	}

	if(ans=='y')
		printf("\n The number %d was found in the array.\n",temp);
	else
		printf("\n The number %d was not found in the array.\n",temp);
}

void rec_backwards(int *arrayr, int size)
{
	

	//The number in the first inde is printed when size is 0
	if(size==0)
		printf("%d\n",arrayr[size]);
	else
		{
		//the number at the index size is printed
		printf("%d\n",arrayr[size]);
		//the function is called in the loop with size being 1 less
		rec_backwards(arrayr,size-1);
	}
}

void nonrec_backwards(int arraynr[], int size)
{
	int i;

	//this for loop goes from 0 to size
	//each time it goes through size is reduced by one
	//The array is printed starting with the last index 
	for(i=size;i>0;i--){
		size=size-1;
		printf("%d\n",arraynr[size]);
		
	}
}

void nonrec_backwards_pointer(int *arraynrp, int size)
{
	int i;

	//this for loop goes from 0 to size
	//each time it goes through size is reduced by one
	//The array is printed starting with the last index 
	for(i=size;i>0;i--){
		size=size-1;
		printf("%d\n",arraynrp[size]);
		
	}
}