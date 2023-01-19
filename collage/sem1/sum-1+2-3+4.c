#include <stdio.h>
#include <math.h>
int main()
{
    int i,s,n;
    printf("en the nth term: ");
    scanf("%d",&n);

/*way 1 for print -1+2-3+4-5+6.....*/
    for(i=1,s=0; i<=n; i++)
    {
        if(i%2==0)
            s=s+i;
        else
            s=s-i;
    }
    printf("\n the sum is %d",s);

/*way  for print -1+2-3+4-5+6.....*/
    for(i=1,s=0; i<=n; i++)
    {
        s=s+pow(-1,i)*i;
    }
    printf("\n the sum is %d",s);
}

