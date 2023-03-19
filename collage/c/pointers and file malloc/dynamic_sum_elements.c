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
    for (int i = 0; i < size; i++)
        printf("\nthe aderss of pointer %p: ", pointer + i);

    int *pointer2 = realloc(pointer, size + 5); // here we allocate the same pointer.
    getdata(size, pointer2, size + 5);
    display(pointer2, size + 5);
    sum(pointer2, size + 5);

    for (int i = 0; i < size + 5; i++)
        printf("\nthe aderss of ptr[%d] %p: ", i, pointer2 + i);

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

/**/
/*output*/
/*
enter the list size:3
enter list data:
2
3
12

the list is:  2 3 12
the sum is : 17 //need size +5
the aderss of pointer 0x564eaae58ac0:
the aderss of pointer 0x564eaae58ac4:
the aderss of pointer 0x564eaae58ac8:
enter list data:
5
6
2
3
1

the list is:  2 3 12 5 6 2 3 1
the sum is : 17
the aderss of ptr[0] 0x564eaae58ac0: //same
the aderss of ptr[1] 0x564eaae58ac4: //same 0+4
the aderss of ptr[2] 0x564eaae58ac8: //same as before 4+4
the aderss of ptr[3] 0x564eaae58acc: //8+4=12 = c
the aderss of ptr[4] 0x564eaae58ad0: //12+4=16 = d0
the aderss of ptr[5] 0x564eaae58ad4: //allocating contigious
the aderss of ptr[6] 0x564eaae58ad8:
the aderss of ptr[7] 0x564eaae58adc:
*/
/*still allocating contigious if allocate another pointer...*/
