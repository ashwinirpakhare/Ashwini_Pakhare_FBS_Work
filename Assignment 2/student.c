#include<stdio.h>
void main()
{
	double price=8000;
	char isstud='y';
	double tp;
	if(isstud=='y')
	{
		if(price>500)
	
			tp=price-price*0.20;
		
		else
		
		tp=price-price*0.10;
 
    printf("tp=%lf",tp);
    
}
else{

		if(isstud=='n')
		
		if(price>600)
			tp=price-price*0.15;
			else
				printf("no discount");
				
		printf("tp=%lf",tp);
	}
	}

