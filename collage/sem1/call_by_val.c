#include <stdio.h>
void swap(int,int);
int main()
{
    int a=5,b=6;
    printf("\nbefore swap in main:\n a=%d, b=%d",a,b);
    swap(a,b);
    printf("\nafter swap in main:\n a=%d, b=%d",a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    printf("\nbefore swap in func.swap:\n a=%d, b=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\nafter swap in func.swap:\n a=%d, b=%d",x,y);
}