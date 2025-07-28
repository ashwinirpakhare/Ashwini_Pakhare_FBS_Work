#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a and after swaping are %d %d\n",a,b);
}
