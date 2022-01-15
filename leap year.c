#include<Stdio.h>

int main()
{
	int year;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if((year % 4 == 0) && (year % 100 != 0))
	{
		printf("The entered year:%d is leap year",year);
	}
	else
	{
		printf("The entered year:%d is not a leap year",year);
	}
	return 0;
}
