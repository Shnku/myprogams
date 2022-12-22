#include <stdio.h>
int main()
{
	int n;
	printf("en the row range: ");
	scanf("%d", &n);

	// upper pytamid...
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			printf("-");
		}
		for (int k = 1; k <= i - 1; k++)
		{
			printf("*");
		}
		for (int p = 1; p <= i; p++)
		{
			printf("$");
		}
		printf("\n");
	}
	// doen pyramid....
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("-");
		}
		for (int k = i; k <= n - 1; k++)
		{
			printf("$");
		}
		for (int p = i; p <= n; p++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
