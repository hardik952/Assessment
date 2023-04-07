#include<stdio.h>
int main()
{
	int colour;
	printf("Enter your number: ");
	scanf("%d",&colour);
	printf("\n");
	
	switch(colour)
	{
		case 1:
			printf("Violet");
			break;
			
		case 2:
		    printf("Blue");
			break;
			
		case 3:
		    
		    printf("Light Blue");
		    break;
		
		case 4:
			printf("Green");
			break;
		
		case 5:
		    printf("Yellow");
			break;
			
		case 6:
		    printf("Orange");
			break;		
		
		case 7:
		    printf("Red");
			break;
			
		default:
		    printf("Enter the correct number.");			
	}
}
