#include <stdio.h>
void creat_array(int *a[], int size);
void display_array(int *a[], int size);

int main()
{
    int s;
    int *b[s];
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
        printf(" %d",a[i]);
        // printf(" %d ", *i[a]);
        // return a[i];
    }
}

