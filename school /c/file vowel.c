#include <stdio.h>
#include <string.h>
int vowel(char a[50])
{
	int i,j,cnt=0;
	//scanf("%s",a); //gets(a); //puts(a);
	i=strlen(a);
	for(j=0;j<i;j++)
	{
		if(a[j]=='a'|| a[j]=='e'||a[j]=='i'|| a[j]=='o'||a[j]=='u'|| a[j]=='A'|| a[j]=='E'|| a[j]=='I' || a[j]=='O'|| a[j]=='U')
		{
			cnt++;
		}	
	}
	printf("\n\nnumber of vowel in the txt file is = %d",cnt);
	return cnt;
}
int main()
{
	FILE *ptr;
	ptr=fopen("file1.txt","r+");
	char bfr[50];
	fgets(bfr,50,ptr);
	printf("ফাইলে লেখা আছে ..   %s",bfr);
	vowel(bfr);    //[50]হবে না 
	//printf("%d",vowel(bfr[50]));
	fclose(ptr);
}

