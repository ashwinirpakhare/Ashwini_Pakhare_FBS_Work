#include<stdio.h>
void main()
{
	int no=18;
	int flag=0;
	int i;
	if(no==1 || no==0)
	flag=1;
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
	{
			flag=1;
		break;
		
	}
}

   if(flag==0)
   {
   	printf("no is prime");
   	
   }
   else{
   	printf("no is not prime");
}
   
   }
