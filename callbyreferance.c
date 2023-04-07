//call by reference.
#include<stdio.h>
void swapping(int*a,int*b);
int main()
{
	int p=34,q=22;
	printf("before swap value of a & b: %d & %d\n",p,q);
	swapping(&p,&q);
	printf("after swap value of a & b: %d & %d",p,q);
	return 0;
} 
    void swapping(int*p,int*q)
    {
    	int r;
    	r=*p;
    	*p=*q;
    	*q=r;
	}

