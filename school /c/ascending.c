// ascending oirder of arreyes

#include <stdio.h>
int main()
{
	int a[5],i,j,tmp;
	printf("en the no...\n");
	for(i=0;i<5;i++)
	 scanf("%d",&a[i]);

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
	}
	printf("the ascending order is.. \n");
	for(i=0;i<5;i++)
		printf(" %d",a[i]);

}
