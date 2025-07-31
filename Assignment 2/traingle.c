#include<stdio.h>
void main()
{
	float s1,s2,s3;
	s1=4;
	s2=5;
	s3=6;
	if(s1==s2 && s2==s3)
	  printf("equilateral");
	  else if(s1==s2 || s1==s3 ||s2==s3)
	  printf("isosceles");
	  else 
	  printf("scalene");
}
