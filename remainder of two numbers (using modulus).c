#include<stdio.h>

int main()
{
	int no, divisor, remainder;
	
	printf("Enter the number: ");
	scanf("%d",&no);
	
	printf("Enter the divisor: ");
	scanf("%d",&divisor);
	
	remainder = no % divisor;
	
	printf("The remainder is: %d",remainder);
	
	return 0;
}
