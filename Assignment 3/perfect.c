#include<stdio.h>
void main()
{
	int i;
	int no=20;
	int sum=0;
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum+=i;
		}}
		
	if(sum==no)
	{
		printf("perfect",no);
		}
		else{
			printf("not perfect",no);
		}	
	
}
