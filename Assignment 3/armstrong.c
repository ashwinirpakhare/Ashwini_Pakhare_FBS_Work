#include<stdio.h>
void main()
{
	int no=153,r,sum=0;
	int temp=no;
	while(no!=0)
	{
		
		r=no%10;
		sum=sum+r*r*r;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("armstrong no");
		
	}
	else
	{
		printf("not armstrong");
	}

}
