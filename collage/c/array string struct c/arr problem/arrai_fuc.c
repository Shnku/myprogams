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

void shift_array(int *a[], int size)
{
    int shift_count;
    printf("\nen ter the no of shift: ");
    // scanf("%d", &shift_count);
    // for (int i = 1; i <= shift_count; i++)
    // {
        printf("\n%d",size);
        printf("\n%d",a[size-1]);
        // int temp = *a[size - 1];
        // for (int j = size - 1; j >= 1; j--)
        // {
            // a[j] = a[j - 1];
        // }
        // *a[0] = temp;
    // }
}

/*....incomplete  ....*/