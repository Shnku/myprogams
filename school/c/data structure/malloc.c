#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *ptr=0;
	printf("enter no of allocation :  ");
	scanf("%d",&a);
	ptr=(int*)malloc(a*sizeof(int));
	
	if(ptr==0)
	{
		printf("\nmemory not abailsable");
		exit (1);
	}
	for(int i=0;i<a;i++)
	{
		printf("en a no :    ");
		scanf("%d",ptr+i);
	}
	for(int i=0;i<a;i++)
	{
		printf(" %d  ",*(ptr+i));
	}
}
