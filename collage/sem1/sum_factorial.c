#include <stdio.h>
int main()
{
    int n,i,f=1,s=0;
    printf("\nen the nth:");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        f=f*i;
        s=s+i;
    }
    printf("\nthe sum is: %d",s);
    return 0;
}