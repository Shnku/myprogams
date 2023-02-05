#include <stdio.h>
int main()
{
    float n,i,f=1,s=0,x;
    printf("\nen the nth and x:");
    scanf("%d%d", &n,&x);
    for(i=0;i<=n;i++){
        f=f*i;
        s=s+x/f;
    }
    printf("\nthe sum is: %d",s);
    return 0;
}