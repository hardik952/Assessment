#include<stdio.h>
int main()
{
	//arithmatic operations simple calculator.
	float a,b,c,d,e,f;
	printf("enter your number 1: ");
	scanf("%f",&a);
	printf("enter your number 2: ");
	scanf("%f",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("addition: %f + %f = %f\n",a,b,c);
	printf("subtraction: %f - %f = %f\n",a,b,d);
	printf("multiplication: %f * %f = %f\n",a,b,e);
	printf("division: %f / %f =%f\n",a,b,f);
	return 0;
}
