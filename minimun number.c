#include<stdio.h>
int main()
{
	//minimum value among three values.
	int a,b,c;
	printf("enter the number 1: ");
	scanf("%d",&a);
	printf("enter the number 2: ");
	scanf("%d",&b);
	printf("enter the number 3: ");
	scanf("%d",&c);
	printf("\n");
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is the minimum number.");
		}
		else
		{
			printf("c is the minimum number.");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is the minimum number.");
		}
		else
		{
			printf("c is the minimum.");
		}
	}
	return 0;
}
