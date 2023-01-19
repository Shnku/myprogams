# include <stdio.h>
int main()
{
	int x=5, *j;
	j=&x;
	printf("%d\t%u\n\n",x,j);
	printf("%d\t%u\n",&x,*j);
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",*&x);
	printf("%d\n",&j);
	printf("%d",*&j);
	//printf("%d",*x);
return 0;
}
