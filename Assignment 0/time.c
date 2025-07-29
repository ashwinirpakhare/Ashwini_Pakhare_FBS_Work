#include<stdio.h>
void main()
{
	int min=130;
	int h;
	h=min/60;
	min=min%60;
	printf("hour=%d and minute=%d",h,min);
}
