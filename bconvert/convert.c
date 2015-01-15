#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int convt;
	int bnum=0;
	int base;


	printf("What base system would you like to use? (2 or 3)");
	scanf(" %d", &base);
	printf("What number would you like to convert to binary?\n");
	scanf(" %3d", &num);

	if(base==2)
	{
		while(convt<num)
		{
			convt=convt*2;
			printf("%d\n", convt);
		}

		int high = convt;
		int low = convt/2;

		while(high>low)
		{

			if(num>=high)
			{
				bnum=1;
				num=num-high;

			}
			else
			{
				bnum=0;
			}

			printf(" %d", bnum);

			high=convt;
			low=convt/2;

		}
	}


	/*if(base==3)
	{
	while(convt<num)
		{
			convt=convt*3;
			printf("%d\n", convt);
		}

		int high = convt;
		int low = convt/3;

		while(high>low)
		{

			if(num>=high)
			{
				bnum=1;
				num=num-high;

			}
			else
			{
				bnum=0;
			}
			else
			{
				
			}

			printf(" %d", bnum);

			high=convt;
			low=convt/3;

		}







	}*/
	return 0;


}
