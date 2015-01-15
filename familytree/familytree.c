#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char name[25];
	char relation[25];

	struct Node *First_child;
	struct Node *Second_child;
	struct Node *Third_child;
	struct Node *Fourth_child;
	struct Node *Fifth_child;

};

typedef struct Node next;

int main()
{
	next *head, *temp1, temp2, temp3, temp4
		printf("My Name is seth, and this is part of my family tree.\n");

		head=(next*)malloc(sizeof(next))
		strcpy (head->name, "George"); // Great Grandfather
		strcpy (head->relation, "Great Grand Father");
		head->First_child=NULL;
		head->Second_child=NULL;
		head->Third_child=NULL;
		head->Fourth_child=NULL;
		head->Fifth_child=NULL;
		head->Sixth_child=NULL;

		printf("%s is my %s\n", head->name, head->relation);
		printf("\n");

		temp1=(Box*)malloc(sizeof(Box));
		strcpy (temp1->name, "Harvey"); //Grandfather
		strcpy (temp1->relation, "GrandFather");
		temp1->First_child=NULL;
		temp1->Second_child=NULL;
		temp1->Third_child=NULL;
		temp1->Fourth_child=NULL;
		temp1->Fifth_child=NULL;
		temp1->Sixth_child=NULL;

		temp->First_child=temp1;
		head->First_child=temp1;
		
		printf("He is my %s\n",head->First_child->relation);
		printf("\n");




}