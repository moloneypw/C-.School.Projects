#include<stdio.h>
#include<stdlib.h>


void convertion_limit(int *num, int *convt);
void print_number(int *num, int *convt);

int main()
{
	int *num;
	int *convt;



	printf("What number would you like to convert to binary?\n");
	scanf("%3d", &num);

	//convertion_limit(num, convt);
	//printf("%d", *convt);
	//print_number(num, convt);


	return 0;


}


void convertion_limit(int *num, int *convt)
{

	while(*convt<*num)
		{
			*convt=*convt*2;
			printf("%d\n", *convt);
		}


}


void print_number(int *num, int *convt)
{
	//printf("hello");
	int bnum=0;
	int i;
	int high=*convt;
	int low=*convt/2;

	for(high>=low; high!=0;)
	{

		if(*num>=high)
		{
			bnum=1;
			*num=*num-high;

		}
		else
		{
			bnum=0;
		}

		
		//*convt=*convt/2;
		printf(" %d", bnum);

		high=*convt;
		low=*convt/2;

	}

}