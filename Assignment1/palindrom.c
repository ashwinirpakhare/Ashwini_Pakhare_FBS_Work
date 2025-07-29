#include<stdio.h>
main()
{
	int no=121;
	int r1,r2,r3,rev;
	
	r1=no%10;
	int q1;
	q1=no%10;
  	r2=q1%10;
	   r3=q1%10;
	 rev=r1*100+r2*10+r3;
	if(no==rev)
	{
		printf("no is palindrom");
	}
	else
	{
		printf("not palindrom");
		
	}
}
