#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char name[20];
	char relation[20];
	
	struct Node *married;
	struct Node *first_child;
	struct Node *second_child;
	struct Node *third_child;
	struct Node *fourth_child;
	struct Node *fifth_child;

};

typedef struct Node next;

int main()
{
	next *head, *temp, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6, *temp7, *temp8;
		printf("My Name is seth, and this is part of my family tree.\n");
		printf("\n");

		head=(next*)malloc(sizeof(next));
		strcpy (head->name, "George");
		strcpy (head->relation, "Great Grand Father");
		head->married=NULL;
		head->first_child=NULL;
		head->second_child=NULL;
		head->third_child=NULL;
		head->fourth_child=NULL;
		head->fifth_child=NULL;

		printf("%s is my %s\n", head->name, head->relation);
		printf("\n");

		temp=(next*)malloc(sizeof(next));
		strcpy (temp->name, "Paul");
		strcpy (temp->relation, "GreatUncle");
		temp->married=NULL;
		temp->first_child=NULL;
		temp->second_child=NULL;
		temp->third_child=NULL;
		temp->fourth_child=NULL;
		temp->fifth_child=NULL;

		head->first_child=temp;

		printf("His First child is %s, ", head->first_child->name);

		printf("He is my %s\n",head->first_child->relation);
		printf("\n");

		

		temp=(next*)malloc(sizeof(next));
		strcpy (temp->name, "Harvey");
		strcpy (temp->relation, "GrandFather");
		temp->married=NULL;
		temp->first_child=NULL;
		temp->second_child=NULL;
		temp->third_child=NULL;
		temp->fourth_child=NULL;
		temp->fifth_child=NULL;

		temp->second_child=temp;
		head->second_child=temp;

		printf("His second child is %s, ", head->second_child->name);

		printf("He is my %s\n",head->second_child->relation);

		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Shirly");
		strcpy (temp1->relation, "GrandMother");
		temp1->married=NULL;
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;

		head->second_child->married=temp1;

		printf("He is married to %s, ", head->second_child->married->name);
		printf("She is my %s\n", head->second_child->married->relation);
		printf("\n");
		printf("%s's", head->second_child->name);

		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Mick");
		strcpy (temp1->relation, "Uncle");
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;

		head->second_child->first_child=temp1;
		printf(" first child is %s, ", head->second_child->first_child->name);
		printf("he is my %s\n", head->second_child->first_child->relation);
		printf("%s is married to ", head->second_child->first_child->name);

		temp3=(next*)malloc(sizeof(next));
		strcpy (temp3->name, "Dennis");
		strcpy (temp3->relation, "Aunt");
		temp3->first_child=NULL;
		temp3->second_child=NULL;
		temp3->third_child=NULL;
		temp3->fourth_child=NULL;
		temp3->fifth_child=NULL;

		head->second_child->first_child->married=temp3;
		printf("%s, ", head->second_child->first_child->married->name);
		printf("she is my %s\n", head->second_child->first_child->married->relation);
		
		temp3=(next*)malloc(sizeof(next));
		strcpy (temp3->name, "Mary");
		strcpy (temp3->relation, "Cousin");
		temp3->first_child=NULL;
		temp3->second_child=NULL;
		temp3->third_child=NULL;
		temp3->fourth_child=NULL;
		temp3->fifth_child=NULL;

		head->second_child->first_child->first_child=temp3;
		printf("Their first child is %s, ", head->second_child->first_child->first_child->name);

		printf("she is my %s\n",head->second_child->first_child->first_child->relation);

		temp3=(next*)malloc(sizeof(next));
		strcpy (temp3->name, "Jack");
		strcpy (temp3->relation, "Cousin");
		temp3->first_child=NULL;
		temp3->second_child=NULL;
		temp3->third_child=NULL;
		temp3->fourth_child=NULL;
		temp3->fifth_child=NULL;

		head->second_child->first_child->second_child=temp3;
		printf("Their second child is %s, ", head->second_child->first_child->second_child->name);

		printf("he is my %s\n",head->second_child->first_child->second_child->relation);

		temp3=(next*)malloc(sizeof(next));
		strcpy (temp3->name, "Greg");
		strcpy (temp3->relation, "Cousin");
		temp3->first_child=NULL;
		temp3->second_child=NULL;
		temp3->third_child=NULL;
		temp3->fourth_child=NULL;
		temp3->fifth_child=NULL;

		head->second_child->first_child->third_child=temp3;
		printf("Their third child is %s, ", head->second_child->first_child->third_child->name);

		printf("he is my %s\n",head->second_child->first_child->third_child->relation);
		printf("\n");


		printf("%s's ", head->second_child);

		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Vern");
		strcpy (temp1->relation, "Uncle");
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;

		head->second_child->second_child=temp1;

		printf("second child is %s, ", head->second_child->second_child->name);

		printf("He is my %s\n",head->second_child->second_child->relation);


		temp4=(next*)malloc(sizeof(next));
		strcpy (temp4->name, "Kim");
		strcpy (temp4->relation, "Aunt");
		temp4->married=NULL;
		temp4->first_child=NULL;
		temp4->second_child=NULL;
		temp4->third_child=NULL;
		temp4->fourth_child=NULL;
		temp4->fifth_child=NULL;

		head->second_child->second_child->married=temp4;
		printf("He is married to %s, ", head->second_child->second_child->married->name);

		printf("she is my %s\n",head->second_child->second_child->married->relation);

		temp4=(next*)malloc(sizeof(next));
		strcpy (temp4->name, "Shanna");
		strcpy (temp4->relation, "Cousin");
		temp4->married=NULL;
		temp4->first_child=NULL;
		temp4->second_child=NULL;
		temp4->third_child=NULL;
		temp4->fourth_child=NULL;
		temp4->fifth_child=NULL;

		head->second_child->second_child->first_child=temp4;
		printf("Their second child is %s, ", head->second_child->second_child->first_child->name);

		printf("she is my %s\n",head->second_child->second_child->first_child->relation);

		temp4=(next*)malloc(sizeof(next));
		strcpy (temp4->name, "Jamie");
		strcpy (temp4->relation, "Cousin");
		temp4->married=NULL;
		temp4->first_child=NULL;
		temp4->second_child=NULL;
		temp4->third_child=NULL;
		temp4->fourth_child=NULL;
		temp4->fifth_child=NULL;

		head->second_child->second_child->second_child=temp4;
		printf("Their first child is %s, ", head->second_child->second_child->second_child->name);

		printf("she is my %s\n",head->second_child->second_child->second_child->relation);
		printf("\n");
		

		printf("%s's", head->second_child);
		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Judy"); 
		strcpy (temp1->relation, "Aunt");
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;


		head->second_child->third_child=temp1;

		printf(" third child is %s, ", head->second_child->third_child->name);

		printf("She is my %s\n",head->second_child->third_child->relation);
		printf("\n");
	
		printf("%s's", head->second_child);
		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Steve");
		strcpy (temp1->relation, "Uncle");
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;

		head->second_child->fourth_child=temp1;

		printf(" fourth child is %s, ", head->second_child->fourth_child->name);

		printf("He is my %s\n",head->second_child->fourth_child->relation);
		printf("\n");
	
		printf("%s's", head->second_child);
		temp1=(next*)malloc(sizeof(next));
		strcpy (temp1->name, "Linda");
		strcpy (temp1->relation, "Mother");
		temp1->married=NULL;
		temp1->first_child=NULL;
		temp1->second_child=NULL;
		temp1->third_child=NULL;
		temp1->fourth_child=NULL;
		temp1->fifth_child=NULL;


		head->second_child->fifth_child=temp1;

		printf(" fifth child is %s, ", head->second_child->fifth_child->name);

		printf("She is my %s\n",head->second_child->fifth_child->relation);

		temp2=(next*)malloc(sizeof(next));
		strcpy (temp2->name, "Gary");
		strcpy (temp2->relation, "Father");
		temp2->married=NULL;
		temp2->first_child=NULL;
		temp2->second_child=NULL;
		temp2->third_child=NULL;
		temp2->fourth_child=NULL;
		temp2->fifth_child=NULL;

		head->second_child->fifth_child->married=temp2;
		printf("She is married to %s, ", head->second_child->fifth_child->married->name);

		printf("he is my %s\n",head->second_child->fifth_child->married->relation);



		temp2=(next*)malloc(sizeof(next));
		strcpy (temp2->name, "Billy");
		strcpy (temp2->relation, "Brother");
		temp2->first_child=NULL;
		temp2->second_child=NULL;
		temp2->third_child=NULL;
		temp2->fourth_child=NULL;
		temp2->fifth_child=NULL;

		head->second_child->fifth_child->first_child=temp2;
		printf("Their first child is %s, ", head->second_child->fifth_child->first_child->name);

		printf("he is my %s\n",head->second_child->fifth_child->first_child->relation);

		temp2=(next*)malloc(sizeof(next));
		strcpy (temp2->name, "Seth");
		strcpy (temp2->relation, "Me");
		temp2->first_child=NULL;
		temp2->second_child=NULL;
		temp2->third_child=NULL;
		temp2->fourth_child=NULL;
		temp2->fifth_child=NULL;

		head->second_child->fifth_child->second_child=temp2;
		printf("Their second child is %s, ", head->second_child->fifth_child->second_child->name);
		

		printf("this is  %s\n",head->second_child->fifth_child->second_child->relation);
		printf("\n");






}