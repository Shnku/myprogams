#include <stdio.h>
int evn_odd(int no)
{
	if(no/2==0)
		printf("\nno is even");
	else
		printf("\nno is odd");
	return 0;
}

int main()
{
	FILE *opn;
	opn=fopen("nofile.txt","r+");
	int n;
	n=getw(opn);
	printf("\ncontents of the file is : %d",n);	
	evn_odd(n);
	fclose(opn);
}
