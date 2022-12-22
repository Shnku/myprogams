#include <stdio.h>
int count(int a);
//global veriable number...
int no;
//to find palindrome or not ..
int palindrome(int a)
{
	int q,r,s=0;
	q=a;
	while(q!=0)
	{
		r=q%10;
		s=s*10+r;
		q=q/10;
	}
	if(s==a)
		printf("\nthis is palindrome");
	else
		printf("\nthis is not palindrome");
	return 0;
}

int main()
{
	printf("en the no.. ");
	scanf("%d",&no);
	//count(no);
	printf("en digit no is %d",count(no));
	palindrome(no);
	return 0;
}

//func to count digit of a no..
int count(int a)
{
	int cnt=0;
	while(a!=0)
	{
		a=a/10;
		cnt++;
	}
	return cnt;    //printf("en digit no is %d",cnt);
}
