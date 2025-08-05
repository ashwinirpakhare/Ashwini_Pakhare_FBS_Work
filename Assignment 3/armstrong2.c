#include<stdio.h>
void main()
{
	int num=153,r,sum=0,temp,i,p=1;
    temp=num;
    int ocount=0;
    while(temp!=0)
    {
    ocount++;
    temp=temp/10;
	}
    temp=num;
	while(temp!=0)
	{
		r=temp%10;
		p=1;
		for(i=1;i<=ocount;i++)
		{
	        p=p*r;
		}
		sum=sum+p;
		temp=temp/10;
	   }  
	   if(num==sum)
	   {
	   	printf("armstrong");
		} 
		else
		{
			printf("not armstrong");
		}
}
