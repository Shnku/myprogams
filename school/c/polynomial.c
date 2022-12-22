#include <stdio.h>
int valu1(int a)
{
	printf("enter the cofficient for . x^2= ");
	scanf("%d",&a);
}

int valu2(int a)
{
	printf("enter the cofficient for . x = ");
	scanf("%d",&a);
}

int valu3(int a)
{
	printf("enter the cofficient for . 1= ");
	scanf("%d",&a);
}

int main()
{
	int a,b,c,d,e,f;
	valu1(a);
	valu2(b);
	valu3(c);
	printf("the first poly is..  %dx^2 + %dx + %d",a,b,c);
	
	//valu1(d);
}
