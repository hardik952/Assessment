#include<stdio.h>
int main()
{
	//area of circle and rectangle.
	char shape;
	printf("select the shape: \n\n");
	printf("CIRCLE (c)   RECTANGLE (r)\n\n");
	printf("enter the shape: ");
	scanf("%c",&shape);
	printf("\n");
	float area,length,width,radius;
	
	switch (shape) 
	{
	case 'c':
		printf("enter radius: ");
		scanf("%f",&radius);
		area = 3.14*radius*radius;
		printf("your area: %f",area);
		break;
		
	case 'r':
		printf("enter length & width: ");
		scanf("%f%f",&length,&width);
		area = length*width;
     	printf("your area: %f",area);
	    break;
	   
	default: 
	    printf("enter the correct shape.");
		break;    
	}
	return 0;
}
