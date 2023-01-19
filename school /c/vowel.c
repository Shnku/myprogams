//to find no of vowel in the file ... 
#include "stdio.h"
#include "string.h"
int main()
{
	char a[500];
	int i,j,cnt=0;
	printf("en yoye words.. ");
	//scanf("%s",a);  //এটা  স্পেসের পরের থেকে নিতে পারবে না, 
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
	printf("%d",cnt);

return 0;
}

