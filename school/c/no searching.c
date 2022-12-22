#include <stdio.h>

int main()
{
	int a[5],i,s;
	printf("en some nos...  ");
	//scanf("%d",n);
	for(i=0;i<5;i++)
	{
		scanf("%d",a);
	} 
	printf("\nenter your number =  ");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(a[i]==s)
			printf("\nfound");
		else   
			break;		
	} 
	if(a[i]==0)
		printf("\nnot found");
	return 0;
}

