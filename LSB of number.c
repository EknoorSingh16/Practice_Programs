#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	if(n&1)
	{
	printf("The LSB of %d is set(1)",n);	
	}
	else
	{
		printf("The LSB of %d is set(0)",n);
	}	
	return 0;
}
