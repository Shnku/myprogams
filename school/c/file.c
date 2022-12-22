#include <stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen("file1.txt","a+");
	fp=fopen("nofile.txt","a+");
	//writing.......
	/*fprintf(fp,"this is written in the file ");
	fprintf(fp, "Hello file by fprintf...\n");
	fputc('a',fp);
	fputs("tyddytrty",fp); */
	int a;
	printf("en number\n");
	scanf("%d",&a);
	putw(a,fp);
	
	//reading.......
	
	//char a[100],b[100];
	//wlile(fp!=NULL)
	/*{ 
		printf("ouitput.. ",fscanf(fp,"%s",a));
    }  */
	//printf("\nouitput.. ",fgetc(fp));
	//printf("%s",fgets(b,100,fp)); 
	fclose(fp);
}   

