#include<stdio.h>
#include<stdlib.h>

void binary(int *num);
void base3(int *num);
void base4(int *num);
void base5(int *num);
void base6(int *num);
void base7(int *num);
void base8(int *num);
void base9(int *num);


int main()
{
	int *num;


	printf("What number would you like to convert to base 2-9 ?\n");
	scanf(" %d", &num);
	binary(num);
	base3(num);
	base4(num);
	base5(num);
	base6(num);
	base7(num);
	base8(num);
	base9(num);





	return 0;


}


void binary(int *num)
{
	int num2=num;
	int convt=2;
	int bnum=0;
	int low=1;
	int i=0;

	do
	{
		convt=convt*2;

	}
	while(convt<num2);

	low=convt/2;

	printf("This is your Number in Binary\n");

	while(low>=1)
	{

		if(num2>=low)
		{
			bnum=1;
			num2=num2-low;

		}
		else
		{
			bnum=0;
		}

		printf(" %d", bnum);
		low=low/2;

	}
	printf("\n");

}



void base3(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int high;
	int low;

	while(convt<num2)
	{
		convt=convt*3;
	}
	high=convt;
	low=(convt/3);
	printf("This is your Number in Base 3\n");

	while(low>=1)
	{

		if(num2>=low)
		{
			if(num2>=low*2)
			{
				tnum=2;
				num2=num2-(low*2);
			}
			else
			{
				tnum=1;
				num2=num2-low;
			}

		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);

		high=high/3;
		low=low/3;

	}
	printf("\n");

}
void base4(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*4;
	}
	low=convt/4;
	printf("This is your Number in Base 4 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=(low*3))
			{	
				tnum=3;
				num2=num2-(low*3);
			}
			else
			{
				if(num2>=low*2)
				{
					tnum=2;
					num2=num2-(low*2);
					
				}
				else
				{
					tnum=1;
					num2=num2-low;
				}
			}
			
			

		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/4;

	}
	printf("\n");


}
void base5(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*5;
	}
	low=convt/5;
	printf("This is your Number in Base 5 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=low*4)
			{
				tnum=4;
				num2=num2-(low*4);
			}
			else
				{
				if(num2>=(low*3))
				{	
					tnum=3;
					num2=num2-(low*3);
				}
				else
				{
					if(num2>=low*2)
					{
						tnum=2;
						num2=num2-(low*2);
					
					}
					else
					{
						tnum=1;
						num2=num2-low;
					}
				}
			}
			
			

		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/5;

	}
	printf("\n");

}
void base6(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*6;
	}
	low=convt/6;
	printf("This is your Number in Base 6 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=low*5)
			{
				tnum=5;
				num2=num2-(low*5);
			}
			else
			{
			if(num2>=low*4)
			{
				tnum=4;
				num2=num2-(low*4);
			}
			else
				{
				if(num2>=(low*3))
				{	
					tnum=3;
					num2=num2-(low*3);
				}
				else
				{
					if(num2>=low*2)
					{
						tnum=2;
						num2=num2-(low*2);
					
					}
					else
					{
						tnum=1;
						num2=num2-low;
					}
				}
			}
			}
			
			

		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/6;

	}
	printf("\n");

}

void base7(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*7;
	}
	low=convt/7;
	printf("This is your Number in Base 7 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=low*6)
			{
				tnum=6;
				num2=num2-(low*6);
			}
			else
			{
			if(num2>=low*5)
			{
				tnum=5;
				num2=num2-(low*5);
			}
			else
			{
			if(num2>=low*4)
			{
				tnum=4;
				num2=num2-(low*4);
			}
			else
				{
				if(num2>=(low*3))
				{	
					tnum=3;
					num2=num2-(low*3);
				}
				else
				{
					if(num2>=low*2)
					{
						tnum=2;
						num2=num2-(low*2);
					
					}
					else
					{
						tnum=1;
						num2=num2-low;
					}
				}
			}
			}
			}
			
		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/7;

	}
	printf("\n");

}
void base8(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*8;
	}
	low=convt/8;
	printf("This is your Number in Base 8 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=low*7)
			{
				tnum=7;
				num2=num2-(low*7);
			}
			else
			{
			if(num2>=low*6)
			{
				tnum=6;
				num2=num2-(low*6);
			}
			else
			{
			if(num2>=low*5)
			{
				tnum=5;
				num2=num2-(low*5);
			}
			else
			{
			if(num2>=low*4)
			{
				tnum=4;
				num2=num2-(low*4);
			}
			else
				{
				if(num2>=(low*3))
				{	
					tnum=3;
					num2=num2-(low*3);
				}
				else
				{
					if(num2>=low*2)
					{
						tnum=2;
						num2=num2-(low*2);
					
					}
					else
					{
						tnum=1;
						num2=num2-low;
					}
				}
			}
			}
			}
			}
			
		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/8;

	}
	printf("\n");

}
void base9(int *num)
{
	int num2=num;
	
	int convt=1;
	int tnum=0;
	int low;
	
	while(convt<num2)
	{
		convt=convt*9;
	}
	low=convt/9;
	printf("This is your Number in Base 9 \n");

	while(low>=1)
	{
		
		if(num2>=low)
		{
			if(num2>=low*8)
			{
				tnum=8;
				num2=num2-(low*8);
			}
			else
			{
			if(num2>=low*7)
			{
				tnum=7;
				num2=num2-(low*7);
			}
			else
			{
			if(num2>=low*6)
			{
				tnum=6;
				num2=num2-(low*6);
			}
			else
			{
			if(num2>=low*5)
			{
				tnum=5;
				num2=num2-(low*5);
			}
			else
			{
			if(num2>=low*4)
			{
				tnum=4;
				num2=num2-(low*4);
			}
			else
				{
				if(num2>=(low*3))
				{	
					tnum=3;
					num2=num2-(low*3);
				}
				else
				{
					if(num2>=low*2)
					{
						tnum=2;
						num2=num2-(low*2);
					
					}
					else
					{
						tnum=1;
						num2=num2-low;
					}
				}
			}
			}
			}
			}
			}
			
		}
		else
		{
			tnum=0;
		}

		printf(" %d", tnum);
		low=low/8;

	}
	printf("\n");

}

