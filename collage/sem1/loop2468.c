#include <stdio.h>
void main()
{
    int i=2,n;
    printf("\nen the nth: ");
    scanf("%d",&n);
    do{
        printf("%d ",i);
        i+=2;
    }while(i<=n);
}
