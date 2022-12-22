#include <stdio.h>
int main()
{
int a[3][3],b[3][3],i,j,c[3][3];
	printf("en 9 no..3x3 for a ..\n");
// storing the value for a 2d-array..
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
// storing the value for b 2d-array..
	printf("en 9 no..3x3 for b ..\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);

	printf("....................\n");

// addition of a & b is c....
	printf("\naddition = .......\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[3][3]=a[i][j]+b[i][j];
			printf("   %d",c[3][3]);
		}
		printf("\n");
	}
// subtraction of a & b is c...
	printf("\nsubtraction = ......\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[3][3]=a[i][j]-b[i][j];
			printf(" \t %d",c[3][3]);
		}
		printf("\n");
	}
return 0;
}
/*	// printing as matrix from.....
 * for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("'+' or '-' or 'x'..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	*/
