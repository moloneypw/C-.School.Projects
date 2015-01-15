//Patrick Moloney
//Guessing Game
//February 5, 2007

#include<stdio.h>

void guess();
void main()
{
	guess();
}

void guess()
{
	int low=0;
	int high=0;
	int middle=0;
	int counter=0;
	char input='0';
	int search_space=0;
	int number_of_partitions=0;
	
	//inputs of the lower bound
	printf("Please pick a lower bound. \n");
	scanf_s("%d", &low);
	//input of the upper bound
	printf("Please pick and upper bound greater then lower bound. \n");
	scanf_s("%d",&high);
	printf("Your number must be between %d and %d.\n", low, high);
	
	//the amount of numbers that are being used
	search_space=(high-low);

	//makes search space smaller and smaller until it reaches 0
	//the number of questions increases each time
	while(search_space!=0)
	{
		search_space=search_space/2;
		number_of_partitions++;
	}
	
	printf("I will find out your number with maximum %d questions.\n", number_of_partitions+2);

	while(low<=high)
	{
		//initializes the middle
		middle=(high+low)/2;
		//used to count how many tries it takes
		counter++;
		
		//prints question number and your 3 choices
		printf("Question #%d\n",counter);
		printf("Enter E if your number is equal than %2d \n",middle);
		printf("Enter L if your number is larger than %2d \n",middle);
		printf("Enter S if your number is smaller than %2d \n",middle);
		
		//input your choice
		scanf(" %c", &input);

		//a right answer will print a message and exit the loop
		if (input=='E'||input=='e'){
			printf("I found out your number.\n");
			printf("I found it out using %d questions.\n",counter);
			low=high+1;
		}
		//if the guess is larger low will become the middle
		if (input=='L'||input=='l'){
			low=middle+1;			
		}
		//if the guess is smaller high will become the middle
		if (input=='s'||input=='S'){
			high=middle-1;
		}
	}

printf("See ya later.\n");
}



	
