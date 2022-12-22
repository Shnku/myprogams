#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int i,n,yes=0;
	printf("entyr the string...  ");
	gets(a);   // 	scanf("%s",a);
	n=strlen(a);
 
	for(i=0;i<=n;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			yes=1;
			break;
		}
	}
	if(yes==1) //if(yes)
		printf("\ntsis is not palin drome. ");
	else
		printf("\ntsis is palin drome. ");
		
return 0;
}
