#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	switch(num>0)
	{
		case 1: 
			printf("The chosen number:%d is postive",num);
			break;
			
		case 0:
			switch(num<0)
			{
				case 1:
					printf("The chosen number:%d is negative",num);
					break;
					
				case 0:
					switch(num==0)
					{
						case 1:
						printf("The chosen number is zero");
						break;
					}
			}
	}
	return 0;
}
