#include <stdio.h>
#include <string.h>
int reverse(char a[100],int n);   //only reverse the string 
char strrev(char a[100]) //strrev only works for ANSI C
{
	
	printf("%s",strrev(a));
	return 0;
}
int main()
{
	char a[100];
	int n;
	printf("entyr the string...  ");
	gets(a);   // 	scanf("%s",a);
	n=strlen(a);
	reverse(a,n);
	strrev(a);
}
/*only reversing ....simple programme......*/
int reverse(char a[100],int n)
{
	//gets(a);//int n;//n=strlen(a); 
	int i;
	for(i=n;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	//printf("%d",n);
	//printf("%c",a[5]);
	//printf("%c",a[4]);
	//printf("%c",a[3]);
	//printf("%c",a[2]);
	//printf("%c",a[1]);
	//printf("%c",a[0]);
	return 0;
}
