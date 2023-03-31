#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void entr_arr(int[], int size);
void creat_manual_sized_arr(int[], int *size);
void creat_dma_arr(int[], int dynamicsize);
void disp_arr(int[], int size);

/*
int main()
{
    // int a[SIZE];
    // entr_arr(a, SIZE);
    // disp_arr(a, SIZE);
    int n;
    printf("\nn=%d", n);
    int arr[n];
    printf("\nn=%d", n);
    creat_manual_sized_arr(arr, &n);
    printf("\nn=%d", n);
    disp_arr(arr, n);
    return 0;
}
*/

int main()
{
    int n;
    int arr[n];
    creat_dma_arr(arr, n);
    disp_arr(arr, n);
}

/*---------FUNCTIONS DECLERATONNS ARE BELLOW------*/
// func for input the array.........
void entr_arr(int arr[], int size)
{
    // if (size != SIZE)
    // {
    //     printf("\nenter the size of arr: ");
    //     scanf("%d", &size);
    // } //this is not working cause *call by vlu***
    printf("\nenter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &i[arr]);
    }
}
// func for manual length array.....
// this is not working.....
void creat_manual_sized_arr(int a[], int *size)
{
    printf("\nenter the array size: ");
    // scanf("%d", &(*size));
    scanf("%d", size);
    printf("\nenter the elements:\n");
    for (int i = 0; i < (*size); i++)
    {
        scanf("%d", &i[a]);
    }
}
// func using malloc to create array...
void creat_dma_arr(int a[], int size)
{
    printf("\nenter the array size: ");
    scanf("%d", &size);
    a = (int *)malloc(size * sizeof(int));
    printf("\nenter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}
// func for display the array.........
void disp_arr(int arr[], int size)
{
    printf("\nthe elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
}
