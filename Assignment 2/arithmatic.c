#include<stdio.h>
void main()
{
 
      char op='add','sub','mul','div';
      
	int result;
	int num1,num2;
   printf("enter number 1");
    scanf("%d",&num1);
	printf("enter no 2");
	scanf("%d",&num2);
	char op='add';
	if(op=='add')
	{
	   result=num1+num2;
	   printf("result=%d",result);
	  } else if(op=='sub')
	  {
	  	result=num1-num2;
	  	printf("result=%lf",result);
	  	
		  }	
         else  if(op='mul')
         {
         	result=num1*num2;
         	printf("result=%lf",result);
         	
		 } 
		 else if(op=='div')
		 {
		 	result=num1/num2;
		 	printf("res=%lf",result);
		 	
		 }

}
