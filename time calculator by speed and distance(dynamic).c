#include<stdio.h>

int main()
{
	int s,d,t;
	
	printf("Enter the speed: ");
	scanf("%d",&s);
	
	printf("Enter the distance: ");
	scanf("%d",&d);
	
	t=d/s;
	
	printf("The total time is: %d",t);
	
	return 0;
}
