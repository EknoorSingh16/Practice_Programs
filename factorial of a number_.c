#include<Stdio.h>

int main()
{
	unsigned long long fact = 1;
	int i,n;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	//if entered integer is less than zero
	if(n<0)
	{
		printf("ERROR!! ENTER POSITIVE INTEGER");
	}
	else
	{
		for(i=1;i<=n;++i)
		{
			fact = fact * i;
		}
		printf("The factorial of %d is: %llu",n,fact);
	}
	return 0;
}
