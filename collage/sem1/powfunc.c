#include <stdio.h>
int sqr(int);
int main()
{
    int no;
    printf("\nen the no: ");
    scanf("%d", &no);
    printf("\nthe square is: %d",sqr(no));
    return 0;
}

int sqr(int n){
    return n*n;
}