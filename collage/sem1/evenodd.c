#include <stdio.h>
void main()
{
    int n,rem;
    printf("\n enter yhe no: ");
    scanf("%d",&n);
    rem= n%2;
    if(rem==0)
        printf("evwn");
    else
        printf("odd");
}

