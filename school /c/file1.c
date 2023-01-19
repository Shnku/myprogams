#include <stdio.h>
#include <string.h>
int vowel(char a[500])
{
	int i,j,cnt=0;
	printf("en yoye words.. ");
	gets(a);
	//puts(a);
	i=strlen(a);
	for(j=0;j<i;j++)
	{
		if(a[j]=='a'|| a[j]=='e'||a[j]=='i'|| a[j]=='o'||a[j]=='u'|| a[j]=='A'|| a[j]=='E'|| a[j]=='I' || a[j]=='O'|| a[j]=='U')
		{
			cnt++;
		}	
	}
	//printf("%d",cnt);
return cnt;
}

int main()
{
	char st[500];
	printf("counter vowel is.. %d",vowel(st));
}


