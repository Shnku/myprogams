#include <stdio.h>
#define row 12
#define col 10
int main()
{
	int i,j;
	printf("==============================================\n");
	printf("             MULTIPLICATION TABLE \n");
	printf("==============================================\n    ");
	
	for(i=1;i<=col;i++)
	printf("%4d",i);
	printf("\n    _________________________________________\n");
	for(j=1;j<=row;j++)
	{
		printf("%2d |",j);
		for(i=1;i<=col;i++)
		{
			printf("%4d",j*i);		
		}
		printf("\n");
	}	
	return 0;
}

