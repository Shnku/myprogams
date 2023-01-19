#include <stdio.h>
void main()
{
    int n,rem,s;
    printf("\n enter the year: ");
    scanf("%d",&y);

    if(n%100==0)
        s=n%400;
    else
        s=n%4;

    if(s==0)
        printf("\nleapyear");
    else    
        printf("\nnot leapyear");
}
