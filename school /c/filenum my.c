#include <stdio.h>
int main()
{
	int a,b;
	FILE *fp;
	fp=fopen("filenum.txt","w");
	printf("en the nos..");
	scanf("%d",&a);	
	putw(a,fp);	
	//rewind(f);
	b=getw(fp);
	printf("\n%d",b);
	printf("%d",getw(fp));
	fclose(fp);
}
	
