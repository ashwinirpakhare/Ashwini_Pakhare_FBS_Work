#include<stdio.h>
void main()
{
	double bs=8000;
	double da,ta,hra,ts;
	if(bs<5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
		
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
		
	}
	ts=bs+da+ta+hra;
	printf("ts=%f",ts);
}
