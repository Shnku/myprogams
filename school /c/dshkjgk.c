//find max from 10 nos..

#include <stdio.h>
int main()
{
	int a[5],i,max;
	printf ("en the numbers..");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	
	max=a[0];
	for(i=1;i<5;i++)
		if(max<a[i])
		{
			max =a[i];
		}
	printf("maximum  is %d ",max);

}
