#include <stdio.h>

int main()
{
    int a[5],i,j,temp;
    printf("\nen the 5 value\n");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    for(i=0;i<5-1;i++){
        for(j=0;j<5-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nthe shorted array is:\n");
    for(i=0;i<5;i++)
        printf(" %d",a[i]);
    return 0;
}