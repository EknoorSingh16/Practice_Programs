#include <stdio.h>

int main()
{
	int i , j, k = 1, n=4;
	
	for ( i = 1; i <= n; i++)
	{
		for( j = 1; j <= i; j++)
		{
			printf( "%2d ", k++);
		}
		printf("\n");
		}
}
