//file contents printing programme.......
#include <stdio.h>
int main()
{
	FILE *fp;
	char buf[20]; int num;
	
/*using fgetc function*/  
	fp=fopen("file2.txt","r+");
	
	fgets(buf,20,fp); 
	printf("contents of the file:\t%s",buf);
	fgets(buf,20,fp); 
	printf("contents of the file:\t%s",buf);
	fgets(buf,20,fp); 
	printf("contents of the file:\t%s",buf);
	
	fclose(fp);

/*using fputc function */
	fp=fopen("file2.txt","r+");
	
	buf[20]=fgetc(fp);
	printf("\ncontents of the file ...\t%c",buf[20]);//[20]না দিলে error দেখাচ্ছে 
	buf[20]=fgetc(fp);
	printf("\ncontents of the file ...\t%c",buf[20]);
	buf[20]=fgetc(fp);
	printf("\ncontents of the file ...\t%c",buf[20]);
	buf[20]=fgetc(fp);
	printf("\ncontents of the file ...\t%c",buf[20]);
	buf[20]=fgetc(fp);
	printf("\ncontents of the file ...\t%c",buf[20]);

	fclose(fp);
	
/*using fprintf function */
	fp=fopen("file2.txt","r+");
	
	while(fp==NULL)
		//printf("\ncontents : \t%s",fscanf(fp,"%s",buf));  //erreor দেখাচ্ছে, 
		fscanf(fp,"%s",buf);
	printf("\n\ncontents of the file...       \t%s",buf);
	
	fclose(fp);

/*intiger file opening */
	fp=fopen("filenum.txt","r+");
	
	num = getw(fp);
	printf("\ncontents of no file is:         %d",num);
	//while ( (num = getw(fp)) != -1 )
	//{
    //printf("\ncontents of number file  %d\n", num);
	//}
	
	fclose(fp);

return 0;
}

