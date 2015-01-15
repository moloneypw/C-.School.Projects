// CD Program, Systems Programming, Spring 2006
// Created By Patrick Moloney, With help with Delete Funtion, and Node organization, From Professor Natasha Kurtonina

/*	This is the CD program, This program allows you to delete, and add different CD's to a list.
	You can also search the list and choose not to delete The found CD.
	This program uses nodes and pointing to different Nodes by search for data from an Input file.
	It also writes new data added to and output file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char name[20];
	char title[20];
	int year;
	struct Node *next;
	struct Node *prev;
	struct Node *tail;
	struct Node *here;
	struct Node *above;
	struct Node *below;
		
};
typedef struct Node* Box;

Box insert_node(FILE *inputp);
Box next_file(FILE *outputp, Box head);
Box delete_file(FILE *inputp);
Box search_file(FILE *inputp, Box head);
Box print_list( Box pointer);

int main()
{
	int i;
	int choice;
	

	Box head=NULL,temp,tail,here,above,below;
	FILE *inputp, *outputp;

	
	inputp = fopen("input.dat", "r");
	outputp = fopen("output.dat", "w");
	
	
	head=insert_node(inputp);
	tail=head;

	for(i=0; i<4; i++)
	{
		temp=insert_node(inputp);
		tail->next=temp;
		temp->prev=tail;
		tail=tail->next;
	
	}

	print_list(head);//this calls the print function
	printf("Would you like to add a CD to the list? 1 for Yes, 2 for No\n");
	scanf(" %d", &choice);
	if(choice==1)
		head=next_file(outputp, head);//this calls the add function
		
	head=search_file(inputp, head);//this calls the search/delete function






	return 0;


}

Box print_list( Box pointer)//this function prints the list of data from the input file.
{
Box here=pointer;
	while(here!=NULL)
		{
		printf( "%s, %s, %d \n", here->name, here->title, here->year);
		here=here->next;  
		}

	return pointer;
}



 Box insert_node(FILE *inputp)//this function reads the input file
{
	

	Box tail=NULL;


	tail=(Box)malloc(sizeof(struct Node));
	fscanf(inputp, "%s", &tail->name);
	fscanf(inputp, "%s",  &tail->title);
	fscanf(inputp, " %4d", &tail->year);
	tail->next=NULL;
	tail->prev=NULL;

	
	
	
	return tail;
}

 Box next_file(FILE *outputp, Box head)//this funtion allows you to add new data to the outputfile
{
	Box temp=NULL;

	temp=(Box)malloc(sizeof(struct Node));
	printf("What is the name of the artist you would like to add?\n");
	scanf(" %s", &temp->name);
	printf("What is the name of the Album you would like to add?\n");
	scanf(" %s", &temp->title);
	printf("What year the album released?");
	scanf(" %4d", &temp->year);
	
	
	fprintf(outputp, " %s", &temp->name);
	fprintf(outputp, " %s",  &temp->title);
	fprintf(outputp, " %4d", &temp->year);

	head->prev=temp;
	temp->next=head;
	head=temp;

	print_list(head);//this calls the print function
	
	return head;
}

Box search_file(FILE *inputp, Box head)//this is the search/delete function
{
	Box here= head, above, below;

	int choice;
	char artist[20];
	char album[20];
	int year;

	printf("How would you like to search for a cd?\nEnter 1 for By Artist, 2 for By Album title.\n");
	scanf(" %d", &choice);
	

	if(choice==1)//this allows you to search using the Artists name
	{
		printf("What is the name of the artist you wish to search for?\n");
		scanf(" %s", &artist);


		do
		{
			if(strcmp(artist, here->name)!=0)
				here=here->next;
			else
				break;  
		}
		while(here!=NULL);
 
		choice=0;
		printf("Pointing to %s %s %4d \n", here->name, here->title, here->year);
		printf("Whould you like to delete this CD? 1 for Yes, 0 for NO\n");
		scanf(" %d", &choice);
		if(choice==1)
		{
			printf("\nLet us delete this node\n");
			if(here==head)
			head=head->next;
			else
			{
				if(here->next==NULL)
				here->prev->next=NULL;
			else
			{
				above=here->prev;
				below=here->next;
				above->next=below;
				below->prev=above;
			 }
			}
		}
		else	
			printf("then we will not delete cd %s %s %d\n", here->name, here->title, here->year);
		
 
		printf("\n Printing an updated list\n");
		printf("\n");

		print_list(head);


	}

	if(choice==2)// This allows you to search using the album title
	{
		printf("what is the name of the album you would like to search for?\n");
		scanf(" %s", &album);

		do
		{
			if(strcmp(album, here->title)!=0)
				here=here->next;
			else
				break; 
 
 
		}
		while(here!=NULL);
 
		choice=0;
		printf("Pointing to %s %s %4d \n", here->name, here->title, here->year);
		printf("Whould you like to delete this CD? 1 for Yes, 0 for NO\n");
		scanf(" %d", &choice);
		if(choice==1)
		{
			printf("\nLet us delete this node\n");
			if(here==head)
				head=head->next;
			else
			{
				if(here->next==NULL)
				here->prev->next=NULL;
			else
			{
				above=here->prev;
				below=here->next;
				above->next=below;
				below->prev=above;
			}
			}
		}
		else
			printf("Then we will not delete cd %s %s %d\n", here->name, here->title, here->year);
 
		printf("\n Printing an updated list\n");
		printf("\n");

		print_list(head);// this calls the print function

	}

	return head;

}

