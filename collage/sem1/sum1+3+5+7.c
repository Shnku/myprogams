#include <stdio.h>
int main()
{
    int i=1,s=0,n;
    printf("en the nth: ");
    scanf("%d",&n);
    do{
        s=s+i;
        i+=2;
    }while(i<=n);
    printf("the sum is %d ",s);
    return 0;
}
