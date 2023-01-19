#include <stdio.h>
#include <string.h>

int check_while(char a[100],int n); //palindrome using while loop
int check_for(char a[100],int n);  //palindropme using for loop
int another_for(char a[100],int n); //2 times for with a[i] or b[i] 
int palindrome_return(char a[100],int n);  //easyest using return

int main()
{
	char a[100];
	printf("en string:");
	gets(a);
	int n;
	n=strlen(a); 
//calling functions....
	check_for(a,n);
	check_while(a,n);
	
	if(palindrome_return(a,n))
		printf("\nreturn=palindrome");
	else
		printf("\nreturn=not palindrome");
return 0;
}

/*palindropme using for loop..... */
int check_for(char a[100],int n)
{
	int i,yes=0;
	for(i=0;i<=n;i++)
	{
		if(a[i]!=a[n-i-1])
		{	yes=1;
			break;
		}
	}
	if(yes==1) //if(yes)
		printf("\ntsis is not palin drome. ");
	else
		printf("\ntsis is palin drome. ");
return 0;
}

/* palindrome using while loop.*/
int check_while(char a[100],int n)
{
	int i=0,j=n-1;
	while(j>i)
	{
		i++;j--;
		printf("\n%c ..... %c",a[i],a[j]);
		
		if(a[i++]!=a[j--])
		{	printf("\nit is not palindrome");
			return 0;
		}		
		else
			 printf("\nit is palindrome");
	}
	//printf("\nit is palindrome");
return 0;	
}

/*easy by using return */
int palindrome_return(char a[100],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[n-i-1])  //extra -1 for null character
		{	return 0;
			break;
		}
	}
	return 1;
}

/*for looping 2  */
int another_for(char a[100],int n)
{
	char temp[100];
	int i;
	for (i=0;i<n;i++)
	{
		temp[i]=a[n-i-1];
	}
	for (i=0;i<n;i++)
	{
		if (a[i]=temp[i])
		{
			printf("\npalindrome string..");
		}
		else 
			printf("\npalindrome string..");
	}
}
