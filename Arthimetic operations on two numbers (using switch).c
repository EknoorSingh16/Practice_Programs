#include<stdio.h>

int main()
{
	int n1, n2, ch, a, s, d, m, mod;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	
	printf("Enter second number: ");
	scanf("%d",&n2);
	
	printf("Enter the operator you want to use (1.+, 2.-, 3./, 4.*, 5*%):  ");
	scanf("%d",&ch);
	
	a = n1 + n2;
	s = n1 - n2;
	d = n1 / n2;
	m = n1 * n2;
	mod = n1 % n2;
	
	switch(ch)
	{
		case 1:
			printf("The addition of the number is: %d",a);
			break;
			
		case 2:
			printf("The subtraction of the numbers is: %d",s);
			break;
			
		case 3:
			printf("The divison of the numbers is: %d",d);
			break;
			
		case 4: 
			printf("The multiplication of the numbers is: %d",m);
			break;
			
		case 5:
			printf("The modulus of the numbers is: %d",mod);
			break;
			
		default: 
			printf("ERROR!! ENTER CORRECT OPERATOR OPTION (1-5)");
	}
	
	return 0;
}
