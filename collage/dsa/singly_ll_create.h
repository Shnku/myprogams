#include <stdio.h>
#include <stdlib.h>

int get_input();
typedef struct node
{
    int data;
    struct node *p_nxt;
} LIST;

int get_input()
{
    int n;
    printf("\nenter the input: ");
    scanf("%d", &n);
}
