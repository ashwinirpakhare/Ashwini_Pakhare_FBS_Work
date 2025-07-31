#include<stdio.h>
void main()
{
	int no=12;

 if(no%3==0 && no%5!=0)
	{
		printf("no is divisible ny 3 but  not by 5");
		
	}
	else if(no%3!=0 && no%5==0)
	{
		printf("no is divisible by 5 but not by 3");
		
	}
	else if(no%3==0 && no%5==0)
	{
		printf("no is divisible by both 3 and 5");
		
	}
	else
	{
		printf("no is not divisible by 3 and 5");
	}
}
