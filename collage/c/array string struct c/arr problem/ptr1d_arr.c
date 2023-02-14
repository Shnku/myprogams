#include <stdio.h>
#include <stdlib.h>
int get_val();
void create_arr(int *arr_ptr, int nth);
void disp_arr(int *a, int nth);
void ptr_creat(int *a, int nth);
void ptr_disply(int *a, int nth);
void change_val(int aray[]);

int main()
{
    int size = get_val();
    //! size always need to get at first............

    // int array[size]; //?general.....
    int *array = (int *)malloc(size * sizeof(int)); //?dynamic..

    // create_arr(array, size);
    ptr_creat(array, size);
    // disp_arr(array, size);
    ptr_disply(array, size);
    change_val(array);
    disp_arr(array, size);

    free(array);
    return 0;
}

/*func decleartions............*/
int get_val()
{
    int size;
    printf("\nenter the size: ");
    scanf("\%d", &size);
    return size;
}

void create_arr(int *arr_ptr /*int arr[]*/, int nth)
{
    printf("\nenter array elements==\n");
    for (int i = 0; i < nth; i++)
        scanf("\%d", &arr_ptr[i]);
}

void disp_arr(int *a /*int arr[]*/, int s)
{
    printf("\ndisplaying the array: ");
    for (int i = 0; i < s; i++)
        printf(" %d", a[i]);
}

void ptr_creat(int *a, int nth)
{
    printf("\nenter array elements==\n");
    for (int i = 0; i < nth; i++)
        scanf("%d", (a + i));
}

void ptr_disply(int *a, int nth)
{
    printf("\ndisplay array elements== ");
    for (int i = 0; i < nth; i++)
        printf("%d  ", *(a + i));
}

void change_val(int a[])
{
    // a[2]=9999;
    *(a + 2) = 9999;
}
