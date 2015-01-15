#include<stdio.h>


int main()
{
	int value;

	if(fork()==0)
	{
		if(fork()==0)
		{
			if(fork()==0)
			{
				printf("child111\n");
				printf("child112\n");
				return;
			}
			else
			{
				printf("child11\n");
			}

			printf("child12\n");
			return;
			
		}
		else
			printf("Child1\n");
		
		if(fork()==0)
		{
			if(fork()==0)
			{
				printf("child121\n");
				printf("child122\n");
				return;
			}
			else
			{
				printf("child21\n");
			}

			printf("child22\n");
			return;
		}
		else
			printf("child2\n");
	}
	else
		printf("Parent\n");


return 0;

}