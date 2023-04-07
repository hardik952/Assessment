#include<stdio.h>
int main()
{
	// multiplication table on user input.
	int a,i;
	printf("enter the number whose table you want: ");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",a,i,a*i);
	}
	return 0;
}
