#include <stdio.h>

int main()
{
    int a[5];
    int i,key,flag=0;
    printf("\nen 5 values for  array:\n");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    printf("\nen the vlu to search");
    scanf("%d", &key);
    for(i-0; i<5; i++)
    {
        if (a[i]==key){
            flag=1;
            break;
        }   
    }
    if(flag==1)
        printf("\nfound");
    else
        printf("\nnot found");
    return 0;
}