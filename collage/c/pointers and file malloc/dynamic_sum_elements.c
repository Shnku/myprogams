#include <stdio.h>
#include <stdlib.h>

void display(int *, int);
void display(int *, int);
void sum(int *, int);

int main()
{
    int size, *pointer = NULL;
    printf("\nenter the list size:");
    scanf("%d", &size);
    pointer = malloc(size * sizeof(int));
    getdata(pointer, size);
    display(pointer, size);
    sum(pointer, size);
    return 0;
}

void getdata(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        scanf("%d", p + i);
    }
}

void display(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\t %d", *(p + i));
    }
}

void sum(int *p, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += (*(p + i));
    }
    printf("\nthe sum is : %d", sum);
}
