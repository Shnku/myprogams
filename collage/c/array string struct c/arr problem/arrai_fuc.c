/*wrong code  */
/*
The variable s is uninitialized before being used in int *b[s], which can lead to undefined behavior.
You should initialize s before declaring int *b[s].

In the creat_array function, the pointer a is an array of pointers,
so you need to dereference it using *a[i] before assigning values to it.

Similarly, in the display_array function, you need to dereference the pointers before printing their values using *a[i].

The return type of the display_array function is void, but there is a commented out line that tries to return an integer. This should be removed.

*/

#include <stdio.h>
void creat_array(int *a[], int size);
void display_array(int *a[], int size);

int main()
{
    int s;
    int *b[s]; //! this will nwvwr work like this way ....
    //! here need dynamic allocation.......
    // int *a[]=b;
    creat_array(b, s);
    display_array(b, s);
    // shift_array(b, s);
    // display_array(b, s);
    return 0;
}

// functions definitions......
void creat_array(int *a[], int size)
{
    printf("enter array size: ");
    scanf("%d", &size);
    printf("enter array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display_array(int *a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
        // printf(" %d ", *i[a]);
        // return a[i];
    }
}

/*
correct version using dma..
*/
/*
#include <stdio.h>
void creat_array(int *a[], int size);
void display_array(int *a[], int size);

int main()
{
    // Initialize variable s to a value.
    int s = 0;
    printf("enter array size: ");
    scanf("%d", &s);

    int *b[s];
    creat_array(b, s);
    display_array(b, s);

    return 0;
}

// functions definitions......
void creat_array(int *a[], int size)
{
    printf("enter array : ");
    for (int i = 0; i < size; i++)
    {
        // Dereference the pointer before assigning a value.
        a[i] = malloc(sizeof(int));
        //we doesnot need malloc if b is not a ptr; : *b[s];
        scanf("%d", a[i]);
    }
}

void display_array(int *a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Dereference the pointer before printing its value.
        printf(" %d", *a[i]);
    }
}

*/
