#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num2;
	int convt2=1;
	int tnum=0;
	int high2;
	int low2;



	printf("What number would you like to convert to trinary?\n");
	scanf("%3d", &num2);
	

	while(convt2<num2)
	{
		convt2=convt2*3;
	}
	printf(" %d\n", convt2);
	high2=convt2;
	low2=(convt2/3);
	printf(" %d\n", low2);
	printf("This is your Number in trionary\n");

	while(low2>=1)
	{

		if(num2>=low2)
		{
			if(num2>=low2*2)
			{
				tnum=2;
				num2=num2-(low2*2);
			}
			else
			{
				tnum=1;
				num2=num2-low2;
			}

		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);

		high2=high2/3;
		low2=low2/3;

	}
	printf("\n");


	return 0;


}
