#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	int *ptr=0;
	printf("en the no of allocate :   ");
	scanf("%d",&n);	
//first time memory allocation.........
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==0){
		printf("memory not allocated..");
		exit (1);
	}
	for(i=0;i<n;i++)
	{
		printf("\nenter a no:   ");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(ptr+i));
	}
//reallocation of memory...........
	ptr=(int*)realloc(ptr,4*sizeof(int));
	if(ptr==0){
		printf("memory not allocated..");
		exit (1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter a no:   ");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(ptr+i));
	}
	
}




