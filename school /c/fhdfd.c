//2d array...........

#include <stdio.h>
int main()
{
	int a[3][3],/*={{1,2,3},{2,5,6},{2,5,6}},*/i,j;

	printf("enter the 9 array values......\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}

	printf("the array output is like a matrix...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("  %d",a[i][j]);
		printf("\n"); 
	}

	return 0;
}
