#include <stdio.h>
int main()
{
    int i,s,n;
    printf("en the nth: ");
    scanf("%d",&n);

    for(i=7,s=0; i<=n; s+=i, i+=7)
    {
    }
    printf("the sum is %d\n",s);
    return 0;
}
