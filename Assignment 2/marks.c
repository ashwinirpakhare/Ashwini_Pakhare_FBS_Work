#include<stdio.h>
void main()
{
	int m=37;
	if(m>75)
	{
		printf("A+");
		
	}
	else
	{
		if(m>55)
		{
			printf("B+");
			
		}
		else{
			if(m>45)
			{
				printf("C+");
				
			}
			else{
				if(m>35)
				{
					printf("pass");
					
				}
				else{
					printf("fail");
				}
			}
		}
	}
}
