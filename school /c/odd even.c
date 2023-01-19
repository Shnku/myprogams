#include <stdio.h>
int main()
{
	int no[5];
	for(int i=0;i<5;i++)
	{	printf("en the no.. ");
		scanf("%d",&no[i]);
	}
	for(int i=0;i<5;i++)
		if(no[i]%2==0)
			printf("\neven no are %d",no[i]);	
	printf("\n");
	for(int i=0;i<5;i++)
		if(no[i]%2!=0)
			printf("\nodd no are %d",no[i]);
				
return 0;
}
