#include<stdio.h>
int main()
{
	int nth;
	printf("en hth no: ");
	scanf("%d",&nth);
	
	for(int i=0;i<=nth;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
