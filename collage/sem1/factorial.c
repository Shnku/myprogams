#include <stdio.h>
int facto(int );
int main()
{
    int i,nth,facto=1;
    printf("en the nth term: ");
    scanf("%d",&nth);
    i=1;
    while(i<=nth)
    {
        facto=facto*i;
        i++;
    }
    printf("the factorial is: %d\n",facto);
    return 0;
}

int facto(int n){
    if(n==0)
        return 1;
    else
        return n*facto(n-1);
}