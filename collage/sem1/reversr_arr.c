#include <stdio.h>

int main()
{
    int a[5],i;
    printf("\nen the 5 array element\n");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    printf("\nthe array before reverse: ");
    for(i=0;i<5;i++)
        printf(" %d", a[i]);

    printf("\nthe array after reverse: ");
    for(i=5-1;i>=0;i--)
        printf(" %d", a[i]);    

    return 0;
}