#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("en the array elements:  ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n....the array before reverse.....");
    for(i=0;i<=4;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n....the array after reverse.....");
    for(i=4;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }
    
}