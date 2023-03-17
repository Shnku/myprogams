#include <stdio.h>
#include <stdlib.h>

void getdata(int, int *, int);
void display(int *, int);
void sum(int *, int);

int main()
{
    int size, *pointer = NULL;
    printf("\nenter the list size:");
    scanf("%d", &size);
    pointer = malloc(size * sizeof(int));
    getdata(0, pointer, size);
    display(pointer, size);
    sum(pointer, size);

    pointer = realloc(pointer, size + 5); // here we allocate the same pointer.
    getdata(size, pointer, size + 5);
    display(pointer, size + 5);

    return 0;
}

void getdata(int start, int *p, int count) // Default argument values cannot be given in C. This feature is available in C++, but not in C
{
    printf("\nenter list data:\n");
    for (int i = start; i < count; i++)
    {
        scanf("%d", p + i);
    }
}

void display(int *p, int count)
{
    printf("\nthe list is: ");
    for (int i = 0; i < count; i++)
    {
        printf(" %d", *(p + i));
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
