#include <stdio.h>
int main()
{
	FILE *fp; 
	int n;
	fp=fopen("filenum.txt","w");
	printf("en yer no... "); 
	scanf("%d",&n); 
	putw(n, fp);
	fclose(fp);
	
	fp=fopen("filenum.txt","r");
	//int num;
	//int num=getw(fp);		
	n=getw(fp);	
	printf("\ncontents of the file is : %d",n);	
	fclose(fp);
	return 0;
}


