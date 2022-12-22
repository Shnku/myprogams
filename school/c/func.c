#include <stdio.h>
int fnc()
{
	printf("\ni am in func..\n");
	return 0;
}
int fnc2()
{
	int a,b;
	printf("\nthis is fnc 2 en your no....\n ");
	scanf("%d%d",&a,&b);
	printf("the sim is.. %d",a+b);
	return 0;
}
int func3(int v,int t)
{
	printf("\n\n func 3 output is multipication");
	return v*t;
	
}

int main()
{
	printf("\ncallind the func ..\n");
	fnc();
	fnc2();
	int a=3,b=5,c;
	c=func3(a,b);
	printf("\n%d",c);
}


