#include<stdio.h>

int main()
{
    FILE *f1,*f2,*f3;
    int number,i;
	f1=fopen("data","w");
	for(i=0;i<6;i++)
	{
		scanf("%d",&number);
		putw(number,f1);
	}
	fclose(f1);
	
	f1=fopen("data","r");
	f2=fopen("odd","w");
	f3=fopen("even","w");
	while((number=getw(f1))!=EOF)
	{
		if (number%2==0)
		putw(number,f3);
		else
		putw(number,f2);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	fopen("odd","r");
	fopen("even","r");
	
	printf("\nContent in odd file : ");
	while((number=getw(f2))!=EOF)
	{
		// printf("\nContent in odd file   ");//বার বার প্রিন্ট করবে লুপের ভেতরে দিলে 
		printf("   %d",number);
	}
	printf("\nContent in Even file : ");
	
	while((number=getw(f3))!=EOF)
	{
		printf("   %d",number);
	}
	fclose(f2);
	fclose(f3);
    return 0;
}
