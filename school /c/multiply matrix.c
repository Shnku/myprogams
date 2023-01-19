#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
//readind matrix...........
	printf("en 3x3 matrix value..for a...\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("en 3x3 matrix value..for b...\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);

//multiplication of 3x3 array....
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j] = c[i][j]+ a[i][k]*b[k][j];
			}
		}
//printing multipication .............
printf("the multiplication of two matrix is..\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf(" \t%d  ",c[i][j]);
			}
		printf("\n");
	}
return 0;
}

