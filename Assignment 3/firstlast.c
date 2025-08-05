#include<stdio.h>
void main()
{
	int n=12345,sum;
	int firstDigit,lastDigit;
	lastDigit=n%10;
	firstDigit=n;
	while(firstDigit>=10)
	{
		firstDigit/=10;
	}
	sum=firstDigit+lastDigit;
	printf("sum of first and last digit:%d\n",sum);
}
